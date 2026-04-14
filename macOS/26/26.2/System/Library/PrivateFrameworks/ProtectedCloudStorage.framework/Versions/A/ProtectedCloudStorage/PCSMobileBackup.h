@interface PCSMobileBackup : NSObject

+ (id)defaultMobileBackup;

- (BOOL)isBackupEnabled;
- (id)init;

@end
