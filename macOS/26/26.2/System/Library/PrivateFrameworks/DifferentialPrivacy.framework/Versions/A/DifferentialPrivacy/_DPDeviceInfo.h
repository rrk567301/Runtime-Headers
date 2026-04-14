@interface _DPDeviceInfo : NSObject

+ (BOOL)isInternalBuild;
+ (id)osVersion;
+ (BOOL)isDisabledByTaskingForDedisco;
+ (BOOL)isDisabledByTaskingForTransport:(unsigned long long)a0;
+ (BOOL)isDataCollectionEnabled;
+ (BOOL)isDisabledByTaskingForCrashCopier;
+ (BOOL)isRunningAsLaunchDaemon;
+ (BOOL)isRunningUnitTests;

@end
