@interface SKGTextQueryManager : NSObject

+ (id)queryForAttributesAbsent:(id)a0;
+ (id)queryForAttributesExist:(id)a0;
+ (id)queryForBundlesExcluded:(id)a0;
+ (id)queryForBundlesIncluded:(id)a0;
+ (id)queryForDocUnderstandingUpdatesIncludeBundles:(id)a0;
+ (id)queryForEligibleItemsWithTaskQueries:(id)a0 excludeBundles:(id)a1;
+ (id)queryForEmbeddingsUpdatesExcludeBundles:(id)a0;
+ (id)queryForEmbeddingsUpdatesIncludeBundles:(id)a0;
+ (id)queryForInvalidItems;
+ (id)queryForKeyphrasesUpdatesExcludeBundles:(id)a0;
+ (id)queryForKeyphrasesUpdatesIncludeBundles:(id)a0;
+ (id)queryForPipelineReport;
+ (id)queryForPipelineUpdatesWithTaskQueries:(id)a0 excludeBundles:(id)a1 throttleHorizonDate:(long long)a2;
+ (id)queryForSuggestedEventsUpdatesIncludeBundles:(id)a0;
+ (id)queryForTask:(id)a0 event:(long long)a1;
+ (id)queryForUpdaterVersionsWithThrottleHorizonDate:(long long)a0;

@end
