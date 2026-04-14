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

- (id)initWithLibraryServicesManager:(id)a0;
- (void)invalidate;
- (id)libraryServicesManager;
- (void)_stopWaitingForCPLReadiness;
- (void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;
- (void)pauseCloudPhotos:(BOOL)a0 reason:(short)a1;
- (void).cxx_destruct;
- (BOOL)_checkForCPLReadinessAndCallBlocks;
- (BOOL)isReadyForCloudPhotoLibraryWithStatus:(id *)a0;
- (void)_checkIsReadyForCloudPhotoLibrary;
- (void)performOnceLibraryIsReadyForCPLManager:(id /* block */)a0;
- (BOOL)_isAssetsdReadyForCPLManagerWithStatus:(id *)a0;
- (void)_attemptFileSystemImport;
- (void)_updateIsReady:(BOOL)a0 isWaitingOnImport:(BOOL)a1 statusMessage:(id)a2;
- (BOOL)_isReadyForCloudPhotoLibraryWithStatus:(id *)a0;
- (void)processCloudPhotosLibraryStateChange:(BOOL)a0;
- (void)_callOutstandingCPLReadinessBlocks;
- (BOOL)_isWaitingOnFileSystemImport;
- (void)cancelCPLReadinessBlocksAndStopWaiting;

@end
