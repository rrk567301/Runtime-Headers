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
- (void)deletePhotoStreamDataForStreamID:(id)a0;
- (BOOL)isRestoreFromBackupSourceMegaBackup;
- (id)initWithLibraryServicesManager:(id)a0;
- (BOOL)isRestoreFromBackupSourceCloud;
- (BOOL)isOTARestoreInProgress;
- (BOOL)isRestoreFromBackupSourceDeviceToDevice;
- (id)restoreTypeDescription;
- (id)_newShortLivedLibrarySupportingLibraryOpenWithName:(const char *)a0;
- (void)_linkAsideAlbumMetadata;
- (void)_prepareDatabaseForOTAAssetsPhase;
- (void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)a0;
- (void)_setAlbumPendingItemCountsWithContext:(id)a0 shouldSave:(BOOL)a1;
- (void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)a0 populateAlbumMappings:(id)a1;
- (BOOL)isRestoreFromBackupSourceDifferentDevice;
- (BOOL)isRestoreFromBackupSourceiTunes;
- (BOOL)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)a0;
- (id)_dataMigrationInfo;
- (BOOL)hasCompletedDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (void)waitForDataMigratorPrerequisitesForTrackingRestoreFromCloud;

@end
