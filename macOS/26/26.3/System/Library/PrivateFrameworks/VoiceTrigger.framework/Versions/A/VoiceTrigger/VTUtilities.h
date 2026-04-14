@interface VTUtilities : NSObject

+ (BOOL)isInternalInstall;
+ (BOOL)isNano;
+ (id)deviceProductType;
+ (BOOL)isTorpedo;
+ (unsigned long long)deviceCategoryForDeviceProductType:(id)a0;
+ (double)_round:(double)a0 withPlaces:(int)a1;
+ (BOOL)supportPremiumAssets;
+ (BOOL)isExclaveHardware;
+ (unsigned long long)horsemanDeviceType;
+ (BOOL)isNonUI;
+ (id)deviceSoftwareVersion;
+ (id)deviceProductVersion;
+ (BOOL)supportBargeIn;
+ (BOOL)supportTTS;
+ (void)forceReload;
+ (double)systemUpTime;
+ (BOOL)VTIsHorseman;
+ (BOOL)isIOS;
+ (BOOL)supportExternalPhraseSpotter;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)a0;
+ (id)sanitizeEventInfoForLogging:(id)a0;
+ (double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)a0;
+ (BOOL)supportRemoteDarwinVoiceTrigger;
+ (id)getAssetHashFromConfigPath:(id)a0;
+ (BOOL)isAlwaysOn;

@end
