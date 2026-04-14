@interface CNSimulatedCrashReporter : NSObject

+ (void)simulateCrashWithCode:(long long)a0 description:(id)a1;
+ (id)os_log;
+ (void)simulateCrashWithMessage:(id)a0;

@end
