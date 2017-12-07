#include <gflags/gflags.h>
#include <glog/logging.h>
#include <fstream>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/data_reader.h"
#include "googleapis/client/service/media_uploader.h"
#include "googleapis/client/service/client_service.h"
#include "googleapis/client/data/data_reader.h"
#include "googleapis/client/transport/http_authorization.h"
#include "googleapis/client/transport/http_request.h"
#include "googleapis/client/transport/http_transport.h"
#include "googleapis/client/transport/curl_http_transport.h"
#include "googleapis/client/auth/file_credential_store.h"
#include "googleapis/client/auth/oauth2_authorization.h"
#include "googleapis/client/data/serializable_json.h"
#include "googleapis/client/util/status.h"
#include "googleapis/client/util/uri_utils.h"
#include "googleapis/strings/strcat.h"
#include "googleapis/strings/stringpiece.h"
#include "google/analytics_api/analytics_api.h"

using googleapis::client::HttpTransport;
using googleapis::client::HttpTransportLayerConfig;
using googleapis::client::OAuth2Credential;
//using googleapis::client::OAuth2ServiceAccountFlow;
#if HAVE_OPENSSL
using googleapis::client::OpenSslCodecFactory;
#endif
using googleapis::client::StatusInvalidArgument;

using googleapis::client::CredentialStore;
using googleapis::client::FileCredentialStoreFactory;
using googleapis::client::OAuth2AuthorizationFlow;
using googleapis::client::OAuth2Credential;
using googleapis::client::OAuth2RequestOptions;
using googleapis::client::HttpTransportOptions;
//using googleapis::client::HttpTransport;
using googleapis::client::HttpTransportFactory;
using googleapis::client::CurlHttpTransport;
using googleapis::client::CurlHttpTransportFactory;
using googleapis::client::DateTime;
using google_analytics_api::AnalyticsService;
using namespace std;

int main(int argc, char* argv[])
{
    google::InitGoogleLogging(argv[0]);
    google::ParseCommandLineFlags(&argc, &argv, true);
    google::InstallFailureSignalHandler();
    const std::string jsonFile(argv[1]);

    OAuth2Credential credential_;
    std::unique_ptr<AnalyticsService> analytics_;
    //std::unique_ptr<OAuth2ServiceAccountFlow> flow_;
    std::unique_ptr<OAuth2AuthorizationFlow> flow_;
    std::unique_ptr<HttpTransportLayerConfig> config_;
    googleapis::util::Status status;
    config_.reset(new HttpTransportLayerConfig);
    HttpTransportFactory* factory = new CurlHttpTransportFactory(config_.get());
    config_->ResetDefaultTransportFactory(factory);

    //flow_.reset(new OAuth2ServiceAccountFlow(config_->NewDefaultTransportOrDie()));
    flow_.reset(new OAuth2AuthorizationFlow(config_->NewDefaultTransportOrDie()));
    std::string json(std::istreambuf_iterator<char>(std::ifstream(jsonFile).rdbuf()),
                std::istreambuf_iterator<char>());

    flow_->InitFromJson(json);

    // --- NO BUILD ERROR WITH THIS
    flow_->set_default_scopes( "https://www.googleapis.com/auth/analytics.readonly" );

    // --- GOT ERROR ABOVE
    //flow_->set_default_scopes( google_analytics_api::AnalyticsService::SCOPES::ANALYTICS_READONLY );

    // --- GOT ERROR ABOVE
    analytics_.reset(new AnalyticsService(config_->NewDefaultTransportOrDie()));

    // --- GOT ERROR ABOVE
    //AnalyticsService* ga = new AnalyticsService(config_->NewDefaultTransportOrDie());

    if (!status.ok()) printf("status.ok() : ERROR - Could not initialize application.\n");
    else
    {
        printf("status.ok() : OK - Application succesfully initialized\n");
        //credential_.set_flow(flow_.get());
    }
    printf("Done\n");
    return 0;
}