@interface TULogging : NSObject

+ (void)disablePhoneLogging;
+ (void)enablePhoneLogging;
+ (void)registerForShouldLogChangedNotification;
+ (char)sendDirectoryToCrashReporter:(id)a0 error:(id *)a1;
+ (void)unregisterForShouldLogChangedNotification;

@end
