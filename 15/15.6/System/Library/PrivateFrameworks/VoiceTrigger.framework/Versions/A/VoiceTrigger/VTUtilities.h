@interface VTUtilities : NSObject

+ (char)isInternalInstall;
+ (char)isAlwaysOn;
+ (char)supportRemoteDarwinVoiceTrigger;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)a0;
+ (id)deviceProductType;
+ (id)deviceProductVersion;
+ (unsigned long long)horsemanDeviceType;
+ (char)isExclaveHardware;
+ (id)sanitizeEventInfoForLogging:(id)a0;
+ (char)supportPremiumAssets;
+ (double)systemUpTime;
+ (void)forceReload;
+ (char)VTIsHorseman;
+ (char)isNonUI;
+ (double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)a0;
+ (double)_round:(double)a0 withPlaces:(int)a1;
+ (unsigned long long)deviceCategoryForDeviceProductType:(id)a0;
+ (id)deviceSoftwareVersion;
+ (id)getAssetHashFromConfigPath:(id)a0;
+ (char)isIOS;
+ (char)isNano;
+ (char)isTorpedo;
+ (char)supportBargeIn;
+ (char)supportExternalPhraseSpotter;
+ (char)supportTTS;

@end
