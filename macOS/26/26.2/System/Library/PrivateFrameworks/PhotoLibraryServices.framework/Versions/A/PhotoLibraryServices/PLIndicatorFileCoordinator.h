@class NSString, PLPhotoLibraryPathManager;

@interface PLIndicatorFileCoordinator : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
    int _activityIndicatorFid;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activityIndicatorLock;
    NSString *_resourceHoldingDirectoryPath;
}

+ (void)setSystemLibraryAvailableIndicatorState:(BOOL)a0;
+ (BOOL)systemLibraryAvailableIndicatorState;

- (BOOL)clearPauseMarkerForReason:(short)a0;
- (id)initWithPathManager:(id)a0;
- (BOOL)isForceSoftResetSync;
- (void)setCreatingAssetIsBusy:(BOOL)a0 uuid:(id)a1;
- (BOOL)isStreamsLibraryUpdatingExpired;
- (void)logCloudServiceEnableEvent:(BOOL)a0 serviceName:(id)a1 reason:(id)a2;
- (BOOL)isUserPause;
- (id)_rebuildingAssetResourceUploadJobConfigurationIndicatorFilePath;
- (void)setIsRebuildingSocialGroups:(BOOL)a0;
- (void)forceSoftResetSync;
- (BOOL)_canSetPauseMarkerWithUnpauseTime:(id)a0 onPauseData:(id)a1;
- (id)_rebuildingPersonsIndicatorFilePath;
- (BOOL)isRebuildingAssetResourceUploadJobConfiguration;
- (id)_rebuildingSocialGroupsIndicatorFilePath;
- (void)deleteCPLDownloadFinishedMarkerFilePath;
- (void)getDownloadPhotoCount:(unsigned long long *)a0 downloadVideoCount:(unsigned long long *)a1;
- (void)setIsRebuildingPersons:(BOOL)a0;
- (void)setImageWriter:(id)a0 isBusy:(BOOL)a1 crashRecoverySupport:(id)a2;
- (short)currentPauseReason;
- (void)setIsRebuildingAssetResourceUploadJobConfiguration:(BOOL)a0;
- (void)setDownloadCountsForImages:(unsigned long long)a0 videos:(unsigned long long)a1;
- (id)_readPListWithFilename:(id)a0;
- (void).cxx_destruct;
- (BOOL)isDisableICloudPhotos;
- (BOOL)isICloudPhotosPaused;
- (BOOL)isRebuildingSocialGroups;
- (id)_pauseDataOnPath:(id)a0;
- (BOOL)isWipeCPLOnOpen;
- (void)updateICloudPhotosMarkerForEnable:(BOOL)a0;
- (void)_setActivityIndicatorWithPath:(id)a0 flag:(BOOL)a1 uuid:(id)a2 crashRecovery:(id /* block */)a3;
- (void)setStreamsLibraryUpdatingExpired:(BOOL)a0;
- (void)setWipeCPLOnOpen;
- (void)_createPauseMarkerForReason:(short)a0 withUnpauseTime:(id)a1 withPath:(id)a2;
- (void)createPauseMarkerWithUnpauseTime:(id)a0 reason:(short)a1;
- (BOOL)hasItemToDownload;
- (BOOL)isRebuildingPersons;
- (id)initWithResourceHoldingDirectoryPath:(id)a0;
- (BOOL)isEnableICloudPhotos;
- (void)_writeDict:(id)a0 withFilename:(id)a1;
- (void)clearWipeCPLOnOpen;
- (void)writeEnableICloudPhotosMarker;
- (id)unpauseTime;
- (void)writeDisableICloudPhotosMarker;
- (BOOL)needsRecoveryAfterCrashOptionallyRemoveAllIndicatorFiles:(BOOL)a0;
- (void)dealloc;

@end
