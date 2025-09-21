@class NSString, PLPhotoLibraryPathManager;

@interface PLIndicatorFileCoordinator : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
    int _activityIndicatorFid;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activityIndicatorLock;
    NSString *_resourceHoldingDirectoryPath;
}

+ (void)setSystemLibraryAvailableIndicatorState:(char)a0;
+ (char)systemLibraryAvailableIndicatorState;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPathManager:(id)a0;
- (id)initWithResourceHoldingDirectoryPath:(id)a0;
- (void)setCreatingAssetIsBusy:(char)a0 uuid:(id)a1;
- (char)isStreamsLibraryUpdatingExpired;
- (char)isWipeCPLOnOpen;
- (char)_canSetPauseMarkerWithUnpauseTime:(id)a0 onPauseData:(id)a1;
- (void)_createPauseMarkerForReason:(short)a0 withUnpauseTime:(id)a1 withPath:(id)a2;
- (id)_pauseDataOnPath:(id)a0;
- (id)_readPListWithFilename:(id)a0;
- (id)_rebuildingPersonsIndicatorFilePath;
- (id)_rebuildingSocialGroupsIndicatorFilePath;
- (void)_setActivityIndicatorWithPath:(id)a0 flag:(char)a1 uuid:(id)a2 crashRecovery:(id /* block */)a3;
- (void)_writeDict:(id)a0 withFilename:(id)a1;
- (char)clearPauseMarkerForReason:(short)a0;
- (void)clearWipeCPLOnOpen;
- (void)createPauseMarkerWithUnpauseTime:(id)a0 reason:(short)a1;
- (short)currentPauseReason;
- (void)deleteCPLDownloadFinishedMarkerFilePath;
- (void)forceSoftResetSync;
- (void)getDownloadPhotoCount:(unsigned long long *)a0 downloadVideoCount:(unsigned long long *)a1;
- (char)hasItemToDownload;
- (char)isDisableICloudPhotos;
- (char)isEnableICloudPhotos;
- (char)isForceSoftResetSync;
- (char)isICloudPhotosPaused;
- (char)isRebuildingPersons;
- (char)isRebuildingSocialGroups;
- (char)isUserPause;
- (void)logCloudServiceEnableEvent:(char)a0 serviceName:(id)a1 reason:(id)a2;
- (char)needsRecoveryAfterCrashOptionallyRemoveAllIndicatorFiles:(char)a0;
- (void)setDownloadCountsForImages:(unsigned long long)a0 videos:(unsigned long long)a1;
- (void)setImageWriter:(id)a0 isBusy:(char)a1 crashRecoverySupport:(id)a2;
- (void)setIsRebuildingPersons:(char)a0;
- (void)setIsRebuildingSocialGroups:(char)a0;
- (void)setStreamsLibraryUpdatingExpired:(char)a0;
- (void)setWipeCPLOnOpen;
- (id)unpauseTime;
- (void)updateICloudPhotosMarkerForEnable:(char)a0;
- (void)writeDisableICloudPhotosMarker;
- (void)writeEnableICloudPhotosMarker;

@end
