@interface UAFAutoAssetManager : NSObject

+ (int)listenForUpdates:(id)a0 updateHandler:(id /* block */)a1;
+ (BOOL)assetSetAvailable:(id)a0 error:(id *)a1;
+ (BOOL)autoAssetExistsWithEntries:(id)a0;
+ (id)configureAssetSet:(id)a0 specifiers:(id)a1 changed:(BOOL *)a2;
+ (void)configureAutoAssetsFromAssetSetUsages:(id)a0 subscriptions:(id)a1 configurationManager:(id)a2 lockIfUnchanged:(BOOL)a3;
+ (id)getAutoAssetSet:(id)a0 specifiers:(id)a1 addEntries:(BOOL)a2 configured:(BOOL *)a3;
+ (id)getAutoSetEntries:(id)a0 specifiers:(id)a1;
+ (id)getConcurrentQueue;
+ (id)getCurrentSpecifiers:(id)a0 expectedAutoAssetType:(id)a1;
+ (unsigned long long)getDownloadStatusFromAssetSetUsages:(id)a0 configurationManager:(id)a1;
+ (id)getReason:(id)a0 operation:(id)a1;
+ (id)getSerialQueue;
+ (id)getSpecifiers:(id)a0 assetSetUsages:(id)a1;
+ (void)handleDownloadedAndUnavailable:(id)a0 specifiers:(id)a1 lockIfUnchanged:(BOOL)a2 autoAssetSet:(id)a3 assetSetAvailableError:(id)a4 checkAtomicError:(id)a5;
+ (void)invalidatePromotedInstances:(id)a0 autoAssetSet:(id)a1 group:(id)a2;
+ (void)lockLatestAssetSet:(id)a0;
+ (void)manageAssetSet:(id)a0 specifiers:(id)a1 lockIfUnchanged:(BOOL)a2 eliminateAndRetry:(BOOL)a3;
+ (void)observeAssetSet:(id)a0;
+ (void)removeAutoAssetSet:(id)a0;
+ (void)removeUnusedAutoAssetSets:(id)a0 usedAutoAssetSets:(id)a1;
+ (BOOL)sendNotificationForAssetSet:(id)a0;
+ (void)setLatestAtomicInstance:(id)a0 autoAssetSet:(id)a1;
+ (void)stageAssetSet:(id)a0 targets:(id)a1;
+ (void)stageAssetsWithSubscriptions:(id)a0 knownAutoAssetSets:(id)a1 usedAutoAssetSets:(id)a2;
+ (id)targetForAssetSet:(id)a0 specifiers:(id)a1 version:(id)a2;
+ (void)updateAutoAssetsFromAssetSetUsages:(id)a0 configurationManager:(id)a1 expensiveNetworking:(BOOL)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;

@end
