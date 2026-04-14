@interface CSMobileAssetVersions : NSObject

+ (unsigned long long)getVoiceTriggerCurrentCompatibilityVersion;
+ (id)getVoiceTriggerAssetTypeString;
+ (id)getVoiceTriggerAssetTypeStringWithSupportMphAssets:(BOOL)a0 deviceIsIPad:(BOOL)a1 deviceIsWatch:(BOOL)a2 deviceIsHorseman:(BOOL)a3 deviceIsOSX:(BOOL)a4 deviceIsTV:(BOOL)a5 deviceIsIOS:(BOOL)a6;
+ (unsigned long long)getVoiceTriggerCurrentCompatibilityVersionWithSupportMphAssets:(BOOL)a0 deviceIsIPad:(BOOL)a1 deviceIsWatch:(BOOL)a2 deviceIsHorseman:(BOOL)a3 deviceIsOSX:(BOOL)a4 deviceIsTV:(BOOL)a5 deviceIsIOS:(BOOL)a6;

@end
