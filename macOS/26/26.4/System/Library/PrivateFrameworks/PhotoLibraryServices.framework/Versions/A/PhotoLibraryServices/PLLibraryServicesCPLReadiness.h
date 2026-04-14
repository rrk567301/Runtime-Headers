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

- (void)performOnceLibraryIsReadyForCPLManager:(id /* block */)a0;
- (BOOL)_isReadyForCloudPhotoLibraryWithStatus:(id *)a0;
- (void)_attemptFileSystemImport;
- (void)_checkIsReadyForCloudPhotoLibrary;
- (BOOL)_checkForCPLReadinessAndCallBlocks;
- (id)libraryServicesManager;
- (void)_updateIsReady:(BOOL)a0 isWaitingOnImport:(BOOL)a1 statusMessage:(id)a2;
- (BOOL)isReadyForCloudPhotoLibraryWithStatus:(id *)a0;
- (void)_callOutstandingCPLReadinessBlocks;
- (void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;
- (void)processCloudPhotosLibraryStateChange:(BOOL)a0;
- (void)pauseCloudPhotos:(BOOL)a0 reason:(short)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)_isWaitingOnFileSystemImport;
- (void)cancelCPLReadinessBlocksAndStopWaiting;
- (id)initWithLibraryServicesManager:(id)a0;
- (void)_stopWaitingForCPLReadiness;
- (BOOL)_isAssetsdReadyForCPLManagerWithStatus:(id *)a0;

@end
