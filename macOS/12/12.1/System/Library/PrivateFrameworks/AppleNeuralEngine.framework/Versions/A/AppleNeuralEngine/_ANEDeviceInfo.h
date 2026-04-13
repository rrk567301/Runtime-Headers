@interface _ANEDeviceInfo : NSObject

+ (BOOL)isInternalBuild;
+ (id)buildVersion;
+ (BOOL)hasANE;
+ (id)aneSubType;
+ (id)bootArgs;
+ (BOOL)precompiledModelChecksDisabled;

@end
