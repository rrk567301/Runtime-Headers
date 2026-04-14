@interface _PSAppUsageUtilities : NSObject

+ (void)cacheAppUsageDurations:(id)a0;
+ (id)sharesFromSourceToTargetBundleValues;
+ (id)addBiomeDataToCache:(id)a0 event:(id)a1;
+ (id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)a0 daysAgo:(long long)a1 knowledgeStore:(id)a2;
+ (id)mostUsedAppShareExtensionsWithAppBundleIdsToShareExtensionBundleIdsMapping:(id)a0 sourceBundleId:(id)a1 sharesFromSourceToTargetBundle:(id)a2 appUsageDurations:(id)a3;
+ (id)suggestionsFromAppBundleIds:(id)a0 appBundleIdsToShareExtensionBundleIdsMapping:(id)a1;
+ (id)mostUsedAppBundleIdsUsingPredicate:(id)a0 knowledgeStore:(id)a1;
+ (id)shareExtensionsUsedAndInstalledDaysAgo:(long long)a0 appBundleIdsToShareExtensionBundleIdsMapping:(id)a1 knowledgeStore:(id)a2;
+ (id)suggestionsFromShareBundleIds:(id)a0 appBundleIdsToShareExtensionBundleIdsMapping:(id)a1;
+ (id)suggestionArrayWithArray:(id)a0 appendingUniqueElementsByBundleIdFromArray:(id)a1;
+ (id)boostAppsForSourceBundleId:(id)a0;
+ (void)cacheSharesForEachApp;
+ (id)appUsageDurations;

@end
