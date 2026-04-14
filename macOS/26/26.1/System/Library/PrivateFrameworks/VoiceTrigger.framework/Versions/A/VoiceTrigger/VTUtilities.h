@interface VTUtilities : NSObject

+ (void)forceReload;
+ (BOOL)isAlwaysOn;
+ (BOOL)supportPremiumAssets;
+ (BOOL)isExclaveHardware;
+ (double)_round:(double)a0 withPlaces:(int)a1;
+ (double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)a0;
+ (unsigned long long)horsemanDeviceType;
+ (BOOL)isInternalInstall;
+ (BOOL)supportExternalPhraseSpotter;
+ (id)deviceProductVersion;
+ (id)deviceSoftwareVersion;
+ (BOOL)VTIsHorseman;
+ (id)getAssetHashFromConfigPath:(id)a0;
+ (double)systemUpTime;
+ (BOOL)supportTTS;
+ (id)sanitizeEventInfoForLogging:(id)a0;
+ (BOOL)isNonUI;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)a0;
+ (BOOL)isIOS;
+ (BOOL)supportBargeIn;
+ (unsigned long long)deviceCategoryForDeviceProductType:(id)a0;
+ (BOOL)supportRemoteDarwinVoiceTrigger;
+ (BOOL)isTorpedo;
+ (BOOL)isNano;
+ (id)deviceProductType;

@end
