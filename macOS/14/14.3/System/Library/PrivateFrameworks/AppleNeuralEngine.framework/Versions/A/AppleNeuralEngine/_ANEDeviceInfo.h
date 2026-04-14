@interface _ANEDeviceInfo : NSObject

+ (id)productName;
+ (id)buildVersion;
+ (BOOL)hasANE;
+ (unsigned int)numANECores;
+ (BOOL)isInternalBuild;
+ (id)aneSubType;
+ (id)bootArgs;
+ (id)aneSubTypeProductVariant;
+ (id)aneSubTypeVariant;
+ (unsigned int)numANEs;
+ (long long)aneBoardType;
+ (BOOL)isExcessivePowerDrainWhenIdle;
+ (BOOL)precompiledModelChecksDisabled;

@end
