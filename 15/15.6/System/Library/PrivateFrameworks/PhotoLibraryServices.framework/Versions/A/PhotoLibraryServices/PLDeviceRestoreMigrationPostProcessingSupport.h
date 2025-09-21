@class PLModelMigrator, PLPhotoLibraryPathManager;

@interface PLDeviceRestoreMigrationPostProcessingSupport : NSObject {
    char _tokenIsKnownToBeMissing;
    PLModelMigrator *_modelMigrator;
    PLPhotoLibraryPathManager *_pathManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _tokenLock;
}

+ (id)_readTokenAtPath:(id)a0 allowNotExists:(char)a1 error:(id *)a2;
+ (char)_writeTokenToPath:(id)a0 withInfo:(id)a1 allowOverwrite:(char)a2 error:(id *)a3;
+ (char)createForegroundRestoreFromCloudBackupCompleteTokenWithPathManager:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (char)foregroundRestoreFromCloudBackupCompleteTokenExists;
- (id)initWithModelMigrator:(id)a0;
- (char)isBackgroundRestorePostProcessingInProgressTokenValid;
- (char)isModelMigrationRestorePostProcessingComplete;
- (char)needsToPrepareForBackgroundRestore;
- (char)writeBackgroundRestorePostProcessingCompleteAndArchiveTokens;
- (char)writeBackgroundRestorePostProcessingInProgressToken;
- (char)writeModelMigrationRestorePostProcessingCompleteToken;

@end
