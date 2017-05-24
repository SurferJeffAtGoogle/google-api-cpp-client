/*
 * \copyright Copyright 2013 Google Inc. All Rights Reserved.
 * \license @{
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @}
 */

//
// This is a sample application illustrating the use of the GoogleApis C++
// Client. The application makes calls into the Google Calendar service.
// The application itself is not particularly useful, rather it just
// illustrates how to interact with a live service.
//
// Usage:
//
// Calendar requires OAuth2 authorization, which in turn requires that the
// application be authorized using the https://code.google.com/apis/console.
// You will need to do this yourself -- creating your own client ID and
// secret in order to run it.
//
// For this example, you want to create an Installed Application
//    From the "API Access" tab, create an "Installed Application" client ID
//       Download the client secrets JSON file.
//    From the "Services" tab, give access to the Calendar API.
//
// If you already know the ID and secret, you can create the json file yourself
// from teh following example (including outer {}). Replace the "..." with
// your values, but be sure to quote them  (i.e. "mysecret" }
// {
//    "installed": {
//       "client_id": "...",
//       "client_secret": "..."
//    }
//  }
//
//
// When the program starts up you will be asked to authorize by copying
// a URL into a browser and copying the response back. From there the
// program executes a shell that takes commands. Type 'help' for a list
// of current commands and 'quit' to exit.

#include <iostream>
#include <fstream>
#include <sstream>
using std::cout;
using std::endl;
using std::ostream;  // NOLINT
#include <memory>
#include "gflags/gflags.h"
#include "googleapis/client/auth/oauth2_authorization.h"
#include "googleapis/client/auth/oauth2_service_authorization.h"
#include "googleapis/client/data/data_reader.h"
#if HAVE_OPENSSL
#include "googleapis/client/data/openssl_codec.h"
#endif
#include "googleapis/client/transport/curl_http_transport.h"
#include "googleapis/client/transport/http_authorization.h"
#include "googleapis/client/transport/http_transport.h"
#include "googleapis/client/transport/http_request_batch.h"
#include "googleapis/client/util/status.h"
#include "googleapis/strings/strcat.h"

#include "google/storage_api/storage_api.h"  // NOLINT

namespace googleapis {

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

using google_storage_api::StorageService;

using client::ClientServiceRequest;
using client::DateTime;
using client::HttpRequestBatch;
using client::HttpResponse;
using client::HttpTransport;
using client::HttpTransportLayerConfig;
using client::JsonCppArray;
using client::OAuth2Credential;
using client::OAuth2AuthorizationFlow;
using client::OAuth2RequestOptions;
#if HAVE_OPENSSL
using client::OpenSslCodecFactory;
#endif
using client::StatusCanceled;
using client::StatusInvalidArgument;
using client::StatusOk;

const char kSampleStepPrefix[] = "SAMPLE:  ";

class CalendarSample {
 public:
  static googleapis::util::Status Startup(int argc, char* argv[]);
  void Run();

 private:

  OAuth2Credential credential_;
  static std::unique_ptr<StorageService> storage_;
  static std::unique_ptr<OAuth2AuthorizationFlow> flow_;
  static std::unique_ptr<HttpTransportLayerConfig> config_;
};

// static
std::unique_ptr<StorageService> CalendarSample::storage_;
std::unique_ptr<OAuth2AuthorizationFlow> CalendarSample::flow_;
std::unique_ptr<HttpTransportLayerConfig> CalendarSample::config_;


/* static */
util::Status CalendarSample::Startup(int argc, char* argv[]) {
  if ((argc < 2) || (argc > 3)) {
    string error =
        StrCat("Invalid Usage:\n",
               argv[0], " <client_secrets_file> [<cacerts_path>]\n");
    return StatusInvalidArgument(error);
  }

  // Set up HttpTransportLayer.
  googleapis::util::Status status;
  config_.reset(new HttpTransportLayerConfig);
  client::HttpTransportFactory* factory =
      new client::CurlHttpTransportFactory(config_.get());
  config_->ResetDefaultTransportFactory(factory);
  if (argc > 2) {
    config_->mutable_default_transport_options()->set_cacerts_path(argv[2]);
  }

  // Set up OAuth 2.0 flow for a service account.
  auto service_account_flow = new client::OAuth2ServiceAccountFlow(
      config_->NewDefaultTransportOrDie());
  flow_.reset(service_account_flow);
  string json(std::istreambuf_iterator<char>(std::ifstream(argv[1]).rdbuf()),
              std::istreambuf_iterator<char>());
  flow_->InitFromJson(json);
  flow_->set_default_scopes(StorageService::SCOPES::DEVSTORAGE_FULL_CONTROL);

  storage_.reset(new StorageService(config_->NewDefaultTransportOrDie()));
  return status;
}




void CalendarSample::Run() {
  credential_.set_flow(flow_.get());
  google_storage_api::BucketsResource_ListMethod request(
      storage_.get(), &credential_, "bookshelf-dotnet");
  Json::Value value;
  google_storage_api::Buckets buckets(&value);
  auto status = request.ExecuteAndParseResponse(&buckets);
  if (!status.ok()) {
    std::cout << "Could not list buckets: " << status.error_message()
              << std::endl;
  }
  for (auto bucket: buckets.get_items()) {
    std::cout << bucket.get_self_link() << std::endl;
  }
}

}  // namespace googleapis

using namespace googleapis;
int main(int argc, char* argv[]) {
  google::InitGoogleLogging(argv[0]);
  google::ParseCommandLineFlags(&argc, &argv, true);
  googleapis::util::Status status = CalendarSample::Startup(argc, argv);
  if (!status.ok()) {
    std::cerr << "Could not initialize application." << std::endl;
    std::cerr << status.error_message() << std::endl;
    return -1;
  }

  CalendarSample sample;
  sample.Run();
  std::cout << "Done!" << std::endl;

  return 0;
}
