@interface _ANEDeviceInfo : NSObject

+ (id)buildVersion;
+ (id)bootArgs;
+ (id)productName;
+ (long long)aneBoardType;
+ (id)aneArchitectureType;
+ (BOOL)isBootArgPresent:(id)a0;
+ (BOOL)isInternalBuild;
+ (BOOL)precompiledModelChecksDisabled;
+ (id)aneSubTypeProductVariant;
+ (id)aneSubTypeVariant;
+ (id)aneSubType;
+ (BOOL)hasANE;
+ (BOOL)isVirtualMachine;
+ (id)aneSubTypeAndVariant;
+ (unsigned int)numANEs;
+ (unsigned int)numANECores;
+ (BOOL)isBoolBootArgSetTrue:(id)a0;
+ (BOOL)isExcessivePowerDrainWhenIdle;

@end
