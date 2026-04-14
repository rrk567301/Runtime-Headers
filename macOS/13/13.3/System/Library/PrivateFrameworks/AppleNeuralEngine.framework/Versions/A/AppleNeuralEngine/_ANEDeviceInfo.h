@interface _ANEDeviceInfo : NSObject

+ (id)productName;
+ (BOOL)isInternalBuild;
+ (id)buildVersion;
+ (id)aneSubType;
+ (id)bootArgs;
+ (BOOL)hasANE;
+ (id)aneSubTypeProductVariant;
+ (id)aneSubTypeVariant;
+ (long long)aneBoardType;
+ (BOOL)isExcessivePowerDrainWhenIdle;
+ (BOOL)precompiledModelChecksDisabled;

@end
