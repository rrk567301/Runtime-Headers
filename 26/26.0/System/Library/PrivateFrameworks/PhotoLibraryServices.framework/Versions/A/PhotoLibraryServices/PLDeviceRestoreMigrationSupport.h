@class PLLibraryServicesManager;

@interface PLDeviceRestoreMigrationSupport : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    BOOL _didWaitForPrerequisites;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _prerequisitesCompleteBlockLock;
}

@property (copy, nonatomic) id /* block */ prerequisitesCompleteBlock;
@property (nonatomic, getter=hasDataMigratorPluginRequestedLibraryMigration) BOOL dataMigratorPluginHasRequestedLibraryMigration;

+ (BOOL)isDataMigrationInProgress;

- (id)restoreTypeDescription;
- (id)_dataMigrationInfo;
- (void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)a0 populateAlbumMappings:(id)a1;
- (void)_prepareDatabaseForOTAAssetsPhase;
- (BOOL)isRestoreFromBackupSourceCloud;
- (BOOL)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)a0;
- (BOOL)isOTARestoreInProgress;
- (BOOL)isRestoreFromBackupSourceMegaBackup;
- (void)deletePhotoStreamData;
- (void)_setAlbumPendingItemCountsWithContext:(id)a0 shouldSave:(BOOL)a1;
- (id)_newShortLivedLibrarySupportingLibraryOpenWithName:(const char *)a0;
- (BOOL)isRestoreFromBackupSourceiTunes;
- (id)initWithLibraryServicesManager:(id)a0;
- (BOOL)isRestoreFromBackupSourceDeviceToDevice;
- (BOOL)isUpgradeWithoutRestore;
- (void)_linkAsideAlbumMetadata;
- (BOOL)isRestoreFromBackup;
- (BOOL)isEraseWithoutRestore;
- (BOOL)isRestoreFromBackupSourceDifferentDevice;
- (BOOL)hasCompletedDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)a0;
- (void).cxx_destruct;
- (void)waitForDataMigratorPrerequisitesForTrackingRestoreFromCloud;

@end
