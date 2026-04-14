@class NSString, PLPhotoLibraryPathManager;

@interface PLIndicatorFileCoordinator : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
    int _activityIndicatorFid;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activityIndicatorLock;
    NSString *_resourceHoldingDirectoryPath;
}

+ (void)setSystemLibraryAvailableIndicatorState:(BOOL)a0;
+ (BOOL)systemLibraryAvailableIndicatorState;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setCreatingAssetIsBusy:(BOOL)a0;
- (id)initWithResourceHoldingDirectoryPath:(id)a0;
- (id)initWithPathManager:(id)a0;
- (void)_setActivityIndicatorWithPath:(id)a0 flag:(BOOL)a1 crashRecovery:(id /* block */)a2;
- (void)setImageWriter:(id)a0 isBusy:(BOOL)a1 crashRecoverySupport:(id)a2;
- (BOOL)needsRecoveryAfterCrashOptionallyRemoveAllIndicatorFiles:(BOOL)a0;
- (BOOL)isEnableICloudPhotos;
- (BOOL)isDisableICloudPhotos;
- (BOOL)isICloudPhotosPaused;
- (void)deleteCPLDownloadFinishedMarkerFilePath;
- (void)writeDisableICloudPhotosMarker;
- (void)writeEnableICloudPhotosMarker;
- (void)updateICloudPhotosMarkerForEnable:(BOOL)a0;
- (BOOL)clearPauseMarkerForReason:(short)a0;
- (BOOL)_canSetPauseMarkerWithUnpauseTime:(id)a0 onPauseData:(id)a1;
- (void)_createPauseMarkerForReason:(short)a0 withUnpauseTime:(id)a1 withPath:(id)a2;
- (void)createPauseMarkerWithUnpauseTime:(id)a0 reason:(short)a1;
- (id)_pauseDataOnPath:(id)a0;
- (id)unpauseTime;
- (short)currentPauseReason;
- (BOOL)isUserPause;
- (BOOL)isForceSoftResetSync;
- (void)forceSoftResetSync;
- (BOOL)isWipeCPLOnOpen;
- (void)setWipeCPLOnOpen;
- (void)clearWipeCPLOnOpen;
- (id)_readPListWithFilename:(id)a0;
- (void)_writeDict:(id)a0 withFilename:(id)a1;
- (BOOL)hasItemToDownload;
- (void)getDownloadPhotoCount:(unsigned long long *)a0 downloadVideoCount:(unsigned long long *)a1;
- (void)setDownloadCountsForImages:(unsigned long long)a0 videos:(unsigned long long)a1;
- (id)dupeAnalysisNeededFilePath;
- (void)setDupeAnalysisNeeded:(BOOL)a0;
- (BOOL)isDupeAnalysisNeeded;
- (void)setStreamsLibraryUpdatingExpired:(BOOL)a0;
- (BOOL)isStreamsLibraryUpdatingExpired;
- (id)_rebuildingPersonsIndicatorFilePath;
- (void)setIsRebuildingPersons:(BOOL)a0;
- (BOOL)isRebuildingPersons;
- (void)logCloudServiceEnableEvent:(BOOL)a0 serviceName:(id)a1 reason:(id)a2;

@end
