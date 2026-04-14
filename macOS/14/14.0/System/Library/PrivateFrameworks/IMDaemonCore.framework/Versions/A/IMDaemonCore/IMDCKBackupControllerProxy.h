@interface IMDCKBackupControllerProxy : NSObject <BackupControllerProviding>

+ (id)sharedInstance;

- (void)setFirstSyncDateToNow;
- (void)toggleiCloudBackupsIfNeeded:(id /* block */)a0;

@end
