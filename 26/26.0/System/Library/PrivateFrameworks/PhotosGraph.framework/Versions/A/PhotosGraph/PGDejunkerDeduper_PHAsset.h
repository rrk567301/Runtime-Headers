@class NSDictionary;

@interface PGDejunkerDeduper_PHAsset : PGDejunkerDeduper_CLSCurationItem {
    NSDictionary *_personLocalIdentifiersByAssetUUID;
    NSDictionary *_peopleScenesByAssetUUID;
    NSDictionary *_faceQualityScoreByAssetUUID;
}

- (void).cxx_destruct;
- (id)dejunkedDedupedAssetsInAssets:(id)a0 options:(id)a1 debugInfo:(id)a2 progressBlock:(id /* block */)a3;
- (void)_buildCachesWithAssets:(id)a0 options:(id)a1;
- (id)bestItemInItems:(id)a0 options:(id)a1;
- (id)debugPersonStringForItem:(id)a0;
- (id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)a0;
- (id)featureWithItem:(id)a0;
- (BOOL)isJunkForItem:(id)a0;
- (id)itemsSortedByScoreWithItems:(id)a0 options:(id)a1;
- (id)personLocalIdentifiersFromFaceInformation:(id)a0 faceQualityScore:(double *)a1;

@end
