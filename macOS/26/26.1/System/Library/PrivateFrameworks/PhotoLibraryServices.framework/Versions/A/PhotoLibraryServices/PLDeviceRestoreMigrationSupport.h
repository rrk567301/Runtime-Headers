@class PLLibraryServicesManager, NSString;

@interface PLDeviceRestoreMigrationSupport : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    BOOL _didWaitForPrerequisites;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _prerequisitesBlockLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _otaLock;
    BOOL _otaLock_otaRestoreFinished;
    NSString *_otaLock_otaRestoreStatusMessage;
}

@property (copy, nonatomic) id /* block */ prerequisitesBlockLock_prerequisitesCompleteBlock;
@property (nonatomic, getter=hasDataMigratorPluginRequestedLibraryMigration) BOOL dataMigratorPluginHasRequestedLibraryMigration;

+ (BOOL)isDataMigrationInProgress;

- (BOOL)isRestoreFromBackupSourceDifferentDevice;
- (id)initWithLibraryServicesManager:(id)a0;
- (void)_prepareDatabaseForOTAAssetsPhase;
- (BOOL)isRestoreFromBackupSourceCloud;
- (void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)a0;
- (void)_updateIsOTARestoreFinished:(BOOL)a0 statusMessage:(id)a1;
- (id)_newShortLivedLibrarySupportingLibraryOpenWithName:(const char *)a0;
- (id)_dataMigrationInfo;
- (BOOL)isRestoreFromBackupSourceMegaBackup;
- (void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)a0 populateAlbumMappings:(id)a1;
- (id)restoreTypeDescription;
- (BOOL)isUpgradeWithoutRestore;
- (BOOL)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)a0;
- (void)deletePhotoStreamData;
- (void)_setAlbumPendingItemCountsWithContext:(id)a0 shouldSave:(BOOL)a1;
- (BOOL)hasCompletedDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (void).cxx_destruct;
- (BOOL)_isOTARestoreFinishedWithStatus:(id *)a0;
- (void)waitForDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (BOOL)isRestoreFromBackup;
- (BOOL)isEraseWithoutRestore;
- (void)_checkIsOTARestoreInProgress;
- (BOOL)isRestoreFromBackupSourceDeviceToDevice;
- (void)_linkAsideAlbumMetadata;
- (BOOL)isOTARestoreInProgressWithStatus:(id *)a0;
- (BOOL)isRestoreFromBackupSourceiTunes;

@end
