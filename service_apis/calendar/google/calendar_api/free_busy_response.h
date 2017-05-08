// Copyright 2010 Google Inc.
//
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
//   Build date: 2017-02-15 17:18:02 UTC
//   on: 2017-04-06, 13:08:17 UTC
//   C++ generator version: 0.1.4

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Calendar API (calendar/v3)
// Generated from:
//   Version: v3
//   Revision: 243
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.4
#ifndef  GOOGLE_CALENDAR_API_FREE_BUSY_RESPONSE_H_
#define  GOOGLE_CALENDAR_API_FREE_BUSY_RESPONSE_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/calendar_api/free_busy_calendar.h"
#include "google/calendar_api/free_busy_group.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_calendar_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class FreeBusyResponse : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static FreeBusyResponse* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit FreeBusyResponse(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit FreeBusyResponse(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~FreeBusyResponse();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_calendar_api::FreeBusyResponse</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_calendar_api::FreeBusyResponse");
  }

  /**
   * Determine if the '<code>calendars</code>' attribute was set.
   *
   * @return true if the '<code>calendars</code>' attribute was set.
   */
  bool has_calendars() const {
    return Storage().isMember("calendars");
  }

  /**
   * Clears the '<code>calendars</code>' attribute.
   */
  void clear_calendars() {
    MutableStorage()->removeMember("calendars");
  }


  /**
   * Get a reference to the value of the '<code>calendars</code>' attribute.
   */
  const client::JsonCppAssociativeArray<FreeBusyCalendar > get_calendars() const;

  /**
   * Gets a reference to a mutable value of the '<code>calendars</code>'
   * property.
   *
   * List of free/busy information for calendars.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppAssociativeArray<FreeBusyCalendar > mutable_calendars();

  /**
   * Determine if the '<code>groups</code>' attribute was set.
   *
   * @return true if the '<code>groups</code>' attribute was set.
   */
  bool has_groups() const {
    return Storage().isMember("groups");
  }

  /**
   * Clears the '<code>groups</code>' attribute.
   */
  void clear_groups() {
    MutableStorage()->removeMember("groups");
  }


  /**
   * Get a reference to the value of the '<code>groups</code>' attribute.
   */
  const client::JsonCppAssociativeArray<FreeBusyGroup > get_groups() const;

  /**
   * Gets a reference to a mutable value of the '<code>groups</code>' property.
   *
   * Expansion of groups.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppAssociativeArray<FreeBusyGroup > mutable_groups();

  /**
   * Determine if the '<code>kind</code>' attribute was set.
   *
   * @return true if the '<code>kind</code>' attribute was set.
   */
  bool has_kind() const {
    return Storage().isMember("kind");
  }

  /**
   * Clears the '<code>kind</code>' attribute.
   */
  void clear_kind() {
    MutableStorage()->removeMember("kind");
  }


  /**
   * Get the value of the '<code>kind</code>' attribute.
   */
  const StringPiece get_kind() const {
    const Json::Value& v = Storage("kind");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>kind</code>' attribute.
   *
   * Type of the resource ("calendar#freeBusy").
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>timeMax</code>' attribute was set.
   *
   * @return true if the '<code>timeMax</code>' attribute was set.
   */
  bool has_time_max() const {
    return Storage().isMember("timeMax");
  }

  /**
   * Clears the '<code>timeMax</code>' attribute.
   */
  void clear_time_max() {
    MutableStorage()->removeMember("timeMax");
  }


  /**
   * Get the value of the '<code>timeMax</code>' attribute.
   */
  client::DateTime get_time_max() const {
    const Json::Value& storage = Storage("timeMax");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>timeMax</code>' attribute.
   *
   * The end of the interval.
   *
   * @param[in] value The new value.
   */
  void set_time_max(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("timeMax"));
  }

  /**
   * Determine if the '<code>timeMin</code>' attribute was set.
   *
   * @return true if the '<code>timeMin</code>' attribute was set.
   */
  bool has_time_min() const {
    return Storage().isMember("timeMin");
  }

  /**
   * Clears the '<code>timeMin</code>' attribute.
   */
  void clear_time_min() {
    MutableStorage()->removeMember("timeMin");
  }


  /**
   * Get the value of the '<code>timeMin</code>' attribute.
   */
  client::DateTime get_time_min() const {
    const Json::Value& storage = Storage("timeMin");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>timeMin</code>' attribute.
   *
   * The start of the interval.
   *
   * @param[in] value The new value.
   */
  void set_time_min(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("timeMin"));
  }

 private:
  void operator=(const FreeBusyResponse&);
};  // FreeBusyResponse
}  // namespace google_calendar_api
#endif  // GOOGLE_CALENDAR_API_FREE_BUSY_RESPONSE_H_
