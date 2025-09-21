@class CLSAssetsBeautifier, CLSSimilarStacker, PGCurationCriteriaFactory;

@interface PGKeyCurator : NSObject {
    CLSAssetsBeautifier *_beautifier;
    CLSSimilarStacker *_similarStacker;
    PGCurationCriteriaFactory *_curationCriteriaFactory;
}

- (void).cxx_destruct;
- (id)initWithCurationCriteriaFactory:(id)a0;
- (id)keyItemIdentifierWithItems:(id)a0 options:(id)a1 debugInfo:(out id *)a2;
- (id)clusterWithSubclusters:(id)a0 keyItem:(id)a1;
- (id)_keyItemInItems:(id)a0 options:(id)a1 criteria:(id)a2 debugInfo:(id)a3 progressBlock:(id /* block */)a4;
- (id)bestItemIdentifierWithItems:(id)a0 options:(id)a1 debugInfo:(out id *)a2 criteria:(id)a3 curationOptions:(id)a4;
- (id)bestItemInItems:(id)a0 options:(id)a1 criteria:(id)a2 minimumCriteriaScore:(double)a3 triedAndFailedToDoBetter:(char *)a4;
- (id)bestItemInItems:(id)a0 options:(id)a1 criteria:(id)a2 minimumCriteriaScore:(double)a3 useIconicScore:(char)a4;
- (char)cluster:(id)a0 isBetterThanCluster:(id)a1 forMemories:(char)a2 allowGuestAsset:(char)a3;
- (char)cluster:(id)a0 scoresBetterThanCluster:(id)a1;
- (char)item:(id)a0 passesCriteria:(id)a1 score:(double *)a2;
- (id)itemsByIconicScoreBucketWithItems:(id)a0;
- (id)keyItemInItems:(id)a0 options:(id)a1 criteria:(id)a2 debugInfo:(id)a3 progressBlock:(id /* block */)a4;
- (id)keyItemWithFeeder:(id)a0 options:(id)a1 criteria:(id)a2 debugInfo:(id)a3 progressBlock:(id /* block */)a4;
- (char)scoreLevelOfCluster:(id)a0 isAboveScoreLevelOfCluster:(id)a1;

@end
