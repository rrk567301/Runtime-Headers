@class PLPhotoLibraryPathManager;

@interface PLIndicatorFileCoordinator : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
    int _activityIndicatorFid;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activityIndicatorLock;
}

+ (BOOL)systemLibraryAvailableIndicatorState;
+ (void)setSystemLibraryAvailableIndicatorState:(BOOL)a0;

- (void).cxx_destruct;
- (id)initWithPathManager:(id)a0;
- (BOOL)needsRecoveryAfterCrashOptionallyRemoveAllIndicatorFiles:(BOOL)a0;
- (BOOL)isRebuildingPersons;
- (void)setIsRebuildingPersons:(BOOL)a0;
- (BOOL)isDupeAnalysisNeeded;
- (void)setImageWriter:(id)a0 isBusy:(BOOL)a1 crashRecoverySupport:(id)a2;
- (BOOL)isDisableICloudPhotos;
- (void)logCloudServiceEnableEvent:(BOOL)a0 serviceName:(id)a1 reason:(id)a2;
- (BOOL)hasItemToDownload;
- (void)updateICloudPhotosMarkerForEnable:(BOOL)a0;
- (BOOL)isICloudPhotosPaused;
- (short)currentPauseReason;
- (BOOL)isWipeCPLOnOpen;
- (void)clearWipeCPLOnOpen;
- (BOOL)clearPauseMarkerForReason:(short)a0;
- (void)createPauseMarkerWithUnpauseTime:(id)a0 reason:(short)a1;
- (void)writeDisableICloudPhotosMarker;
- (void)deleteCPLDownloadFinishedMarkerFilePath;
- (void)setWipeCPLOnOpen;
- (id)unpauseTime;
- (BOOL)isEnableICloudPhotos;
- (BOOL)isForceSoftResetSync;
- (void)setDownloadCountsForImages:(unsigned long long)a0 videos:(unsigned long long)a1;
- (void)forceSoftResetSync;
- (void)_setActivityIndicatorWithPath:(id)a0 flag:(BOOL)a1 crashRecovery:(id /* block */)a2;
- (BOOL)isUserPause;
- (id)_pauseDataOnPath:(id)a0;
- (BOOL)_canSetPauseMarkerWithUnpauseTime:(id)a0 onPauseData:(id)a1;
- (void)_createPauseMarkerForReason:(short)a0 withUnpauseTime:(id)a1 withPath:(id)a2;
- (id)_readPListWithFilename:(id)a0;
- (void)_writeDict:(id)a0 withFilename:(id)a1;
- (id)dupeAnalysisNeededFilePath;
- (id)_rebuildingPersonsIndicatorFilePath;
- (void)writeEnableICloudPhotosMarker;
- (void)getDownloadPhotoCount:(unsigned long long *)a0 downloadVideoCount:(unsigned long long *)a1;
- (void)setDupeAnalysisNeeded:(BOOL)a0;
- (void)setStreamsLibraryUpdatingExpired:(BOOL)a0;
- (BOOL)isStreamsLibraryUpdatingExpired;

@end
