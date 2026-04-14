@interface VTUtilities : NSObject

+ (BOOL)supportBargeIn;
+ (double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)a0;
+ (BOOL)VTIsHorseman;
+ (id)deviceSoftwareVersion;
+ (id)getAssetHashFromConfigPath:(id)a0;
+ (BOOL)supportExternalPhraseSpotter;
+ (BOOL)isExclaveHardware;
+ (id)deviceProductVersion;
+ (double)systemUpTime;
+ (double)_round:(double)a0 withPlaces:(int)a1;
+ (BOOL)isInternalInstall;
+ (unsigned long long)horsemanDeviceType;
+ (BOOL)isNonUI;
+ (unsigned long long)deviceCategoryForDeviceProductType:(id)a0;
+ (BOOL)supportPremiumAssets;
+ (BOOL)isIOS;
+ (id)deviceProductType;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)a0;
+ (BOOL)supportTTS;
+ (BOOL)isAlwaysOn;
+ (BOOL)supportRemoteDarwinVoiceTrigger;
+ (BOOL)isTorpedo;
+ (void)forceReload;
+ (id)sanitizeEventInfoForLogging:(id)a0;
+ (BOOL)isNano;

@end
