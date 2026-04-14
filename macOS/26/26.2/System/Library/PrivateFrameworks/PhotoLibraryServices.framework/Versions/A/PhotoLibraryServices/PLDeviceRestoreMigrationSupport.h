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

- (id)initWithLibraryServicesManager:(id)a0;
- (void)_setAlbumPendingItemCountsWithContext:(id)a0 shouldSave:(BOOL)a1;
- (void)_updateIsOTARestoreFinished:(BOOL)a0 statusMessage:(id)a1;
- (void)waitForDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (BOOL)_isOTARestoreFinishedWithStatus:(id *)a0;
- (BOOL)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)a0;
- (id)restoreTypeDescription;
- (void)_prepareDatabaseForOTAAssetsPhase;
- (BOOL)isEraseWithoutRestore;
- (BOOL)isRestoreFromBackupSourceDifferentDevice;
- (BOOL)isRestoreFromBackupSourceCloud;
- (id)_newShortLivedLibrarySupportingLibraryOpenWithName:(const char *)a0;
- (void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)a0;
- (void).cxx_destruct;
- (void)deletePhotoStreamData;
- (BOOL)isRestoreFromBackupSourceMegaBackup;
- (id)_dataMigrationInfo;
- (void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)a0 populateAlbumMappings:(id)a1;
- (BOOL)hasCompletedDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (void)_checkIsOTARestoreInProgress;
- (BOOL)isRestoreFromBackupSourceiTunes;
- (BOOL)isRestoreFromBackupSourceDeviceToDevice;
- (BOOL)isUpgradeWithoutRestore;
- (BOOL)isOTARestoreInProgressWithStatus:(id *)a0;
- (BOOL)isRestoreFromBackup;
- (void)_linkAsideAlbumMetadata;

@end
