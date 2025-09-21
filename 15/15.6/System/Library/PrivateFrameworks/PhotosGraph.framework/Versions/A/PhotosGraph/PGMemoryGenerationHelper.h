@interface PGMemoryGenerationHelper : NSObject

+ (id)assetFetchResultForMomentNodes:(id)a0 inLocationOrAreaNode:(id)a1 requireInteresting:(char)a2 curationManager:(id)a3 progressReporter:(id)a4;
+ (id)assetLocalIdentifiersFromAssets:(id)a0;
+ (id)assetUUIDsFromAssets:(id)a0;
+ (char)dates:(id)a0 passSpreadicityWithMinimumCardinal:(unsigned long long)a1 minimumTimeInterval:(double)a2;
+ (id)feederForMemoriesWithAssetCollection:(id)a0 memoryCurationSession:(id)a1 graph:(id)a2 allowGuestAsset:(char)a3;
+ (id)feederForMemoriesWithAssetFetchResult:(id)a0 memoryCurationSession:(id)a1 graph:(id)a2;
+ (id)feederForMemoriesWithAssetLocalIdentifiers:(id)a0 memoryCurationSession:(id)a1 graph:(id)a2 allowGuestAsset:(char)a3;
+ (id)feederForMemoriesWithFeeder:(id)a0 topTierAestheticScore:(double)a1 didFeederChange:(char *)a2 curationContext:(id)a3;
+ (id)keyAssetFetchResultForHighlightGroupUUIDs:(id)a0 curationManager:(id)a1 allowGuestAsset:(char)a2;
+ (char)prepareAssets:(id)a0 forMemoriesWithTopTierAestheticScore:(double)a1 curationContext:(id)a2;
+ (id)scoringContextForMemoriesWithAssets:(id)a0 withTopTierAestheticScore:(double)a1;

@end
