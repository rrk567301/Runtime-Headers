@class NSString, NSDictionary;

@interface CSAsset : NSObject {
    NSDictionary *_decodedInfo;
}

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *resourcePath;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSString *hashFromResourcePath;
@property (readonly, nonatomic) NSString *configVersion;
@property (readonly, nonatomic) unsigned long long assetProvider;

+ (id)decodeJson:(id)a0;
+ (id)defaultFallBackAssetForVoiceTrigger;
+ (id)assetForAssetType:(unsigned long long)a0 resourcePath:(id)a1 configVersion:(id)a2;
+ (id)assetForAssetType:(unsigned long long)a0 resourcePath:(id)a1 configVersion:(id)a2 assetProvider:(unsigned long long)a3;
+ (id)fallBackAssetResourcePath;
+ (id)hybridEndpointerAssetFilename;
+ (id)getConfigFileNameForAssetType:(unsigned long long)a0;
+ (id)defaultFallBackAssetForSmartSiriVolume;
+ (id)defaultFallBackAssetForHearst;
+ (id)defaultFallBackAssetForAdBlocker;
+ (unsigned long long)parseCompatibilityFromConfigVersion:(id)a0;
+ (BOOL)isLeftConfigVersion:(id)a0 newerThanRightConfigVersion:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)assetHashInResourcePath:(id)a0;
- (BOOL)getBoolForKey:(id)a0 category:(id)a1 default:(BOOL)a2;
- (BOOL)containsCategory:(id)a0;
- (BOOL)isEqualAsset:(id)a0;
- (id)getNumberForKey:(id)a0 category:(id)a1 default:(id)a2;
- (id)getStringForKey:(id)a0 category:(id)a1 default:(id)a2;
- (id)getValueForKey:(id)a0 category:(id)a1;
- (id)initWithResourcePath:(id)a0 configFile:(id)a1 configVersion:(id)a2 assetProvderType:(unsigned long long)a3;
- (BOOL)containsKey:(id)a0 category:(id)a1;
- (id)stringForCurrentAssetProviderType;
- (id)assetHashForTrial:(id)a0;
- (id)_sha1ForString:(id)a0;

@end
