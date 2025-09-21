@interface CALNNotificationUtilities : NSObject

+ (id)_pathForSentinelFile;
+ (void)createSentinelFileIfNeeded;
+ (char)shouldBehaveAsRestart;

@end
