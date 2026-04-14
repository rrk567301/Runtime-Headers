@interface _DPDeviceInfo : NSObject

+ (id)osVersion;
+ (BOOL)isInternalBuild;
+ (BOOL)isDisabledByTaskingForDedisco;
+ (BOOL)isDisabledByTaskingForTransport:(unsigned long long)a0;
+ (BOOL)isDisabledByTaskingForCrashCopier;
+ (BOOL)isRunningAsLaunchDaemon;
+ (BOOL)isRunningUnitTests;
+ (BOOL)isDataCollectionEnabled;

@end
