@interface ATXRemoteAppPlaceholderSyncHelper : NSObject

+ (id)_attributesFromSpotlightAttributesValues:(id)a0 fetchAttributes:(id)a1 identifier:(id)a2;
+ (id)_createRemoteAppPlaceholderInfoFromItem:(id)a0;
+ (id)_createSearchQueryContext:(id)a0;
+ (void)_executeSearchQueryWithQueryString:(id)a0 reason:(id)a1 itemsProcessor:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)_fetchPropertiesForBundleBatch:(id)a0 batchIndex:(unsigned long long)a1 totalBatches:(unsigned long long)a2 resultsQueue:(id)a3 allResults:(id)a4 completion:(id /* block */)a5;
+ (void)_fetchPropertiesForRemoteBundleID:(id)a0 completion:(id /* block */)a1;
+ (void)_processSearchableItem:(id)a0 intoResults:(id)a1;
+ (id)fetchPropertiesForAllRemoteBundleIDsSynchronously;
+ (void)fetchPropertiesForAllRemoteBundleIDsWithCompletion:(id /* block */)a0;
+ (void)fetchPropertiesForRemoteBundleID:(id)a0 completion:(id /* block */)a1;
+ (void)fetchPropertiesForRemoteBundleIDs:(id)a0 completion:(id /* block */)a1;
+ (void)fetchRemoteBundleIdentifierWithUUID:(id)a0 completion:(id /* block */)a1;
+ (id)makeBundleQueryStringForField:(id)a0 withBundleIDs:(id)a1;
+ (void)verifyRemoteAppsIntegrityWithInfoManager:(id)a0;

@end
