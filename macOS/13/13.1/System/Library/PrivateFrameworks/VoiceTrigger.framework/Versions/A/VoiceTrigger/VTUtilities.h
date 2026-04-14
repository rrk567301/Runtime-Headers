@interface VTUtilities : NSObject

+ (BOOL)isInternalInstall;
+ (BOOL)isAlwaysOn;
+ (id)deviceProductType;
+ (double)systemUpTime;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)a0;
+ (id)sanitizeEventInfoForLogging:(id)a0;
+ (BOOL)supportPremiumAssets;
+ (BOOL)supportRemoteDarwinVoiceTrigger;
+ (id)deviceProductVersion;
+ (void)forceReload;
+ (double)_round:(double)a0 withPlaces:(int)a1;
+ (BOOL)isNonUI;
+ (BOOL)isIOS;
+ (BOOL)isNano;
+ (BOOL)VTIsHorseman;
+ (BOOL)supportTTS;
+ (BOOL)supportExternalPhraseSpotter;
+ (BOOL)supportBargeIn;
+ (id)deviceSoftwareVersion;
+ (unsigned long long)deviceCategoryForDeviceProductType:(id)a0;
+ (id)getAssetHashFromConfigPath:(id)a0;
+ (double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)a0;
+ (BOOL)isTorpedo;

@end
