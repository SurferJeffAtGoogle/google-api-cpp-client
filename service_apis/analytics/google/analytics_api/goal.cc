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
//   Goal
// Documentation:
//   https://developers.google.com/analytics/

#include "google/analytics_api/goal.h"
#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_analytics_api {
using namespace googleapis;




// Object factory method (static).
Goal::GoalEventDetails::GoalEventDetailsEventConditions* Goal::GoalEventDetails::GoalEventDetailsEventConditions::New() {
  return new client::JsonCppCapsule<GoalEventDetailsEventConditions>;
}

// Standard immutable constructor.
Goal::GoalEventDetails::GoalEventDetailsEventConditions::GoalEventDetailsEventConditions(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
Goal::GoalEventDetails::GoalEventDetailsEventConditions::GoalEventDetailsEventConditions(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
Goal::GoalEventDetails::GoalEventDetailsEventConditions::~GoalEventDetailsEventConditions() {
}

// Properties.
// Object factory method (static).
Goal::GoalEventDetails* Goal::GoalEventDetails::New() {
  return new client::JsonCppCapsule<GoalEventDetails>;
}

// Standard immutable constructor.
Goal::GoalEventDetails::GoalEventDetails(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
Goal::GoalEventDetails::GoalEventDetails(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
Goal::GoalEventDetails::~GoalEventDetails() {
}

// Properties.

// Object factory method (static).
Goal::GoalParentLink* Goal::GoalParentLink::New() {
  return new client::JsonCppCapsule<GoalParentLink>;
}

// Standard immutable constructor.
Goal::GoalParentLink::GoalParentLink(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
Goal::GoalParentLink::GoalParentLink(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
Goal::GoalParentLink::~GoalParentLink() {
}

// Properties.


// Object factory method (static).
Goal::GoalUrlDestinationDetails::GoalUrlDestinationDetailsSteps* Goal::GoalUrlDestinationDetails::GoalUrlDestinationDetailsSteps::New() {
  return new client::JsonCppCapsule<GoalUrlDestinationDetailsSteps>;
}

// Standard immutable constructor.
Goal::GoalUrlDestinationDetails::GoalUrlDestinationDetailsSteps::GoalUrlDestinationDetailsSteps(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
Goal::GoalUrlDestinationDetails::GoalUrlDestinationDetailsSteps::GoalUrlDestinationDetailsSteps(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
Goal::GoalUrlDestinationDetails::GoalUrlDestinationDetailsSteps::~GoalUrlDestinationDetailsSteps() {
}

// Properties.
// Object factory method (static).
Goal::GoalUrlDestinationDetails* Goal::GoalUrlDestinationDetails::New() {
  return new client::JsonCppCapsule<GoalUrlDestinationDetails>;
}

// Standard immutable constructor.
Goal::GoalUrlDestinationDetails::GoalUrlDestinationDetails(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
Goal::GoalUrlDestinationDetails::GoalUrlDestinationDetails(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
Goal::GoalUrlDestinationDetails::~GoalUrlDestinationDetails() {
}

// Properties.

// Object factory method (static).
Goal::GoalVisitNumPagesDetails* Goal::GoalVisitNumPagesDetails::New() {
  return new client::JsonCppCapsule<GoalVisitNumPagesDetails>;
}

// Standard immutable constructor.
Goal::GoalVisitNumPagesDetails::GoalVisitNumPagesDetails(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
Goal::GoalVisitNumPagesDetails::GoalVisitNumPagesDetails(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
Goal::GoalVisitNumPagesDetails::~GoalVisitNumPagesDetails() {
}

// Properties.

// Object factory method (static).
Goal::GoalVisitTimeOnSiteDetails* Goal::GoalVisitTimeOnSiteDetails::New() {
  return new client::JsonCppCapsule<GoalVisitTimeOnSiteDetails>;
}

// Standard immutable constructor.
Goal::GoalVisitTimeOnSiteDetails::GoalVisitTimeOnSiteDetails(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
Goal::GoalVisitTimeOnSiteDetails::GoalVisitTimeOnSiteDetails(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
Goal::GoalVisitTimeOnSiteDetails::~GoalVisitTimeOnSiteDetails() {
}

// Properties.
// Object factory method (static).
Goal* Goal::New() {
  return new client::JsonCppCapsule<Goal>;
}

// Standard immutable constructor.
Goal::Goal(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
Goal::Goal(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
Goal::~Goal() {
}

// Properties.
}  // namespace google_analytics_api