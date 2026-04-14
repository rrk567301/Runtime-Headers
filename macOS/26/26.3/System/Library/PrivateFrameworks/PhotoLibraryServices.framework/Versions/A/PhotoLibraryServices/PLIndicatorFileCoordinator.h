@class NSString, PLPhotoLibraryPathManager;

@interface PLIndicatorFileCoordinator : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
    int _activityIndicatorFid;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activityIndicatorLock;
    NSString *_resourceHoldingDirectoryPath;
}

+ (void)setSystemLibraryAvailableIndicatorState:(BOOL)a0;
+ (BOOL)systemLibraryAvailableIndicatorState;

- (id)initWithPathManager:(id)a0;
- (void)setIsRebuildingSocialGroups:(BOOL)a0;
- (void)logCloudServiceEnableEvent:(BOOL)a0 serviceName:(id)a1 reason:(id)a2;
- (void)_setActivityIndicatorWithPath:(id)a0 flag:(BOOL)a1 uuid:(id)a2 crashRecovery:(id /* block */)a3;
- (BOOL)_canSetPauseMarkerWithUnpauseTime:(id)a0 onPauseData:(id)a1;
- (id)_pauseDataOnPath:(id)a0;
- (BOOL)isICloudPhotosPaused;
- (BOOL)hasItemToDownload;
- (void)setIsRebuildingAssetResourceUploadJobConfiguration:(BOOL)a0;
- (id)_readPListWithFilename:(id)a0;
- (void)setIsRebuildingPersons:(BOOL)a0;
- (void)_createPauseMarkerForReason:(short)a0 withUnpauseTime:(id)a1 withPath:(id)a2;
- (BOOL)needsRecoveryAfterCrashOptionallyRemoveAllIndicatorFiles:(BOOL)a0;
- (void)createPauseMarkerWithUnpauseTime:(id)a0 reason:(short)a1;
- (void)clearWipeCPLOnOpen;
- (BOOL)isStreamsLibraryUpdatingExpired;
- (void)getDownloadPhotoCount:(unsigned long long *)a0 downloadVideoCount:(unsigned long long *)a1;
- (void)deleteCPLDownloadFinishedMarkerFilePath;
- (id)_rebuildingSocialGroupsIndicatorFilePath;
- (BOOL)isRebuildingSocialGroups;
- (void)setStreamsLibraryUpdatingExpired:(BOOL)a0;
- (id)initWithResourceHoldingDirectoryPath:(id)a0;
- (id)unpauseTime;
- (BOOL)clearPauseMarkerForReason:(short)a0;
- (BOOL)isWipeCPLOnOpen;
- (void).cxx_destruct;
- (void)setDownloadCountsForImages:(unsigned long long)a0 videos:(unsigned long long)a1;
- (BOOL)isRebuildingPersons;
- (id)_rebuildingAssetResourceUploadJobConfigurationIndicatorFilePath;
- (BOOL)isUserPause;
- (void)dealloc;
- (BOOL)isEnableICloudPhotos;
- (id)_rebuildingPersonsIndicatorFilePath;
- (void)setCreatingAssetIsBusy:(BOOL)a0 uuid:(id)a1;
- (short)currentPauseReason;
- (BOOL)isRebuildingAssetResourceUploadJobConfiguration;
- (void)writeDisableICloudPhotosMarker;
- (void)setImageWriter:(id)a0 isBusy:(BOOL)a1 crashRecoverySupport:(id)a2;
- (void)forceSoftResetSync;
- (void)_writeDict:(id)a0 withFilename:(id)a1;
- (void)updateICloudPhotosMarkerForEnable:(BOOL)a0;
- (BOOL)isForceSoftResetSync;
- (void)setWipeCPLOnOpen;
- (BOOL)isDisableICloudPhotos;
- (void)writeEnableICloudPhotosMarker;

@end
