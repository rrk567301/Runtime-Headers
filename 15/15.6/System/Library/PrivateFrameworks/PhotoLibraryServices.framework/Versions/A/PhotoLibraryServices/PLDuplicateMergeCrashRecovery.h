@class PLPhotoLibraryPathManager, PLPhotoLibrary;

@interface PLDuplicateMergeCrashRecovery : NSObject {
    PLPhotoLibrary *_library;
    PLPhotoLibraryPathManager *_pathManager;
}

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)initWithLibraryServicesManager:(id)a0;
- (long long)_requestRecoveryActionForAsset:(id)a0;
- (id)_crashRecoveryMarkerFileURL;
- (void)_performCrashRecoveryIfNeededWithUUIDs:(id)a0;
- (id)_readCrashRecoveryUUIDContainerMarkerFile;
- (id)_readCrashRecoveryUUIDListMarkerFile;
- (void)_recoveryMasterRecordCleanupForAsset:(id)a0;
- (void)_recoveryMasterResourceRecordCleanupForAsset:(id)a0;
- (void)performCrashRecoveryIfNeeded;
- (char)removeCrashRecoveryMarkerFileWithError:(id *)a0;
- (char)writeCrashRecoveryMarkerFileForTargetAssetUUID:(id)a0 error:(id *)a1;

@end
