@interface _ANEDeviceInfo : NSObject

+ (BOOL)isInternalBuild;
+ (id)buildVersion;
+ (BOOL)hasANE;
+ (id)aneSubType;
+ (id)bootArgs;
+ (long long)aneBoardType;
+ (BOOL)isExcessivePowerDrainWhenIdle;
+ (id)aneSubTypeVariant;
+ (BOOL)precompiledModelChecksDisabled;

@end
