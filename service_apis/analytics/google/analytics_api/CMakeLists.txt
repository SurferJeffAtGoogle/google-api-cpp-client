# This is a CMake file for Google Analytics API v3
# using the Google APIs Client Library for C++.
#
# See http://google.github.io/google-api-cpp-client/latest/start/get_started
# for more information about what to do with this file.

project (google_analytics_api)

# These sources assume that the CMakeLists.txt in ../.. added itself to
# the include directories so that include paths are specified explicitly
# with the directory #include "google/analytics_api/..."
add_library(google_analytics_api STATIC
            account.cc
            account_ref.cc
            account_summaries.cc
            account_summary.cc
            account_ticket.cc
            accounts.cc
            ad_words_account.cc
            analytics_dataimport_delete_upload_data_request.cc
            column.cc
            columns.cc
            custom_data_source.cc
            custom_data_sources.cc
            custom_dimension.cc
            custom_dimensions.cc
            custom_metric.cc
            custom_metrics.cc
            entity_ad_words_link.cc
            entity_ad_words_links.cc
            entity_user_link.cc
            entity_user_links.cc
            experiment.cc
            experiments.cc
            filter.cc
            filter_expression.cc
            filter_ref.cc
            filters.cc
            ga_data.cc
            goal.cc
            goals.cc
            include_conditions.cc
            linked_foreign_account.cc
            mcf_data.cc
            profile.cc
            profile_filter_link.cc
            profile_filter_links.cc
            profile_ref.cc
            profile_summary.cc
            profiles.cc
            realtime_data.cc
            remarketing_audience.cc
            remarketing_audiences.cc
            segment.cc
            segments.cc
            unsampled_report.cc
            unsampled_reports.cc
            upload.cc
            uploads.cc
            user_ref.cc
            web_property_ref.cc
            web_property_summary.cc
            webproperties.cc
            webproperty.cc
            analytics_service.cc)
target_link_libraries(google_analytics_api googleapis_http)
target_link_libraries(google_analytics_api googleapis_internal)
target_link_libraries(google_analytics_api googleapis_jsoncpp)
target_link_libraries(google_analytics_api googleapis_utils)
