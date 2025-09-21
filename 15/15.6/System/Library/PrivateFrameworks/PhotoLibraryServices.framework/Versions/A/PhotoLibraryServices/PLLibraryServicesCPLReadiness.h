@class NSString, PLLibraryServicesManager, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface PLLibraryServicesCPLReadiness : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    NSObject<OS_dispatch_source> *_photoLibraryCPLReadinessTimer;
    NSMutableArray *_photoLibraryCPLReadinessBlocks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    NSString *_statusMessage;
    char _isReadyForCPL;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithLibraryServicesManager:(id)a0;
- (id)libraryServicesManager;
- (void)_callOutstandingCPLReadinessBlocks;
- (char)_checkForCPLReadinessAndCallBlocks;
- (void)_checkIsReadyForCloudPhotoLibrary;
- (char)_isAssetsdReadyForCPLManagerWithStatus:(id *)a0;
- (char)_isReadyForCloudPhotoLibraryWithStatus:(id *)a0;
- (void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;
- (void)_stopWaitingForCPLReadiness;
- (void)_updateIsReady:(char)a0 statusMessage:(id)a1;
- (void)cancelCPLReadinessBlocksAndStopWaiting;
- (char)isReadyForCloudPhotoLibraryWithStatus:(id *)a0;
- (void)pauseCloudPhotos:(char)a0 reason:(short)a1;
- (void)performOnceLibraryIsReadyForCPLManager:(id /* block */)a0;
- (void)processCloudPhotosLibraryStateChange:(char)a0;

@end
