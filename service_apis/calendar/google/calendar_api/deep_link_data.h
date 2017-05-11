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
#ifndef  GOOGLE_CALENDAR_API_DEEP_LINK_DATA_H_
#define  GOOGLE_CALENDAR_API_DEEP_LINK_DATA_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/calendar_api/link.h"

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
class DeepLinkData : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static DeepLinkData* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit DeepLinkData(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit DeepLinkData(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~DeepLinkData();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_calendar_api::DeepLinkData</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_calendar_api::DeepLinkData");
  }

  /**
   * Determine if the '<code>links</code>' attribute was set.
   *
   * @return true if the '<code>links</code>' attribute was set.
   */
  bool has_links() const {
    return Storage().isMember("links");
  }

  /**
   * Clears the '<code>links</code>' attribute.
   */
  void clear_links() {
    MutableStorage()->removeMember("links");
  }


  /**
   * Get a reference to the value of the '<code>links</code>' attribute.
   */
  const client::JsonCppArray<Link > get_links() const;

  /**
   * Gets a reference to a mutable value of the '<code>links</code>' property.
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<Link > mutable_links();

  /**
   * Determine if the '<code>url</code>' attribute was set.
   *
   * @return true if the '<code>url</code>' attribute was set.
   */
  bool has_url() const {
    return Storage().isMember("url");
  }

  /**
   * Clears the '<code>url</code>' attribute.
   */
  void clear_url() {
    MutableStorage()->removeMember("url");
  }


  /**
   * Get the value of the '<code>url</code>' attribute.
   */
  const StringPiece get_url() const {
    const Json::Value& v = Storage("url");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>url</code>' attribute.
   * @param[in] value The new value.
   */
  void set_url(const StringPiece& value) {
    *MutableStorage("url") = value.data();
  }

 private:
  void operator=(const DeepLinkData&);
};  // DeepLinkData
}  // namespace google_calendar_api
#endif  // GOOGLE_CALENDAR_API_DEEP_LINK_DATA_H_
