@class NSString, SecureAssetPreInstalledBundleBridge;

@interface CoreSpeechExclaveAssetController : NSObject

@property (retain, nonatomic) NSString *currentHardwarePlatform;
@property (retain, nonatomic) SecureAssetPreInstalledBundleBridge *preInstalledBundle;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_assetCategoryForAssetType:(unsigned long long)a0;
- (id)_assetCategoryPathKeyForAssetType:(unsigned long long)a0;
- (id)_configFileNameForAssetType:(unsigned long long)a0;
- (void)_initializeCurrentDevicePlatform;
- (void)_initializePreInstalledSecureAssetBundle;
- (id)fetchSecureAssetForLocale:(id)a0 assetType:(unsigned long long)a1;

@end
