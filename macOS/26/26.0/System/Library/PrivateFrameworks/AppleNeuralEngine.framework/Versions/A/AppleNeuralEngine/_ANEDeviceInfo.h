@interface _ANEDeviceInfo : NSObject

+ (BOOL)isInternalBuild;
+ (id)buildVersion;
+ (id)bootArgs;
+ (id)productName;
+ (BOOL)hasANE;
+ (unsigned int)numANECores;
+ (id)aneSubTypeProductVariant;
+ (unsigned int)numANEs;
+ (BOOL)isBootArgPresent:(id)a0;
+ (BOOL)precompiledModelChecksDisabled;
+ (id)aneSubType;
+ (id)aneArchitectureType;
+ (BOOL)isVirtualMachine;
+ (id)aneSubTypeVariant;
+ (BOOL)isBoolBootArgSetTrue:(id)a0;
+ (long long)aneBoardType;
+ (BOOL)isExcessivePowerDrainWhenIdle;

@end
