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

- (void)_callOutstandingCPLReadinessBlocks;
- (id)libraryServicesManager;
- (void)cancelCPLReadinessBlocksAndStopWaiting;
- (void)invalidate;
- (BOOL)_checkForCPLReadinessAndCallBlocks;
- (void)pauseCloudPhotos:(BOOL)a0 reason:(short)a1;
- (void)_stopWaitingForCPLReadiness;
- (void)_checkIsReadyForCloudPhotoLibrary;
- (BOOL)_isReadyForCloudPhotoLibraryWithStatus:(id *)a0;
- (void)_updateIsReady:(BOOL)a0 statusMessage:(id)a1;
- (BOOL)isReadyForCloudPhotoLibraryWithStatus:(id *)a0;
- (id)initWithLibraryServicesManager:(id)a0;
- (void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;
- (void)performOnceLibraryIsReadyForCPLManager:(id /* block */)a0;
- (BOOL)_isAssetsdReadyForCPLManagerWithStatus:(id *)a0;
- (void)processCloudPhotosLibraryStateChange:(BOOL)a0;
- (void).cxx_destruct;

@end
