@interface _ANEDeviceInfo : NSObject

+ (id)productName;
+ (id)buildVersion;
+ (char)isInternalBuild;
+ (char)hasANE;
+ (unsigned int)numANECores;
+ (id)aneSubType;
+ (id)bootArgs;
+ (char)isVirtualMachine;
+ (id)aneSubTypeProductVariant;
+ (id)aneSubTypeVariant;
+ (unsigned int)numANEs;
+ (id)aneArchitectureType;
+ (long long)aneBoardType;
+ (char)isBoolBootArgSetTrue:(id)a0;
+ (char)isExcessivePowerDrainWhenIdle;
+ (char)precompiledModelChecksDisabled;

@end
