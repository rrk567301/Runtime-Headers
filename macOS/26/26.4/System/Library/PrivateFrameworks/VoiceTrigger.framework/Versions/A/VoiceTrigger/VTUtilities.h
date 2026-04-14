@interface VTUtilities : NSObject

+ (BOOL)isAlwaysOn;
+ (BOOL)supportTTS;
+ (BOOL)isInternalInstall;
+ (BOOL)isTorpedo;
+ (BOOL)isNonUI;
+ (BOOL)isIOS;
+ (id)deviceSoftwareVersion;
+ (BOOL)supportBargeIn;
+ (BOOL)isNano;
+ (unsigned long long)horsemanDeviceType;
+ (BOOL)supportRemoteDarwinVoiceTrigger;
+ (void)forceReload;
+ (unsigned long long)deviceCategoryForDeviceProductType:(id)a0;
+ (double)_round:(double)a0 withPlaces:(int)a1;
+ (id)getAssetHashFromConfigPath:(id)a0;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)a0;
+ (BOOL)VTIsHorseman;
+ (id)deviceProductVersion;
+ (BOOL)supportExternalPhraseSpotter;
+ (BOOL)supportPremiumAssets;
+ (id)deviceProductType;
+ (id)sanitizeEventInfoForLogging:(id)a0;
+ (BOOL)isExclaveHardware;
+ (double)systemUpTime;
+ (double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)a0;

@end
