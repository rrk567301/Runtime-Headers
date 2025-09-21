@class PLLibraryServicesManager;

@interface PLDeviceRestoreMigrationSupport : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    char _didWaitForPrerequisites;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _prerequisitesCompleteBlockLock;
}

@property (copy, nonatomic) id /* block */ prerequisitesCompleteBlock;
@property (nonatomic, getter=hasDataMigratorPluginRequestedLibraryMigration) char dataMigratorPluginHasRequestedLibraryMigration;

+ (char)isDataMigrationInProgress;

- (void).cxx_destruct;
- (id)initWithLibraryServicesManager:(id)a0;
- (char)isRestoreFromBackup;
- (char)isRestoreFromBackupSourceiTunes;
- (void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)a0;
- (id)_dataMigrationInfo;
- (void)_linkAsideAlbumMetadata;
- (id)_newShortLivedLibrarySupportingLibraryOpenWithName:(const char *)a0;
- (void)_prepareDatabaseForOTAAssetsPhase;
- (void)_setAlbumPendingItemCountsWithContext:(id)a0 shouldSave:(char)a1;
- (void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)a0 populateAlbumMappings:(id)a1;
- (void)deletePhotoStreamData;
- (char)hasCompletedDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (char)isEraseWithoutRestore;
- (char)isOTARestoreInProgress;
- (char)isRestoreFromBackupSourceCloud;
- (char)isRestoreFromBackupSourceDeviceToDevice;
- (char)isRestoreFromBackupSourceDifferentDevice;
- (char)isRestoreFromBackupSourceMegaBackup;
- (char)isUpgradeWithoutRestore;
- (char)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)a0;
- (id)restoreTypeDescription;
- (void)waitForDataMigratorPrerequisitesForTrackingRestoreFromCloud;

@end
