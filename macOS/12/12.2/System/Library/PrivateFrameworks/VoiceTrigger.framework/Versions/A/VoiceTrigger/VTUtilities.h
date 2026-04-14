@interface VTUtilities : NSObject

+ (BOOL)isInternalInstall;
+ (BOOL)isAlwaysOn;
+ (id)deviceProductType;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)a0;
+ (id)sanitizeEventInfoForLogging:(id)a0;
+ (BOOL)supportPremiumAssets;
+ (double)systemUpTime;
+ (id)deviceProductVersion;
+ (void)forceReload;
+ (unsigned long long)deviceCategoryForDeviceProductType:(id)a0;
+ (id)deviceSoftwareVersion;
+ (BOOL)VTIsHorseman;
+ (BOOL)isIOS;
+ (BOOL)isNano;
+ (BOOL)isTorpedo;
+ (double)_round:(double)a0 withPlaces:(int)a1;
+ (BOOL)isNonUI;
+ (BOOL)supportTTS;
+ (BOOL)supportExternalPhraseSpotter;
+ (BOOL)supportBargeIn;
+ (id)getAssetHashFromConfigPath:(id)a0;
+ (double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)a0;

@end
