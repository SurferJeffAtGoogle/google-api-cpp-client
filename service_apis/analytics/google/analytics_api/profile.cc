// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Analytics API (analytics/v3)
// Description:
//   Views and manages your Google Analytics data.
// Classes:
//   Profile
// Documentation:
//   https://developers.google.com/analytics/

#include "google/analytics_api/profile.h"
#include <string>
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_analytics_api {
using namespace googleapis;



// Object factory method (static).
Profile::ProfileChildLink* Profile::ProfileChildLink::New() {
  return new client::JsonCppCapsule<ProfileChildLink>;
}

// Standard immutable constructor.
Profile::ProfileChildLink::ProfileChildLink(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
Profile::ProfileChildLink::ProfileChildLink(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
Profile::ProfileChildLink::~ProfileChildLink() {
}

// Properties.

// Object factory method (static).
Profile::ProfileParentLink* Profile::ProfileParentLink::New() {
  return new client::JsonCppCapsule<ProfileParentLink>;
}

// Standard immutable constructor.
Profile::ProfileParentLink::ProfileParentLink(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
Profile::ProfileParentLink::ProfileParentLink(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
Profile::ProfileParentLink::~ProfileParentLink() {
}

// Properties.

// Object factory method (static).
Profile::ProfilePermissions* Profile::ProfilePermissions::New() {
  return new client::JsonCppCapsule<ProfilePermissions>;
}

// Standard immutable constructor.
Profile::ProfilePermissions::ProfilePermissions(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
Profile::ProfilePermissions::ProfilePermissions(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
Profile::ProfilePermissions::~ProfilePermissions() {
}

// Properties.
// Object factory method (static).
Profile* Profile::New() {
  return new client::JsonCppCapsule<Profile>;
}

// Standard immutable constructor.
Profile::Profile(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
Profile::Profile(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
Profile::~Profile() {
}

// Properties.
}  // namespace google_analytics_api
