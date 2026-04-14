@interface _ANEDeviceInfo : NSObject

+ (id)productName;
+ (id)buildVersion;
+ (BOOL)isInternalBuild;
+ (BOOL)hasANE;
+ (unsigned int)numANECores;
+ (id)aneSubType;
+ (id)bootArgs;
+ (id)aneSubTypeProductVariant;
+ (id)aneSubTypeVariant;
+ (unsigned int)numANEs;
+ (long long)aneBoardType;
+ (BOOL)isExcessivePowerDrainWhenIdle;
+ (BOOL)precompiledModelChecksDisabled;

@end
