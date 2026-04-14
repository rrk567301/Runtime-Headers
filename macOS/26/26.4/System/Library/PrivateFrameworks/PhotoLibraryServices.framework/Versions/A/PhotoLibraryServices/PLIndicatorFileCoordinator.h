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
- (void)_writeDict:(id)a0 withFilename:(id)a1;
- (void)setCreatingAssetIsBusy:(BOOL)a0 uuid:(id)a1;
- (id)_rebuildingAssetResourceUploadJobConfigurationIndicatorFilePath;
- (BOOL)isUserPause;
- (void)updateICloudPhotosMarkerForEnable:(BOOL)a0;
- (id)initWithResourceHoldingDirectoryPath:(id)a0;
- (void)setWipeCPLOnOpen;
- (void)getDownloadPhotoCount:(unsigned long long *)a0 downloadVideoCount:(unsigned long long *)a1;
- (BOOL)isStreamsLibraryUpdatingExpired;
- (BOOL)isRebuildingPersons;
- (void)logCloudServiceEnableEvent:(BOOL)a0 serviceName:(id)a1 reason:(id)a2;
- (void)setDownloadCountsForImages:(unsigned long long)a0 videos:(unsigned long long)a1;
- (BOOL)isDisableICloudPhotos;
- (void)writeDisableICloudPhotosMarker;
- (void)setStreamsLibraryUpdatingExpired:(BOOL)a0;
- (BOOL)clearPauseMarkerForReason:(short)a0;
- (void)setImageWriter:(id)a0 isBusy:(BOOL)a1 crashRecoverySupport:(id)a2;
- (void)clearWipeCPLOnOpen;
- (void)createPauseMarkerWithUnpauseTime:(id)a0 reason:(short)a1;
- (BOOL)hasItemToDownload;
- (void).cxx_destruct;
- (BOOL)_canSetPauseMarkerWithUnpauseTime:(id)a0 onPauseData:(id)a1;
- (void)setIsRebuildingSocialGroups:(BOOL)a0;
- (void)deleteCPLDownloadFinishedMarkerFilePath;
- (BOOL)isICloudPhotosPaused;
- (id)_rebuildingSocialGroupsIndicatorFilePath;
- (BOOL)isWipeCPLOnOpen;
- (id)_pauseDataOnPath:(id)a0;
- (void)_setActivityIndicatorWithPath:(id)a0 flag:(BOOL)a1 uuid:(id)a2 crashRecovery:(id /* block */)a3;
- (BOOL)isEnableICloudPhotos;
- (void)writeEnableICloudPhotosMarker;
- (BOOL)isRebuildingAssetResourceUploadJobConfiguration;
- (void)_createPauseMarkerForReason:(short)a0 withUnpauseTime:(id)a1 withPath:(id)a2;
- (BOOL)isForceSoftResetSync;
- (void)setIsRebuildingPersons:(BOOL)a0;
- (id)_rebuildingPersonsIndicatorFilePath;
- (BOOL)isRebuildingSocialGroups;
- (void)setIsRebuildingAssetResourceUploadJobConfiguration:(BOOL)a0;
- (BOOL)needsRecoveryAfterCrashOptionallyRemoveAllIndicatorFiles:(BOOL)a0;
- (id)_readPListWithFilename:(id)a0;
- (void)dealloc;
- (id)unpauseTime;
- (void)forceSoftResetSync;
- (short)currentPauseReason;

@end
