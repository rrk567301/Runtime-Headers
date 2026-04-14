@interface _ANEDeviceInfo : NSObject

+ (id)bootArgs;
+ (BOOL)hasANE;
+ (id)buildVersion;
+ (id)productName;
+ (id)aneArchitectureType;
+ (id)aneSubType;
+ (BOOL)isExcessivePowerDrainWhenIdle;
+ (id)aneSubTypeProductVariant;
+ (id)aneSubTypeVariant;
+ (BOOL)precompiledModelChecksDisabled;
+ (BOOL)isVirtualMachine;
+ (unsigned int)numANEs;
+ (BOOL)isInternalBuild;
+ (BOOL)isBoolBootArgSetTrue:(id)a0;
+ (unsigned int)numANECores;
+ (BOOL)isBootArgPresent:(id)a0;
+ (long long)aneBoardType;

@end
