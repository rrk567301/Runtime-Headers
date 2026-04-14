@interface _DPDeviceInfo : NSObject

+ (BOOL)isInternalBuild;
+ (id)osVersion;
+ (BOOL)isRunningUnitTests;
+ (BOOL)isDataCollectionEnabled;
+ (BOOL)isDisabledByTaskingForCrashCopier;
+ (BOOL)isDisabledByTaskingForDedisco;
+ (BOOL)isDisabledByTaskingForPrio;
+ (BOOL)isDisabledByTaskingForTransport:(unsigned long long)a0;

@end
