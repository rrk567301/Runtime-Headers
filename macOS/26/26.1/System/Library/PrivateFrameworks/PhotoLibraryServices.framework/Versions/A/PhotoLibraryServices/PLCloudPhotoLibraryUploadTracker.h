@class PLAtomicObject, NSMutableSet, NSMutableDictionary;

@interface PLCloudPhotoLibraryUploadTracker : NSObject {
    PLAtomicObject *_atomicProgress;
    NSMutableSet *_mastersToUpload;
    NSMutableSet *_deferredAssetsToUpload;
    NSMutableDictionary *_trackedResourceProgressSize;
    NSMutableDictionary *_trackedResourceMasterUploaded;
    NSMutableDictionary *_masterRecordUploadState;
    NSMutableSet *_mastersToUploadTrackingSize;
}

@property (readonly) unsigned long long totalNumberOfUnpushedMasters;
@property (readonly) unsigned long long totalNumberOfUploadedMasters;
@property (readonly) unsigned long long totalNumberOfDeferredAssets;
@property (readonly) unsigned long long totalSizeOfUnpushedOriginals;
@property (readonly) unsigned long long totalUploadedOriginalSize;
@property (readonly) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } currentTransferProgress;

- (void)_setBatchUploadStateForTrackedMasters:(id)a0 withState:(BOOL)a1;
- (void)setupFromCPLManager:(id)a0;
- (void)stopTrackingMaster:(id)a0;
- (void)updateForMasterResourceUploadWithScopedIdentifier:(id)a0 progress:(float)a1 fileSize:(unsigned long long)a2 type:(int)a3;
- (BOOL)_isMasterRecordUploaded:(id)a0;
- (void)uploadFinishedForMasterResourceWithScopedIdentifier:(id)a0 fileSize:(unsigned long long)a1 type:(int)a2 withError:(BOOL)a3;
- (void)resetIfNeededWithLibrary:(id)a0 isInitialUpload:(BOOL)a1;
- (void)reset;
- (void)trackDeferredAssetForScopedIdentifier:(id)a0;
- (void)setupFromLibrary:(id)a0 isInitialUpload:(BOOL)a1;
- (void)addSizeForUnpushedOriginals:(unsigned long long)a0 forMasterScopedIdentifier:(id)a1 forAssetScopedIdentifier:(id)a2;
- (void)_stopTrackingResourceWithScopedIdentifier:(id)a0 fileSize:(unsigned long long)a1 type:(int)a2;
- (void).cxx_destruct;
- (void)uploadFinishedForMasterRecordWithScopedIdentifier:(id)a0 didUpdateStatus:(BOOL *)a1;
- (id)currentStateForDebug;
- (id)_constructKeyForScopedIdentifier:(id)a0 type:(int)a1;
- (id)init;
- (BOOL)_trackingMasterForScopedIdentifier:(id)a0;

@end
