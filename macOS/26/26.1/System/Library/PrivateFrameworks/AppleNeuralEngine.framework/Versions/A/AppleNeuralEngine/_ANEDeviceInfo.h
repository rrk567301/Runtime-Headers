@interface _ANEDeviceInfo : NSObject

+ (id)bootArgs;
+ (id)productName;
+ (BOOL)hasANE;
+ (BOOL)isInternalBuild;
+ (id)aneSubTypeVariant;
+ (long long)aneBoardType;
+ (id)buildVersion;
+ (id)aneSubType;
+ (BOOL)isVirtualMachine;
+ (BOOL)isExcessivePowerDrainWhenIdle;
+ (BOOL)isBootArgPresent:(id)a0;
+ (unsigned int)numANECores;
+ (id)aneSubTypeProductVariant;
+ (id)aneArchitectureType;
+ (BOOL)precompiledModelChecksDisabled;
+ (unsigned int)numANEs;
+ (BOOL)isBoolBootArgSetTrue:(id)a0;

@end
