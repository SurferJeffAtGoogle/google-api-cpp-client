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
//   Calendar API (calendar/v3)
// Generated from:
//   Version: v3
//   Revision: 20170402
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.4
#ifndef  GOOGLE_CALENDAR_API_EVENT_ATTENDEE_H_
#define  GOOGLE_CALENDAR_API_EVENT_ATTENDEE_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

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
class EventAttendee : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static EventAttendee* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit EventAttendee(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit EventAttendee(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~EventAttendee();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_calendar_api::EventAttendee</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_calendar_api::EventAttendee");
  }

  /**
   * Determine if the '<code>additionalGuests</code>' attribute was set.
   *
   * @return true if the '<code>additionalGuests</code>' attribute was set.
   */
  bool has_additional_guests() const {
    return Storage().isMember("additionalGuests");
  }

  /**
   * Clears the '<code>additionalGuests</code>' attribute.
   */
  void clear_additional_guests() {
    MutableStorage()->removeMember("additionalGuests");
  }


  /**
   * Get the value of the '<code>additionalGuests</code>' attribute.
   */
  int32 get_additional_guests() const {
    const Json::Value& storage = Storage("additionalGuests");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>additionalGuests</code>' attribute.
   *
   * Number of additional guests. Optional. The default is 0.
   *
   * @param[in] value The new value.
   */
  void set_additional_guests(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("additionalGuests"));
  }

  /**
   * Determine if the '<code>comment</code>' attribute was set.
   *
   * @return true if the '<code>comment</code>' attribute was set.
   */
  bool has_comment() const {
    return Storage().isMember("comment");
  }

  /**
   * Clears the '<code>comment</code>' attribute.
   */
  void clear_comment() {
    MutableStorage()->removeMember("comment");
  }


  /**
   * Get the value of the '<code>comment</code>' attribute.
   */
  const StringPiece get_comment() const {
    const Json::Value& v = Storage("comment");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>comment</code>' attribute.
   *
   * The attendee's response comment. Optional.
   *
   * @param[in] value The new value.
   */
  void set_comment(const StringPiece& value) {
    *MutableStorage("comment") = value.data();
  }

  /**
   * Determine if the '<code>displayName</code>' attribute was set.
   *
   * @return true if the '<code>displayName</code>' attribute was set.
   */
  bool has_display_name() const {
    return Storage().isMember("displayName");
  }

  /**
   * Clears the '<code>displayName</code>' attribute.
   */
  void clear_display_name() {
    MutableStorage()->removeMember("displayName");
  }


  /**
   * Get the value of the '<code>displayName</code>' attribute.
   */
  const StringPiece get_display_name() const {
    const Json::Value& v = Storage("displayName");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>displayName</code>' attribute.
   *
   * The attendee's name, if available. Optional.
   *
   * @param[in] value The new value.
   */
  void set_display_name(const StringPiece& value) {
    *MutableStorage("displayName") = value.data();
  }

  /**
   * Determine if the '<code>email</code>' attribute was set.
   *
   * @return true if the '<code>email</code>' attribute was set.
   */
  bool has_email() const {
    return Storage().isMember("email");
  }

  /**
   * Clears the '<code>email</code>' attribute.
   */
  void clear_email() {
    MutableStorage()->removeMember("email");
  }


  /**
   * Get the value of the '<code>email</code>' attribute.
   */
  const StringPiece get_email() const {
    const Json::Value& v = Storage("email");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>email</code>' attribute.
   *
   * The attendee's email address, if available. This field must be present when
   * adding an attendee. It must be a valid email address as per RFC5322.
   *
   * @param[in] value The new value.
   */
  void set_email(const StringPiece& value) {
    *MutableStorage("email") = value.data();
  }

  /**
   * Determine if the '<code>id</code>' attribute was set.
   *
   * @return true if the '<code>id</code>' attribute was set.
   */
  bool has_id() const {
    return Storage().isMember("id");
  }

  /**
   * Clears the '<code>id</code>' attribute.
   */
  void clear_id() {
    MutableStorage()->removeMember("id");
  }


  /**
   * Get the value of the '<code>id</code>' attribute.
   */
  const StringPiece get_id() const {
    const Json::Value& v = Storage("id");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>id</code>' attribute.
   *
   * The attendee's Profile ID, if available. It corresponds to theid field in
   * the People collection of the Google+ API.
   *
   * @param[in] value The new value.
   */
  void set_id(const StringPiece& value) {
    *MutableStorage("id") = value.data();
  }

  /**
   * Determine if the '<code>optional</code>' attribute was set.
   *
   * @return true if the '<code>optional</code>' attribute was set.
   */
  bool has_optional() const {
    return Storage().isMember("optional");
  }

  /**
   * Clears the '<code>optional</code>' attribute.
   */
  void clear_optional() {
    MutableStorage()->removeMember("optional");
  }


  /**
   * Get the value of the '<code>optional</code>' attribute.
   */
  bool get_optional() const {
    const Json::Value& storage = Storage("optional");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>optional</code>' attribute.
   *
   * Whether this is an optional attendee. Optional. The default is False.
   *
   * @param[in] value The new value.
   */
  void set_optional(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("optional"));
  }

  /**
   * Determine if the '<code>organizer</code>' attribute was set.
   *
   * @return true if the '<code>organizer</code>' attribute was set.
   */
  bool has_organizer() const {
    return Storage().isMember("organizer");
  }

  /**
   * Clears the '<code>organizer</code>' attribute.
   */
  void clear_organizer() {
    MutableStorage()->removeMember("organizer");
  }


  /**
   * Get the value of the '<code>organizer</code>' attribute.
   */
  bool get_organizer() const {
    const Json::Value& storage = Storage("organizer");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>organizer</code>' attribute.
   *
   * Whether the attendee is the organizer of the event. Read-only. The default
   * is False.
   *
   * @param[in] value The new value.
   */
  void set_organizer(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("organizer"));
  }

  /**
   * Determine if the '<code>resource</code>' attribute was set.
   *
   * @return true if the '<code>resource</code>' attribute was set.
   */
  bool has_resource() const {
    return Storage().isMember("resource");
  }

  /**
   * Clears the '<code>resource</code>' attribute.
   */
  void clear_resource() {
    MutableStorage()->removeMember("resource");
  }


  /**
   * Get the value of the '<code>resource</code>' attribute.
   */
  bool get_resource() const {
    const Json::Value& storage = Storage("resource");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>resource</code>' attribute.
   *
   * Whether the attendee is a resource. Read-only. The default is False.
   *
   * @param[in] value The new value.
   */
  void set_resource(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("resource"));
  }

  /**
   * Determine if the '<code>responseStatus</code>' attribute was set.
   *
   * @return true if the '<code>responseStatus</code>' attribute was set.
   */
  bool has_response_status() const {
    return Storage().isMember("responseStatus");
  }

  /**
   * Clears the '<code>responseStatus</code>' attribute.
   */
  void clear_response_status() {
    MutableStorage()->removeMember("responseStatus");
  }


  /**
   * Get the value of the '<code>responseStatus</code>' attribute.
   */
  const StringPiece get_response_status() const {
    const Json::Value& v = Storage("responseStatus");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>responseStatus</code>' attribute.
   *
   * The attendee's response status. Possible values are:
   * <dl>
   * <dt>"needsAction"
   * <dd>The attendee has not responded to the invitation.
   * <dt>"declined"
   * <dd>The attendee has declined the invitation.
   * <dt>"tentative"
   * <dd>The attendee has tentatively accepted the invitation.
   * <dt>"accepted"
   * <dd>The attendee has accepted the invitation.
   * </dl>
   *
   *
   * @param[in] value The new value.
   */
  void set_response_status(const StringPiece& value) {
    *MutableStorage("responseStatus") = value.data();
  }

  /**
   * Determine if the '<code>self</code>' attribute was set.
   *
   * @return true if the '<code>self</code>' attribute was set.
   */
  bool has_self() const {
    return Storage().isMember("self");
  }

  /**
   * Clears the '<code>self</code>' attribute.
   */
  void clear_self() {
    MutableStorage()->removeMember("self");
  }


  /**
   * Get the value of the '<code>self</code>' attribute.
   */
  bool get_self() const {
    const Json::Value& storage = Storage("self");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>self</code>' attribute.
   *
   * Whether this entry represents the calendar on which this copy of the event
   * appears. Read-only. The default is False.
   *
   * @param[in] value The new value.
   */
  void set_self(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("self"));
  }

 private:
  void operator=(const EventAttendee&);
};  // EventAttendee
}  // namespace google_calendar_api
#endif  // GOOGLE_CALENDAR_API_EVENT_ATTENDEE_H_
