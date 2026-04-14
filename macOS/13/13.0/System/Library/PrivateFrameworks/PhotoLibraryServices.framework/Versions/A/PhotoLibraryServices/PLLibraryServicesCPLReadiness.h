@class NSString, PLLibraryServicesManager, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface PLLibraryServicesCPLReadiness : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    NSObject<OS_dispatch_source> *_photoLibraryCPLReadinessTimer;
    NSMutableArray *_photoLibraryCPLReadinessBlocks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    NSString *_statusMessage;
    BOOL _isReadyForCPL;
}

- (void)invalidate;
- (void).cxx_destruct;
- (id)libraryServicesManager;
- (id)initWithLibraryServicesManager:(id)a0;
- (BOOL)isReadyForCloudPhotoLibraryWithStatus:(id *)a0;
- (BOOL)_isReadyForCloudPhotoLibraryWithStatus:(id *)a0;
- (void)_updateIsReady:(BOOL)a0 statusMessage:(id)a1;
- (void)_checkIsReadyForCloudPhotoLibrary;
- (BOOL)_isAssetsdReadyForCPLManagerWithStatus:(id *)a0;
- (void)cancelCPLReadinessBlocksAndStopWaiting;
- (void)_stopWaitingForCPLReadiness;
- (void)_callOutstandingCPLReadinessBlocks;
- (BOOL)_checkForCPLReadinessAndCallBlocks;
- (void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;
- (void)performOnceLibraryIsReadyForCPLManager:(id /* block */)a0;
- (void)processCloudPhotosLibraryStateChange:(BOOL)a0;
- (void)pauseCloudPhotos:(BOOL)a0 reason:(short)a1;

@end
