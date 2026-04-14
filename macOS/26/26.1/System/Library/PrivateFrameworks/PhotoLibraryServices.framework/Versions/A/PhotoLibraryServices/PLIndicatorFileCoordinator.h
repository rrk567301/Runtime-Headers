@class NSString, PLPhotoLibraryPathManager;

@interface PLIndicatorFileCoordinator : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
    int _activityIndicatorFid;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activityIndicatorLock;
    NSString *_resourceHoldingDirectoryPath;
}

+ (void)setSystemLibraryAvailableIndicatorState:(BOOL)a0;
+ (BOOL)systemLibraryAvailableIndicatorState;

- (void)updateICloudPhotosMarkerForEnable:(BOOL)a0;
- (BOOL)isStreamsLibraryUpdatingExpired;
- (short)currentPauseReason;
- (void)setIsRebuildingPersons:(BOOL)a0;
- (void)_createPauseMarkerForReason:(short)a0 withUnpauseTime:(id)a1 withPath:(id)a2;
- (void)setStreamsLibraryUpdatingExpired:(BOOL)a0;
- (void)clearWipeCPLOnOpen;
- (BOOL)isICloudPhotosPaused;
- (id)_pauseDataOnPath:(id)a0;
- (void)setImageWriter:(id)a0 isBusy:(BOOL)a1 crashRecoverySupport:(id)a2;
- (void)getDownloadPhotoCount:(unsigned long long *)a0 downloadVideoCount:(unsigned long long *)a1;
- (BOOL)isDisableICloudPhotos;
- (id)_rebuildingAssetResourceUploadJobConfigurationIndicatorFilePath;
- (void)setIsRebuildingSocialGroups:(BOOL)a0;
- (BOOL)isEnableICloudPhotos;
- (void)deleteCPLDownloadFinishedMarkerFilePath;
- (BOOL)isWipeCPLOnOpen;
- (void)setDownloadCountsForImages:(unsigned long long)a0 videos:(unsigned long long)a1;
- (void)_writeDict:(id)a0 withFilename:(id)a1;
- (id)initWithPathManager:(id)a0;
- (void)setWipeCPLOnOpen;
- (id)initWithResourceHoldingDirectoryPath:(id)a0;
- (void)setIsRebuildingAssetResourceUploadJobConfiguration:(BOOL)a0;
- (BOOL)_canSetPauseMarkerWithUnpauseTime:(id)a0 onPauseData:(id)a1;
- (void)setCreatingAssetIsBusy:(BOOL)a0 uuid:(id)a1;
- (void)createPauseMarkerWithUnpauseTime:(id)a0 reason:(short)a1;
- (BOOL)isUserPause;
- (BOOL)needsRecoveryAfterCrashOptionallyRemoveAllIndicatorFiles:(BOOL)a0;
- (BOOL)isRebuildingAssetResourceUploadJobConfiguration;
- (void)_setActivityIndicatorWithPath:(id)a0 flag:(BOOL)a1 uuid:(id)a2 crashRecovery:(id /* block */)a3;
- (void)writeDisableICloudPhotosMarker;
- (BOOL)isRebuildingPersons;
- (id)_rebuildingSocialGroupsIndicatorFilePath;
- (BOOL)isForceSoftResetSync;
- (BOOL)isRebuildingSocialGroups;
- (void)dealloc;
- (id)_rebuildingPersonsIndicatorFilePath;
- (void)forceSoftResetSync;
- (void)writeEnableICloudPhotosMarker;
- (void).cxx_destruct;
- (BOOL)clearPauseMarkerForReason:(short)a0;
- (id)_readPListWithFilename:(id)a0;
- (BOOL)hasItemToDownload;
- (void)logCloudServiceEnableEvent:(BOOL)a0 serviceName:(id)a1 reason:(id)a2;
- (id)unpauseTime;

@end
