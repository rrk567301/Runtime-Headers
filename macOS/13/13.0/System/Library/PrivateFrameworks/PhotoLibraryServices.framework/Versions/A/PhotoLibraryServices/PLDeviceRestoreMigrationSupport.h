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
- (id)initWithLibraryServicesManager:(id)a0;
- (BOOL)isRestoreFromBackup;
- (void)deletePhotoStreamDataForStreamID:(id)a0;
- (id)_newShortLivedLibrarySupportingLibraryOpenWithName:(const char *)a0;
- (BOOL)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)a0;
- (void)_prepareDatabaseForOTAAssetsPhase;
- (void)_setAlbumPendingItemCountsWithContext:(id)a0 shouldSave:(BOOL)a1;
- (void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)a0;
- (void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)a0 populateAlbumMappings:(id)a1;
- (void)_linkAsideAlbumMetadata;
- (id)_dataMigrationInfo;
- (BOOL)isOTARestoreInProgress;
- (BOOL)isRestoreFromBackupSourceCloud;
- (BOOL)isRestoreFromBackupSourceMegaBackup;
- (BOOL)isRestoreFromBackupSourceiTunes;
- (BOOL)isRestoreFromBackupSourceDeviceToDevice;
- (BOOL)isRestoreFromBackupSourceDifferentDevice;
- (id)restoreTypeDescription;
- (BOOL)hasCompletedDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (void)waitForDataMigratorPrerequisitesForTrackingRestoreFromCloud;

@end
