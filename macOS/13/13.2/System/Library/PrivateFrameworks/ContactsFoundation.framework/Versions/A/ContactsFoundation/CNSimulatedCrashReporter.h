@interface CNSimulatedCrashReporter : NSObject

+ (void)simulateCrashWithMessage:(id)a0;
+ (void)simulateCrashWithCode:(long long)a0 description:(id)a1;
+ (id)os_log;

@end
