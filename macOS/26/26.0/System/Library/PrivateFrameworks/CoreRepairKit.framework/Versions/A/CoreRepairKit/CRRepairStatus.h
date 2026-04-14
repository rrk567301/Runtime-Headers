@interface CRRepairStatus : NSObject

+ (BOOL)isDeviceStagedSealed;
+ (id)isServicePartWithError:(id *)a0;
+ (BOOL)isVeridianFWUpdateRequired;
+ (BOOL)isVeridianFWUpdateRequiredLite;
+ (id)_wasRepairedWithSysCfg:(id)a0;
+ (id)getVeridianFWVersionInfo;
+ (BOOL)isCoverGlassRepaired;
+ (BOOL)isSpeakerRepaired;
+ (BOOL)isVolumeButtonRepaired;

@end
