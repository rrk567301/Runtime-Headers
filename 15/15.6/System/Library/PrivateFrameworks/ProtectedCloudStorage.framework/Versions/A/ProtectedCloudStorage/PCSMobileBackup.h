@interface PCSMobileBackup : NSObject

+ (id)defaultMobileBackup;

- (id)init;
- (char)isBackupEnabled;

@end
