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
#ifndef  GOOGLE_ANALYTICS_API_ENTITY_AD_WORDS_LINK_H_
#define  GOOGLE_ANALYTICS_API_ENTITY_AD_WORDS_LINK_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/analytics_api/ad_words_account.h"
#include "google/analytics_api/web_property_ref.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_analytics_api {
using namespace googleapis;

/**
 * JSON template for Analytics Entity AdWords Link.
 *
 * @ingroup DataObject
 */
class EntityAdWordsLink : public client::JsonCppData {
 public:
  /**
   * Web property being linked.
   *
   * @ingroup DataObject
   */
  class EntityAdWordsLinkEntity : public client::JsonCppData {
   public:
    /**
     * Creates a new default instance.
     *
     * @return Ownership is passed back to the caller.
     */
    static EntityAdWordsLinkEntity* New();

    /**
     * Standard constructor for an immutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit EntityAdWordsLinkEntity(const Json::Value& storage);

    /**
     * Standard constructor for a mutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit EntityAdWordsLinkEntity(Json::Value* storage);

    /**
     * Standard destructor.
     */
    virtual ~EntityAdWordsLinkEntity();

    /**
     * Returns a string denoting the type of this data object.
     *
     * @return <code>google_analytics_api::EntityAdWordsLinkEntity</code>
     */
    const char* GetTypeName() const {
      return "google_analytics_api::EntityAdWordsLinkEntity";
    }

    /**
     * Determine if the '<code>webPropertyRef</code>' attribute was set.
     *
     * @return true if the '<code>webPropertyRef</code>' attribute was set.
     */
    bool has_web_property_ref() const {
      return Storage().isMember("webPropertyRef");
    }

    /**
     * Clears the '<code>webPropertyRef</code>' attribute.
     */
    void clear_web_property_ref() {
      MutableStorage()->removeMember("webPropertyRef");
    }


    /**
     * Get a reference to the value of the '<code>webPropertyRef</code>'
     * attribute.
     */
    const WebPropertyRef get_web_property_ref() const;

    /**
     * Gets a reference to a mutable value of the '<code>webPropertyRef</code>'
     * property.
     * @return The result can be modified to change the attribute value.
     */
    WebPropertyRef mutable_webPropertyRef();

   private:
    void operator=(const EntityAdWordsLinkEntity&);
  };  // EntityAdWordsLinkEntity
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static EntityAdWordsLink* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit EntityAdWordsLink(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit EntityAdWordsLink(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~EntityAdWordsLink();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_analytics_api::EntityAdWordsLink</code>
   */
  const char* GetTypeName() const {
    return "google_analytics_api::EntityAdWordsLink";
  }

  /**
   * Determine if the '<code>adWordsAccounts</code>' attribute was set.
   *
   * @return true if the '<code>adWordsAccounts</code>' attribute was set.
   */
  bool has_ad_words_accounts() const {
    return Storage().isMember("adWordsAccounts");
  }

  /**
   * Clears the '<code>adWordsAccounts</code>' attribute.
   */
  void clear_ad_words_accounts() {
    MutableStorage()->removeMember("adWordsAccounts");
  }


  /**
   * Get a reference to the value of the '<code>adWordsAccounts</code>'
   * attribute.
   */
  const client::JsonCppArray<AdWordsAccount > get_ad_words_accounts() const;

  /**
   * Gets a reference to a mutable value of the '<code>adWordsAccounts</code>'
   * property.
   *
   * A list of AdWords client accounts. These cannot be MCC accounts. This field
   * is required when creating an AdWords link. It cannot be empty.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<AdWordsAccount > mutable_adWordsAccounts();

  /**
   * Determine if the '<code>entity</code>' attribute was set.
   *
   * @return true if the '<code>entity</code>' attribute was set.
   */
  bool has_entity() const {
    return Storage().isMember("entity");
  }

  /**
   * Clears the '<code>entity</code>' attribute.
   */
  void clear_entity() {
    MutableStorage()->removeMember("entity");
  }


  /**
   * Get a reference to the value of the '<code>entity</code>' attribute.
   */
  const EntityAdWordsLinkEntity get_entity() const {
     const Json::Value& storage = Storage("entity");
    return client::JsonValueToCppValueHelper<EntityAdWordsLinkEntity >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>entity</code>' property.
   *
   * Web property being linked.
   *
   * @return The result can be modified to change the attribute value.
   */
  EntityAdWordsLinkEntity mutable_entity() {
    Json::Value* storage = MutableStorage("entity");
    return client::JsonValueToMutableCppValueHelper<EntityAdWordsLinkEntity >(storage);
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
   * Entity AdWords link ID.
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
   * Resource type for entity AdWords link.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>name</code>' attribute was set.
   *
   * @return true if the '<code>name</code>' attribute was set.
   */
  bool has_name() const {
    return Storage().isMember("name");
  }

  /**
   * Clears the '<code>name</code>' attribute.
   */
  void clear_name() {
    MutableStorage()->removeMember("name");
  }


  /**
   * Get the value of the '<code>name</code>' attribute.
   */
  const StringPiece get_name() const {
    const Json::Value& v = Storage("name");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>name</code>' attribute.
   *
   * Name of the link. This field is required when creating an AdWords link.
   *
   * @param[in] value The new value.
   */
  void set_name(const StringPiece& value) {
    *MutableStorage("name") = value.data();
  }

  /**
   * Determine if the '<code>profileIds</code>' attribute was set.
   *
   * @return true if the '<code>profileIds</code>' attribute was set.
   */
  bool has_profile_ids() const {
    return Storage().isMember("profileIds");
  }

  /**
   * Clears the '<code>profileIds</code>' attribute.
   */
  void clear_profile_ids() {
    MutableStorage()->removeMember("profileIds");
  }


  /**
   * Get a reference to the value of the '<code>profileIds</code>' attribute.
   */
  const client::JsonCppArray<string > get_profile_ids() const {
     const Json::Value& storage = Storage("profileIds");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>profileIds</code>'
   * property.
   *
   * IDs of linked Views (Profiles) represented as strings.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_profileIds() {
    Json::Value* storage = MutableStorage("profileIds");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
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
   * URL link for this Google Analytics - Google AdWords link.
   *
   * @param[in] value The new value.
   */
  void set_self_link(const StringPiece& value) {
    *MutableStorage("selfLink") = value.data();
  }

 private:
  void operator=(const EntityAdWordsLink&);
};  // EntityAdWordsLink
}  // namespace google_analytics_api
#endif  // GOOGLE_ANALYTICS_API_ENTITY_AD_WORDS_LINK_H_