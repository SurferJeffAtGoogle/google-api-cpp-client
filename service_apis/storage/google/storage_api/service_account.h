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
//   Cloud Storage JSON API (storage/v1)
// Generated from:
//   Version: v1
//   Revision: 20170504
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.4
#ifndef  GOOGLE_STORAGE_API_SERVICE_ACCOUNT_H_
#define  GOOGLE_STORAGE_API_SERVICE_ACCOUNT_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_storage_api {
using namespace googleapis;

/**
 * A subscription to receive Google PubSub notifications.
 *
 * @ingroup DataObject
 */
class ServiceAccount : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ServiceAccount* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ServiceAccount(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ServiceAccount(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ServiceAccount();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_storage_api::ServiceAccount</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_storage_api::ServiceAccount");
  }

  /**
   * Determine if the '<code>email_address</code>' attribute was set.
   *
   * @return true if the '<code>email_address</code>' attribute was set.
   */
  bool has_email_address() const {
    return Storage().isMember("email_address");
  }

  /**
   * Clears the '<code>email_address</code>' attribute.
   */
  void clear_email_address() {
    MutableStorage()->removeMember("email_address");
  }


  /**
   * Get the value of the '<code>email_address</code>' attribute.
   */
  const StringPiece get_email_address() const {
    const Json::Value& v = Storage("email_address");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>email_address</code>' attribute.
   *
   * The ID of the notification.
   *
   * @param[in] value The new value.
   */
  void set_email_address(const StringPiece& value) {
    *MutableStorage("email_address") = value.data();
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
   * The kind of item this is. For notifications, this is always
   * storage#notification.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

 private:
  void operator=(const ServiceAccount&);
};  // ServiceAccount
}  // namespace google_storage_api
#endif  // GOOGLE_STORAGE_API_SERVICE_ACCOUNT_H_
