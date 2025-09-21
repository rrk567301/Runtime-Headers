@interface _DPDeviceInfo : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)isRunningUnitTests;
+ (BOOL)isDisabledByTaskingForTransport:(unsigned long long)a0;
+ (id)osVersion;
+ (BOOL)isDisabledByTaskingForCrashCopier;
+ (BOOL)isDisabledByTaskingForDedisco;
+ (BOOL)isDataCollectionEnabled;
+ (BOOL)isRunningAsLaunchDaemon;

@end
