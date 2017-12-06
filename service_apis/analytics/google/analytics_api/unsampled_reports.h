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
#ifndef  GOOGLE_ANALYTICS_API_UNSAMPLED_REPORTS_H_
#define  GOOGLE_ANALYTICS_API_UNSAMPLED_REPORTS_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/analytics_api/unsampled_report.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_analytics_api {
using namespace googleapis;

/**
 * An unsampled report collection lists Analytics unsampled reports to which the
 * user has access. Each view (profile) can have a set of unsampled reports.
 * Each resource in the unsampled report collection corresponds to a single
 * Analytics unsampled report.
 *
 * @ingroup DataObject
 */
class UnsampledReports : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static UnsampledReports* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit UnsampledReports(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit UnsampledReports(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~UnsampledReports();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_analytics_api::UnsampledReports</code>
   */
  const char* GetTypeName() const {
    return "google_analytics_api::UnsampledReports";
  }

  /**
   * Determine if the '<code>items</code>' attribute was set.
   *
   * @return true if the '<code>items</code>' attribute was set.
   */
  bool has_items() const {
    return Storage().isMember("items");
  }

  /**
   * Clears the '<code>items</code>' attribute.
   */
  void clear_items() {
    MutableStorage()->removeMember("items");
  }


  /**
   * Get a reference to the value of the '<code>items</code>' attribute.
   */
  const client::JsonCppArray<UnsampledReport > get_items() const;

  /**
   * Gets a reference to a mutable value of the '<code>items</code>' property.
   *
   * A list of unsampled reports.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<UnsampledReport > mutable_items();

  /**
   * Determine if the '<code>itemsPerPage</code>' attribute was set.
   *
   * @return true if the '<code>itemsPerPage</code>' attribute was set.
   */
  bool has_items_per_page() const {
    return Storage().isMember("itemsPerPage");
  }

  /**
   * Clears the '<code>itemsPerPage</code>' attribute.
   */
  void clear_items_per_page() {
    MutableStorage()->removeMember("itemsPerPage");
  }


  /**
   * Get the value of the '<code>itemsPerPage</code>' attribute.
   */
  int32 get_items_per_page() const {
    const Json::Value& storage = Storage("itemsPerPage");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>itemsPerPage</code>' attribute.
   *
   * The maximum number of resources the response can contain, regardless of the
   * actual number of resources returned. Its value ranges from 1 to 1000 with a
   * value of 1000 by default, or otherwise specified by the max-results query
   * parameter.
   *
   * @param[in] value The new value.
   */
  void set_items_per_page(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("itemsPerPage"));
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
   * Collection type.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>nextLink</code>' attribute was set.
   *
   * @return true if the '<code>nextLink</code>' attribute was set.
   */
  bool has_next_link() const {
    return Storage().isMember("nextLink");
  }

  /**
   * Clears the '<code>nextLink</code>' attribute.
   */
  void clear_next_link() {
    MutableStorage()->removeMember("nextLink");
  }


  /**
   * Get the value of the '<code>nextLink</code>' attribute.
   */
  const StringPiece get_next_link() const {
    const Json::Value& v = Storage("nextLink");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>nextLink</code>' attribute.
   *
   * Link to next page for this unsampled report collection.
   *
   * @param[in] value The new value.
   */
  void set_next_link(const StringPiece& value) {
    *MutableStorage("nextLink") = value.data();
  }

  /**
   * Determine if the '<code>previousLink</code>' attribute was set.
   *
   * @return true if the '<code>previousLink</code>' attribute was set.
   */
  bool has_previous_link() const {
    return Storage().isMember("previousLink");
  }

  /**
   * Clears the '<code>previousLink</code>' attribute.
   */
  void clear_previous_link() {
    MutableStorage()->removeMember("previousLink");
  }


  /**
   * Get the value of the '<code>previousLink</code>' attribute.
   */
  const StringPiece get_previous_link() const {
    const Json::Value& v = Storage("previousLink");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>previousLink</code>' attribute.
   *
   * Link to previous page for this unsampled report collection.
   *
   * @param[in] value The new value.
   */
  void set_previous_link(const StringPiece& value) {
    *MutableStorage("previousLink") = value.data();
  }

  /**
   * Determine if the '<code>startIndex</code>' attribute was set.
   *
   * @return true if the '<code>startIndex</code>' attribute was set.
   */
  bool has_start_index() const {
    return Storage().isMember("startIndex");
  }

  /**
   * Clears the '<code>startIndex</code>' attribute.
   */
  void clear_start_index() {
    MutableStorage()->removeMember("startIndex");
  }


  /**
   * Get the value of the '<code>startIndex</code>' attribute.
   */
  int32 get_start_index() const {
    const Json::Value& storage = Storage("startIndex");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>startIndex</code>' attribute.
   *
   * The starting index of the resources, which is 1 by default or otherwise
   * specified by the start-index query parameter.
   *
   * @param[in] value The new value.
   */
  void set_start_index(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("startIndex"));
  }

  /**
   * Determine if the '<code>totalResults</code>' attribute was set.
   *
   * @return true if the '<code>totalResults</code>' attribute was set.
   */
  bool has_total_results() const {
    return Storage().isMember("totalResults");
  }

  /**
   * Clears the '<code>totalResults</code>' attribute.
   */
  void clear_total_results() {
    MutableStorage()->removeMember("totalResults");
  }


  /**
   * Get the value of the '<code>totalResults</code>' attribute.
   */
  int32 get_total_results() const {
    const Json::Value& storage = Storage("totalResults");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>totalResults</code>' attribute.
   *
   * The total number of results for the query, regardless of the number of
   * resources in the result.
   *
   * @param[in] value The new value.
   */
  void set_total_results(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("totalResults"));
  }

  /**
   * Determine if the '<code>username</code>' attribute was set.
   *
   * @return true if the '<code>username</code>' attribute was set.
   */
  bool has_username() const {
    return Storage().isMember("username");
  }

  /**
   * Clears the '<code>username</code>' attribute.
   */
  void clear_username() {
    MutableStorage()->removeMember("username");
  }


  /**
   * Get the value of the '<code>username</code>' attribute.
   */
  const StringPiece get_username() const {
    const Json::Value& v = Storage("username");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>username</code>' attribute.
   *
   * Email ID of the authenticated user.
   *
   * @param[in] value The new value.
   */
  void set_username(const StringPiece& value) {
    *MutableStorage("username") = value.data();
  }

 private:
  void operator=(const UnsampledReports&);
};  // UnsampledReports
}  // namespace google_analytics_api
#endif  // GOOGLE_ANALYTICS_API_UNSAMPLED_REPORTS_H_
