@interface _DPDeviceInfo : NSObject

+ (id)osVersion;
+ (BOOL)isRunningAsLaunchDaemon;
+ (BOOL)isDisabledByTaskingForDedisco;
+ (BOOL)isDisabledByTaskingForCrashCopier;
+ (BOOL)isDataCollectionEnabled;
+ (BOOL)isRunningUnitTests;
+ (BOOL)isInternalBuild;
+ (BOOL)isDisabledByTaskingForTransport:(unsigned long long)a0;

@end
