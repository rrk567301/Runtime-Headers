@interface PXSearchSampleResultsFactory : NSObject

+ (id)sampleAssetResults;
+ (id)samplePersonResults;
+ (id)sampleMomentResults;
+ (id)sampleMemoryResults;
+ (id)sampleAlbumResults;
+ (id)samplePlaceResults;
+ (id)sampleSceneResults;
+ (unsigned long long)_randomAssetCount:(unsigned long long)a0;
+ (id)_uniqueSampleUUID;
+ (id)_personTitles;
+ (id)_momentTitles;
+ (id)_momentSubtitles;
+ (id)_memoryTitles;
+ (id)_memorySubtitles;
+ (id)_albumTitles;
+ (id)_albumSubtitles;
+ (id)_categoryTitles;
+ (id)_placeTitles;

@end
