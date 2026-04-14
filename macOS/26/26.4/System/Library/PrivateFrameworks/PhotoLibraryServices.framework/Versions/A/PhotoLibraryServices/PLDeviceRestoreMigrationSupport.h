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

- (BOOL)hasCompletedDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (BOOL)isOTARestoreInProgressWithStatus:(id *)a0;
- (void)waitForDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (void)_updateIsOTARestoreFinished:(BOOL)a0 statusMessage:(id)a1;
- (void)_prepareDatabaseForOTAAssetsPhase;
- (BOOL)isUpgradeWithoutRestore;
- (BOOL)isEraseWithoutRestore;
- (BOOL)isRestoreFromBackupSourceCloud;
- (BOOL)_isOTARestoreFinishedWithStatus:(id *)a0;
- (void)deletePhotoStreamData;
- (void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)a0;
- (BOOL)isRestoreFromBackupSourceDifferentDevice;
- (void)_linkAsideAlbumMetadata;
- (void).cxx_destruct;
- (id)_dataMigrationInfo;
- (BOOL)isRestoreFromBackupSourceDeviceToDevice;
- (void)_checkIsOTARestoreInProgress;
- (id)_newShortLivedLibrarySupportingLibraryOpenWithName:(const char *)a0;
- (id)initWithLibraryServicesManager:(id)a0;
- (BOOL)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)a0;
- (void)_setAlbumPendingItemCountsWithContext:(id)a0 shouldSave:(BOOL)a1;
- (BOOL)isRestoreFromBackupSourceMegaBackup;
- (BOOL)isRestoreFromBackup;
- (void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)a0 populateAlbumMappings:(id)a1;
- (id)restoreTypeDescription;
- (BOOL)isRestoreFromBackupSourceiTunes;

@end
