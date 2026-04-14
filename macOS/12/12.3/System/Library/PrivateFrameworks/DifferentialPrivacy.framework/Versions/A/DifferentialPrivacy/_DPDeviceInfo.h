@interface _DPDeviceInfo : NSObject

+ (BOOL)isInternalBuild;
+ (id)osVersion;
+ (BOOL)isDataCollectionEnabled;
+ (BOOL)isDisabledByTaskingForTransport:(unsigned long long)a0;
+ (BOOL)isDisabledByTaskingForCrashCopier;
+ (BOOL)isDisabledByTaskingForPrio;
+ (BOOL)isDisabledByTaskingForDedisco;

@end
