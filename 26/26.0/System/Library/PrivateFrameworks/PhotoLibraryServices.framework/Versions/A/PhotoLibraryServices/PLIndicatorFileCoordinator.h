@class NSString, PLPhotoLibraryPathManager;

@interface PLIndicatorFileCoordinator : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
    int _activityIndicatorFid;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activityIndicatorLock;
    NSString *_resourceHoldingDirectoryPath;
}

+ (void)setSystemLibraryAvailableIndicatorState:(BOOL)a0;
+ (BOOL)systemLibraryAvailableIndicatorState;

- (BOOL)isWipeCPLOnOpen;
- (id)initWithPathManager:(id)a0;
- (void)_writeDict:(id)a0 withFilename:(id)a1;
- (BOOL)hasItemToDownload;
- (void)dealloc;
- (BOOL)isForceSoftResetSync;
- (BOOL)isRebuildingSocialGroups;
- (void)setCreatingAssetIsBusy:(BOOL)a0 uuid:(id)a1;
- (BOOL)isDisableICloudPhotos;
- (void)deleteCPLDownloadFinishedMarkerFilePath;
- (void)createPauseMarkerWithUnpauseTime:(id)a0 reason:(short)a1;
- (void)_setActivityIndicatorWithPath:(id)a0 flag:(BOOL)a1 uuid:(id)a2 crashRecovery:(id /* block */)a3;
- (void)setImageWriter:(id)a0 isBusy:(BOOL)a1 crashRecoverySupport:(id)a2;
- (BOOL)needsRecoveryAfterCrashOptionallyRemoveAllIndicatorFiles:(BOOL)a0;
- (BOOL)clearPauseMarkerForReason:(short)a0;
- (void)logCloudServiceEnableEvent:(BOOL)a0 serviceName:(id)a1 reason:(id)a2;
- (void)clearWipeCPLOnOpen;
- (void)getDownloadPhotoCount:(unsigned long long *)a0 downloadVideoCount:(unsigned long long *)a1;
- (BOOL)_canSetPauseMarkerWithUnpauseTime:(id)a0 onPauseData:(id)a1;
- (void)setWipeCPLOnOpen;
- (void)setDownloadCountsForImages:(unsigned long long)a0 videos:(unsigned long long)a1;
- (BOOL)isStreamsLibraryUpdatingExpired;
- (void)forceSoftResetSync;
- (id)_pauseDataOnPath:(id)a0;
- (void)writeDisableICloudPhotosMarker;
- (id)initWithResourceHoldingDirectoryPath:(id)a0;
- (void)setIsRebuildingSocialGroups:(BOOL)a0;
- (BOOL)isUserPause;
- (BOOL)isICloudPhotosPaused;
- (short)currentPauseReason;
- (id)_rebuildingPersonsIndicatorFilePath;
- (BOOL)isRebuildingPersons;
- (void)setIsRebuildingPersons:(BOOL)a0;
- (void)_createPauseMarkerForReason:(short)a0 withUnpauseTime:(id)a1 withPath:(id)a2;
- (id)unpauseTime;
- (id)_rebuildingSocialGroupsIndicatorFilePath;
- (void)writeEnableICloudPhotosMarker;
- (void)setStreamsLibraryUpdatingExpired:(BOOL)a0;
- (void)updateICloudPhotosMarkerForEnable:(BOOL)a0;
- (void).cxx_destruct;
- (id)_readPListWithFilename:(id)a0;
- (BOOL)isEnableICloudPhotos;

@end
