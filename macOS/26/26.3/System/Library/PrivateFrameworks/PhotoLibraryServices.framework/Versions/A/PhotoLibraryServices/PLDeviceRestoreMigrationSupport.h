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
- (void)_setAlbumPendingItemCountsWithContext:(id)a0 shouldSave:(BOOL)a1;
- (void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)a0 populateAlbumMappings:(id)a1;
- (BOOL)isRestoreFromBackupSourceDeviceToDevice;
- (BOOL)isOTARestoreInProgressWithStatus:(id *)a0;
- (BOOL)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)a0;
- (id)restoreTypeDescription;
- (void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)a0;
- (id)_newShortLivedLibrarySupportingLibraryOpenWithName:(const char *)a0;
- (BOOL)_isOTARestoreFinishedWithStatus:(id *)a0;
- (BOOL)isEraseWithoutRestore;
- (BOOL)isUpgradeWithoutRestore;
- (void)_linkAsideAlbumMetadata;
- (BOOL)isRestoreFromBackup;
- (void)_checkIsOTARestoreInProgress;
- (void).cxx_destruct;
- (id)initWithLibraryServicesManager:(id)a0;
- (void)_updateIsOTARestoreFinished:(BOOL)a0 statusMessage:(id)a1;
- (BOOL)isRestoreFromBackupSourceCloud;
- (BOOL)isRestoreFromBackupSourceMegaBackup;
- (void)_prepareDatabaseForOTAAssetsPhase;
- (void)waitForDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (BOOL)isRestoreFromBackupSourceiTunes;
- (BOOL)isRestoreFromBackupSourceDifferentDevice;
- (id)_dataMigrationInfo;
- (void)deletePhotoStreamData;

@end
