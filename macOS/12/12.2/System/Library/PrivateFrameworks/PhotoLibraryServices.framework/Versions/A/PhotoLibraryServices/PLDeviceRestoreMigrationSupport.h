@class PLLibraryServicesManager;

@interface PLDeviceRestoreMigrationSupport : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    BOOL _didWaitForPrerequisites;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _prerequisitesCompleteBlockLock;
}

@property (copy, nonatomic) id /* block */ prerequisitesCompleteBlock;
@property (nonatomic, getter=hasDataMigratorPluginRequestedLibraryMigration) BOOL dataMigratorPluginHasRequestedLibraryMigration;

+ (BOOL)isDataMigrationInProgress;

- (void).cxx_destruct;
- (BOOL)isRestoreFromBackup;
- (BOOL)isRestoreFromBackupSourceMegaBackup;
- (void)deletePhotoStreamDataForStreamID:(id)a0;
- (id)initWithLibraryServicesManager:(id)a0;
- (BOOL)isRestoreFromBackupSourceDeviceToDevice;
- (BOOL)isOTARestoreInProgress;
- (BOOL)isRestoreFromBackupSourceCloud;
- (id)restoreTypeDescription;
- (id)_newShortLivedLibrarySupportingLibraryOpenWithName:(const char *)a0;
- (BOOL)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)a0;
- (void)_prepareDatabaseForOTAAssetsPhase;
- (void)_setAlbumPendingItemCountsWithContext:(id)a0 shouldSave:(BOOL)a1;
- (void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)a0;
- (void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)a0 populateAlbumMappings:(id)a1;
- (void)_linkAsideAlbumMetadata;
- (id)_dataMigrationInfo;
- (BOOL)isRestoreFromBackupSourceiTunes;
- (BOOL)isRestoreFromBackupSourceDifferentDevice;
- (BOOL)hasCompletedDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (void)waitForDataMigratorPrerequisitesForTrackingRestoreFromCloud;

@end
