@class NSObject, PLDateRangeTitleGenerator, NSMutableDictionary, NSMutableArray, PLPhotoLibraryBundle, PLLazyObject, NSMutableOrderedSet, PLMomentGenerationThrottle;
@protocol PLMomentGenerationDataManagement, OS_dispatch_queue, PLHighlightItemModelReader;

@interface PLMomentGeneration : NSObject {
    unsigned long long _inProgressCount;
    NSMutableOrderedSet *_pendingInsertsAndUpdates;
    NSMutableDictionary *_pendingDeletes;
    NSMutableOrderedSet *_pendingUpdatesForHighlights;
    NSMutableOrderedSet *_pendingMomentUpdatesForHighlights;
    NSMutableDictionary *_pendingSharedAssetContainerIncrementalChanges;
    NSMutableArray *_pendingCompletionBlocks;
    NSObject<OS_dispatch_queue> *_incrementalGenerationStateQueue;
    PLLazyObject *_lazyFrequentLocationManager;
    PLLazyObject *_lazyLocalCreationDateCreator;
    PLMomentGenerationThrottle *_incrementalMomentGenThrottle;
    PLPhotoLibraryBundle *_libraryBundle;
    PLDateRangeTitleGenerator *_dateRangeTitleGenerator;
}

@property (readonly, weak, nonatomic) id<PLMomentGenerationDataManagement, PLHighlightItemModelReader> momentGenerationDataManager;

+ (id)dateIntervalsAroundSortedDates:(id)a0 minimumIntervalDuration:(double)a1;

- (id)newFrequentLocationManager;
- (id)frequentLocationManager;
- (id)_highlightGenerator;
- (BOOL)isGenerationPassInProgress;
- (void)generateWithAssetInsertsAndUpdates:(id)a0 assetDeletes:(id)a1 assetUpdatesForHighlights:(id)a2 momentUpdatesForHighlights:(id)a3 completionHandler:(id /* block */)a4;
- (void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithForceUpdateLocale:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)rebuildAllHighlightsWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)_runIncrementalGenerationPassWithCompletionHandler:(id /* block */)a0;
- (BOOL)_writeDetails:(id)a0 toFilepath:(id)a1 withDefaultFilename:(id)a2;
- (void)cleanupEmptyHighlightsWithCompletionBlock:(id /* block */)a0;
- (void)generateWithIncrementalDataCompletionHandler:(id /* block */)a0;
- (id)localCreationDateCreator;
- (void)processUnprocessedMomentLocationsWithCompletionBlock:(id /* block */)a0;
- (void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithCompletionBlock:(id /* block */)a0;
- (BOOL)regenerateMonthHighlightTitlesWithManager:(id)a0 error:(id *)a1;
- (id)_detailsForMoment:(id)a0;
- (void)locationOfInterestUpdateWithCompletionBlock:(id /* block */)a0;
- (id)allMomentsMetadataWriteToFile:(id)a0;
- (id)initWithMomentGenerationDataManager:(id)a0 bundle:(id)a1;
- (id)_newPublicGlobalUUIDsToAssetsMappingWithAssets:(id)a0;
- (void)processRecentHighlightsWithCompletionBlock:(id /* block */)a0;
- (void)_clearReplayLog;
- (void).cxx_destruct;
- (BOOL)_isAsset:(id)a0 identicalToAssetForMoments:(id)a1;
- (void)updateHighlightTitlesWithCompletionBlock:(id /* block */)a0;
- (id)initWithMomentGenerationDataManager:(id)a0 bundle:(id)a1 locale:(id)a2;
- (void)rebuildAllMomentsWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)_runMomentAndHighlightGenerationForAssets:(id)a0 hiddenAssets:(id)a1 updatedAssetIDsForHighlights:(id)a2 updatedMomentIDsForHighlights:(id)a3 affectedMoments:(id)a4 highlightsWithDeletedMoments:(id)a5 sharedAssetContainerIncrementalChanges:(id)a6 insertedOrUpdatedMoments:(id *)a7;
- (void)validateLibraryWithCompletionBlock:(id /* block */)a0;
- (id)newLocalCreationDateCreator;
- (void)_appendAssetsToReplayLog:(id)a0 forBatchUpdate:(BOOL)a1;
- (void)_runIncrementalMomentGenerationIfItemsArePendingWithCompletion:(id /* block */)a0;
- (void)_updateIncrementalMomentGeneration;
- (BOOL)_hasWorkWorkRemainingWithCompletionBlocks:(id *)a0;
- (void)saveChangesForAssetInsertsAndUpdates:(id)a0 assetDeletes:(id)a1 assetUpdatesForHighlights:(id)a2 momentUpdatesForHighlights:(id)a3 sharedAssetContainerIncrementalChangesByAssetID:(id)a4;
- (id)allAssetMetadataWriteToFile:(id)a0;
- (void)releaseMemoryIntensiveObjects;
- (id)_logEntryForAssets:(id)a0 isBatchUpdate:(BOOL)a1;
- (id)_detailsForAsset:(id)a0 simpleOnly:(BOOL)a1;
- (id)momentGenerationStatus;

@end
