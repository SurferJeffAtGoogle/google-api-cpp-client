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
// Generated from:
//   Version: v3
//   Revision: 20170807
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.5
#ifndef  GOOGLE_ANALYTICS_API_PROFILE_FILTER_LINK_H_
#define  GOOGLE_ANALYTICS_API_PROFILE_FILTER_LINK_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/analytics_api/filter_ref.h"
#include "google/analytics_api/profile_ref.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_analytics_api {
using namespace googleapis;

/**
 * JSON template for an Analytics profile filter link.
 *
 * @ingroup DataObject
 */
class ProfileFilterLink : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ProfileFilterLink* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ProfileFilterLink(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ProfileFilterLink(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ProfileFilterLink();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_analytics_api::ProfileFilterLink</code>
   */
  const char* GetTypeName() const {
    return "google_analytics_api::ProfileFilterLink";
  }

  /**
   * Determine if the '<code>filterRef</code>' attribute was set.
   *
   * @return true if the '<code>filterRef</code>' attribute was set.
   */
  bool has_filter_ref() const {
    return Storage().isMember("filterRef");
  }

  /**
   * Clears the '<code>filterRef</code>' attribute.
   */
  void clear_filter_ref() {
    MutableStorage()->removeMember("filterRef");
  }


  /**
   * Get a reference to the value of the '<code>filterRef</code>' attribute.
   */
  const FilterRef get_filter_ref() const;

  /**
   * Gets a reference to a mutable value of the '<code>filterRef</code>'
   * property.
   *
   * Filter for this link.
   *
   * @return The result can be modified to change the attribute value.
   */
  FilterRef mutable_filterRef();

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
   * Profile filter link ID.
   *
   * @param[in] value The new value.
   */
  void set_id(const StringPiece& value) {
    *MutableStorage("id") = value.data();
  }

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
   * Resource type for Analytics filter.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>profileRef</code>' attribute was set.
   *
   * @return true if the '<code>profileRef</code>' attribute was set.
   */
  bool has_profile_ref() const {
    return Storage().isMember("profileRef");
  }

  /**
   * Clears the '<code>profileRef</code>' attribute.
   */
  void clear_profile_ref() {
    MutableStorage()->removeMember("profileRef");
  }


  /**
   * Get a reference to the value of the '<code>profileRef</code>' attribute.
   */
  const ProfileRef get_profile_ref() const;

  /**
   * Gets a reference to a mutable value of the '<code>profileRef</code>'
   * property.
   *
   * View (Profile) for this link.
   *
   * @return The result can be modified to change the attribute value.
   */
  ProfileRef mutable_profileRef();

  /**
   * Determine if the '<code>rank</code>' attribute was set.
   *
   * @return true if the '<code>rank</code>' attribute was set.
   */
  bool has_rank() const {
    return Storage().isMember("rank");
  }

  /**
   * Clears the '<code>rank</code>' attribute.
   */
  void clear_rank() {
    MutableStorage()->removeMember("rank");
  }


  /**
   * Get the value of the '<code>rank</code>' attribute.
   */
  int32 get_rank() const {
    const Json::Value& storage = Storage("rank");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>rank</code>' attribute.
   *
   * The rank of this profile filter link relative to the other filters linked
   * to the same profile.
   * For readonly (i.e., list and get) operations, the rank always starts at 1.
   * For write (i.e., create, update, or delete) operations, you may specify a
   * value between 0 and 255 inclusively, [0, 255]. In order to insert a link at
   * the end of the list, either don't specify a rank or set a rank to a number
   * greater than the largest rank in the list. In order to insert a link to the
   * beginning of the list specify a rank that is less than or equal to 1. The
   * new link will move all existing filters with the same or lower rank down
   * the list. After the link is inserted/updated/deleted all profile filter
   * links will be renumbered starting at 1.
   *
   * @param[in] value The new value.
   */
  void set_rank(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("rank"));
  }

  /**
   * Determine if the '<code>selfLink</code>' attribute was set.
   *
   * @return true if the '<code>selfLink</code>' attribute was set.
   */
  bool has_self_link() const {
    return Storage().isMember("selfLink");
  }

  /**
   * Clears the '<code>selfLink</code>' attribute.
   */
  void clear_self_link() {
    MutableStorage()->removeMember("selfLink");
  }


  /**
   * Get the value of the '<code>selfLink</code>' attribute.
   */
  const StringPiece get_self_link() const {
    const Json::Value& v = Storage("selfLink");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>selfLink</code>' attribute.
   *
   * Link for this profile filter link.
   *
   * @param[in] value The new value.
   */
  void set_self_link(const StringPiece& value) {
    *MutableStorage("selfLink") = value.data();
  }

 private:
  void operator=(const ProfileFilterLink&);
};  // ProfileFilterLink
}  // namespace google_analytics_api
#endif  // GOOGLE_ANALYTICS_API_PROFILE_FILTER_LINK_H_
