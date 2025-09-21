@interface _DPDeviceInfo : NSObject

+ (char)isInternalBuild;
+ (id)osVersion;
+ (char)isRunningUnitTests;
+ (char)isDataCollectionEnabled;
+ (char)isDisabledByTaskingForCrashCopier;
+ (char)isDisabledByTaskingForDedisco;
+ (char)isDisabledByTaskingForTransport:(unsigned long long)a0;
+ (char)isRunningAsLaunchDaemon;

@end
