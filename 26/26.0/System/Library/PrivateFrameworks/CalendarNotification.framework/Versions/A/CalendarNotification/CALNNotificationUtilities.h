@interface CALNNotificationUtilities : NSObject

+ (BOOL)shouldBehaveAsRestart;
+ (void)createSentinelFileIfNeeded;
+ (id)_pathForSentinelFile;

@end
