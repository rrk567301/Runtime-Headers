@interface CSMobileAssetVersions : NSObject

+ (id)getVoiceTriggerAssetTypeString;
+ (unsigned long long)getVoiceTriggerCurrentCompatibilityVersion;
+ (id)getVoiceTriggerAssetTypeStringWithSupportMphAssets:(char)a0 deviceIsIPad:(char)a1 deviceIsWatch:(char)a2 deviceIsHorseman:(char)a3 deviceIsOSX:(char)a4 deviceIsASMac:(char)a5 deviceIsTV:(char)a6 deviceIsIOS:(char)a7;
+ (unsigned long long)getVoiceTriggerCurrentCompatibilityVersionWithSupportMphAssets:(char)a0 deviceIsIPad:(char)a1 deviceIsWatch:(char)a2 deviceIsHorseman:(char)a3 deviceIsOSX:(char)a4 deviceIsASMac:(char)a5 deviceIsTV:(char)a6 deviceIsIOS:(char)a7;

@end
