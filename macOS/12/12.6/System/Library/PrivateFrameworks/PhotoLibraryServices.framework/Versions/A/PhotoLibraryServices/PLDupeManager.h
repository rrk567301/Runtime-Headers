@class NSCountedSet, NSMutableDictionary, PLPhotoLibrary, NSMutableSet, NSSet, NSMutableArray;

@interface PLDupeManager : NSObject {
    NSMutableArray *_normalAssetsObjectIDsToAnalyze;
    NSMutableDictionary *_cloudAssetsToAnalyze;
    NSMutableArray *_assetsWithUpdatedVisibility;
    BOOL _doneWithCloudAssets;
    BOOL _isRebuilding;
    NSMutableSet *_normalInserts;
    NSMutableSet *_cloudInserts;
    NSCountedSet *_pauseReasons;
    NSSet *_softPauseReasons;
    double _rebuildStartTime;
}

@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;

+ (id)hashForData:(id)a0;
+ (id)hashForAsset:(id)a0;
+ (id)hashForFileAtPath:(id)a0 utiType:(id)a1;
+ (BOOL)resetDupesAnalysisForOfflineStore:(id)a0 pathManager:(id)a1;
+ (id)placeholderHash;
+ (BOOL)_resetDupesAnalysisInManagedObjectContext:(id)a0 pathManager:(id)a1;
+ (id)_hashForFileAtPath:(id)a0 utiType:(id)a1;
+ (void)_setPlaceHolderHashOnAsset:(id)a0;
+ (BOOL)_computeHashForAsset:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)resumeAnalysisWithReason:(id)a0;
- (void)pauseAnalysisWithReason:(id)a0;
- (void)resetDupesAnalysis;
- (void)launchDupeAnalysisIfNeeded;
- (void)analyzeDupesWithNormalInserts:(id)a0 cloudInserts:(id)a1 completionHandler:(id /* block */)a2;
- (void)persistPublicGlobalUUIDsForAssets:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateVisibilityState:(short)a0 forAsset:(id)a1;
- (void)_noteAssetVisibilityDidChange:(id)a0;
- (id)_duplicateCloudAssetForHash:(id)a0 orPublicGlobalUUID:(id)a1;
- (void)_removeCloudAssetFromAnalysis:(id)a0;
- (BOOL)_prepareCloudAssetsToAnalyzeForManagedObjectContext:(id)a0;
- (void)_analyzeDupeForNormalAsset:(id)a0;
- (void)_analyzeDupesForRebuild;
- (void)_continueAnalysisForRebuild;
- (short)_computeCloudAssetHashesForManagedObjectContext:(id)a0;
- (void)_continueAnalysisForRebuildOrPause;
- (short)_analyzeNormalAssetsForManagedObjectContext:(id)a0;
- (short)_computeAssetHashesForManagedObjectContext:(id)a0;
- (short)_adjustCloudAssetVisibilityStateForManagedObjectContext:(id)a0;
- (void)_performAnalysisTransaction:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (BOOL)_analyzeDupeForCloudAssetsAndHashes:(id)a0 andPublicGlobalUUIDs:(id)a1 forManagedObjectContext:(id)a2;
- (void)_analyzeDupes;
- (short)_analyzeDupesForNormalInsertsForManagedObjectContext:(id)a0;
- (void)_continueAnalysis;
- (short)_analyzeDupesForCloudInsertsForManagedObjectContext:(id)a0;
- (void)_resetSoftPauseReasons;

@end
