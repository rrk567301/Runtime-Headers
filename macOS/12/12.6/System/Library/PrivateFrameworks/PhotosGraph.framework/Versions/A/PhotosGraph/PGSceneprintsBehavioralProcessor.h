@class NSSet, NSMapTable;

@interface PGSceneprintsBehavioralProcessor : NSObject <PGBehavioralAlgorithm>

@property (readonly, nonatomic) NSSet *goldAssets;
@property (readonly, nonatomic) NSSet *goldAssetUUIDs;
@property (readonly, nonatomic) NSMapTable *goldAssetSceneprintsAndDates;
@property (nonatomic) double similarityThreshold;

- (void).cxx_destruct;
- (id)initWithGoldAssets:(id)a0;
- (float)semanticScoreForAsset:(id)a0;
- (void)preprocessWithProgressBlock:(id /* block */)a0;
- (id)semanticScoreByAssetUUIDForAssets:(id)a0;
- (id)dataToPersist;
- (id)initWithGoldAssets:(id)a0 persistedData:(id)a1;

@end
