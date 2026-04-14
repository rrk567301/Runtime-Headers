@interface _ANEDeviceInfo : NSObject

+ (BOOL)isInternalBuild;
+ (id)productName;
+ (unsigned int)numANEs;
+ (id)bootArgs;
+ (id)buildVersion;
+ (long long)aneBoardType;
+ (id)aneSubTypeVariant;
+ (BOOL)isVirtualMachine;
+ (id)aneSubType;
+ (BOOL)precompiledModelChecksDisabled;
+ (BOOL)hasANE;
+ (BOOL)isBoolBootArgSetTrue:(id)a0;
+ (id)aneArchitectureType;
+ (id)aneSubTypeProductVariant;
+ (unsigned int)numANECores;
+ (BOOL)isExcessivePowerDrainWhenIdle;
+ (BOOL)isBootArgPresent:(id)a0;

@end
