@interface VTUtilities : NSObject

+ (id)deviceProductVersion;
+ (BOOL)supportPremiumAssets;
+ (unsigned long long)horsemanDeviceType;
+ (id)deviceProductType;
+ (double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)a0;
+ (BOOL)isExclaveHardware;
+ (double)_round:(double)a0 withPlaces:(int)a1;
+ (id)getAssetHashFromConfigPath:(id)a0;
+ (double)systemUpTime;
+ (BOOL)isNonUI;
+ (BOOL)isInternalInstall;
+ (BOOL)supportExternalPhraseSpotter;
+ (BOOL)isNano;
+ (BOOL)supportBargeIn;
+ (id)deviceSoftwareVersion;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)a0;
+ (id)sanitizeEventInfoForLogging:(id)a0;
+ (BOOL)isAlwaysOn;
+ (BOOL)isIOS;
+ (BOOL)VTIsHorseman;
+ (void)forceReload;
+ (unsigned long long)deviceCategoryForDeviceProductType:(id)a0;
+ (BOOL)supportRemoteDarwinVoiceTrigger;
+ (BOOL)isTorpedo;
+ (BOOL)supportTTS;

@end
