@class NSString, PLLibraryServicesManager, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface PLLibraryServicesCPLReadiness : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    NSObject<OS_dispatch_source> *_photoLibraryCPLReadinessTimer;
    NSMutableArray *_photoLibraryCPLReadinessBlocks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    NSString *_stateLock_statusMessage;
    BOOL _stateLock_isReadyForCPL;
    BOOL _stateLock_isWaitingOnFileSystemImport;
}

- (void)invalidate;
- (void)performOnceLibraryIsReadyForCPLManager:(id /* block */)a0;
- (BOOL)isReadyForCloudPhotoLibraryWithStatus:(id *)a0;
- (id)libraryServicesManager;
- (BOOL)_isWaitingOnFileSystemImport;
- (void)_updateIsReady:(BOOL)a0 isWaitingOnImport:(BOOL)a1 statusMessage:(id)a2;
- (void)_stopWaitingForCPLReadiness;
- (void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;
- (BOOL)_checkForCPLReadinessAndCallBlocks;
- (BOOL)_isReadyForCloudPhotoLibraryWithStatus:(id *)a0;
- (void)cancelCPLReadinessBlocksAndStopWaiting;
- (void).cxx_destruct;
- (id)initWithLibraryServicesManager:(id)a0;
- (void)_checkIsReadyForCloudPhotoLibrary;
- (void)_callOutstandingCPLReadinessBlocks;
- (void)processCloudPhotosLibraryStateChange:(BOOL)a0;
- (void)pauseCloudPhotos:(BOOL)a0 reason:(short)a1;
- (BOOL)_isAssetsdReadyForCPLManagerWithStatus:(id *)a0;
- (void)_attemptFileSystemImport;

@end
