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
#ifndef  GOOGLE_STORAGE_API_BUCKETS_H_
#define  GOOGLE_STORAGE_API_BUCKETS_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/storage_api/bucket.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_storage_api {
using namespace googleapis;

/**
 * A list of buckets.
 *
 * @ingroup DataObject
 */
class Buckets : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static Buckets* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Buckets(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Buckets(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~Buckets();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_storage_api::Buckets</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_storage_api::Buckets");
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
  const client::JsonCppArray<Bucket > get_items() const;

  /**
   * Gets a reference to a mutable value of the '<code>items</code>' property.
   *
   * The list of items.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<Bucket > mutable_items();

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
   * The kind of item this is. For lists of buckets, this is always
   * storage#buckets.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>nextPageToken</code>' attribute was set.
   *
   * @return true if the '<code>nextPageToken</code>' attribute was set.
   */
  bool has_next_page_token() const {
    return Storage().isMember("nextPageToken");
  }

  /**
   * Clears the '<code>nextPageToken</code>' attribute.
   */
  void clear_next_page_token() {
    MutableStorage()->removeMember("nextPageToken");
  }


  /**
   * Get the value of the '<code>nextPageToken</code>' attribute.
   */
  const StringPiece get_next_page_token() const {
    const Json::Value& v = Storage("nextPageToken");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>nextPageToken</code>' attribute.
   *
   * The continuation token, used to page through large result sets. Provide
   * this value in a subsequent request to return the next page of results.
   *
   * @param[in] value The new value.
   */
  void set_next_page_token(const StringPiece& value) {
    *MutableStorage("nextPageToken") = value.data();
  }

 private:
  void operator=(const Buckets&);
};  // Buckets
}  // namespace google_storage_api
#endif  // GOOGLE_STORAGE_API_BUCKETS_H_
