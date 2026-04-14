@interface _ANEDeviceInfo : NSObject

+ (id)productName;
+ (BOOL)isInternalBuild;
+ (id)buildVersion;
+ (id)bootArgs;
+ (id)aneSubType;
+ (BOOL)hasANE;
+ (id)aneSubTypeVariant;
+ (long long)aneBoardType;
+ (BOOL)isExcessivePowerDrainWhenIdle;
+ (id)aneSubTypeProductVariant;
+ (BOOL)precompiledModelChecksDisabled;

@end
