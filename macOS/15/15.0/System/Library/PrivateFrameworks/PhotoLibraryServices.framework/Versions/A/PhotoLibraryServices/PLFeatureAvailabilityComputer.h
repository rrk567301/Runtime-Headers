@protocol PLFeatureAvailabilityTransitionDelegate, PLFeatureAvailabilityProgressDelegate, PLMediaProcessingAlgorithmVersionProvider;

@interface PLFeatureAvailabilityComputer : NSObject {
    id<PLMediaProcessingAlgorithmVersionProvider> _versionProvider;
    id<PLFeatureAvailabilityTransitionDelegate> _transitionDelegate;
    id<PLFeatureAvailabilityProgressDelegate> _progressDelegate;
}

+ (id)_predicateForEnrichedHighlights;
+ (id)_predicateForAllAssetsAllowedForProcessingForSceneAnalysis:(BOOL)a0;
+ (id)_predicateForAllCuratedAssetsForSceneAnalysis:(BOOL)a0;
+ (id)_predicateForCountOfProcessedAssetsForMediaProcessingTaskID:(unsigned long long)a0 priority:(unsigned long long)a1 versionProvider:(id)a2;
+ (id)_predicatesForVisibleAssets;
+ (id)_savedAssetTypePredicateForSceneAnalysis:(BOOL)a0;

- (void).cxx_destruct;
- (BOOL)_addAnalysisStatusForMediaTaskID:(unsigned long long)a0 toProcessingSnapshot:(id)a1 managedObjectContext:(id)a2 error:(id *)a3;
- (BOOL)_addAssetCountsToProcessingSnapshot:(id)a0 managedObjectContext:(id)a1 forSceneAnalysis:(BOOL)a2 error:(id *)a3;
- (BOOL)_addCaptioningStatusToProcessingSnapshot:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
- (BOOL)_addEmbeddingVectorIndexingStatusToProcessingSnapshot:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
- (BOOL)_addHighlightStatusToProcessingSnapshot:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
- (BOOL)_addPhotosKnowledgeGraphStatusToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (BOOL)_addSpotlightSearchIndexingStatusToProcessingSnapshot:(id)a0 forTaskID:(unsigned long long)a1 completedCount:(long long)a2 totalCount:(long long)a3 error:(id *)a4;
- (BOOL)_addVisualUnderstandingClusterIndexStatusToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (unsigned long long)_assetCountForPredicate:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
- (BOOL)_clearAvailabilityForPhotoLibrary:(id)a0 error:(id *)a1;
- (id)_computeAvailabilityForSnapshot:(id)a0 photoLibrary:(id)a1 shouldPersist:(BOOL)a2 error:(id *)a3;
- (void)_fetchSpotlightSearchIndexingStatusForTaskID:(unsigned long long)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (void)_persistFeatureAvailabilityDictionary:(id)a0 photoLibrary:(id)a1;
- (void)_step01_AddAssetCountsToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (void)_step02_AddAssetForSceneCountsToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (void)_step03_AddCaptioningToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (void)_step04_AddEmbeddingIndexingToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (void)_step05_AddHighlightStatusToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (void)_step06_AddSceneAnalysisToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (void)_step07_AddSceneAnalysisIndexingToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (void)_step08_AddMediaAnalysisIndexingToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)clearAvailabilityStateForPhotoLibrary:(id)a0 error:(id *)a1;
- (void)computeAvailabilityForPhotoLibrary:(id)a0 shouldPersist:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)computeSnapshotForPhotoLibrary:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithTransitionDelegate:(id)a0 progressDelegate:(id)a1;

@end
