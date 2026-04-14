@class NSString, NSBundle;

@interface SecureAssetPreInstalledBundleBridge : NSObject

@property (readonly, nonatomic) NSString *hardwarePlatform;
@property (readonly, nonatomic) NSBundle *preinstalledAssetBundle;
@property (readonly, nonatomic) NSString *rootDirectory;

- (void).cxx_destruct;
- (id)_fetchJsonDictionaryFromFileURL:(id)a0;
- (id)_getSecureAssetRootDirectory:(id)a0;
- (void)_initializePreinstalledAssetBundle;
- (id)fetchAssetConfigFileURL:(id)a0;
- (id)fetchAssetMetaDataForLocale:(id)a0 categoryResourcePathKey:(id)a1;
- (id)fetchCategoryResourceDirURL:(id)a0;
- (id)initWithHardwarePlatform:(id)a0;

@end
