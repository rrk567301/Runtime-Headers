@interface _DPDeviceInfo : NSObject

+ (id)osVersion;
+ (BOOL)isDisabledByTaskingForTransport:(unsigned long long)a0;
+ (BOOL)isInternalBuild;
+ (BOOL)isDisabledByTaskingForCrashCopier;
+ (BOOL)isDisabledByTaskingForDedisco;
+ (BOOL)isRunningUnitTests;
+ (BOOL)isDataCollectionEnabled;
+ (BOOL)isRunningAsLaunchDaemon;

@end
