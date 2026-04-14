@class PLLibraryServicesManager, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface PLLibraryServicesCPLReadiness : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    NSObject<OS_dispatch_source> *_photoLibraryCPLReadinessTimer;
    NSMutableArray *_photoLibraryCPLReadinessBlocks;
}

- (void)invalidate;
- (void).cxx_destruct;
- (id)libraryServicesManager;
- (BOOL)isReadyForCloudPhotoLibraryWithStatus:(id *)a0;
- (id)initWithLibraryServicesManager:(id)a0;
- (void)performOnceLibraryIsReadyForCPLManager:(id /* block */)a0;
- (void)pauseCloudPhotos:(BOOL)a0 reason:(short)a1;
- (void)processCloudPhotosLibraryStateChange:(BOOL)a0;
- (BOOL)_isAssetsdReadyForCPLManagerWithStatus:(id *)a0;
- (void)cancelCPLReadinessBlocksAndStopWaiting;
- (void)_stopWaitingForCPLReadiness;
- (void)_callOutstandingCPLReadinessBlocks;
- (BOOL)_checkForCPLReadinessAndCallBlocks;
- (void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;

@end
