@interface NoOpBackupController : NSObject <BackupControllerProviding>

- (void)setFirstSyncDateToNow;
- (void)toggleiCloudBackupsIfNeeded:(id /* block */)a0;

@end
