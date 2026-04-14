@class TTSAssetType, NSArray, NSString, TTSAssetTechnology, TTSAssetQuality, NSDictionary, NSBundle, NSNumber, TTSAssetSource;

@interface TTSAsset.TTSAssetAdhocVoice : TTSAsset {
    void /* unknown type, empty encoding */ info;
    void /* unknown type, empty encoding */ asset;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) TTSAssetType *assetType;
@property (nonatomic, readonly) TTSAssetTechnology *technology;
@property (nonatomic, readonly) TTSAssetQuality *quality;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long versionNumber;
@property (nonatomic, readonly) NSString *versionDescription;
@property (nonatomic, readonly) NSArray *supportedLanguages;
@property (nonatomic, readonly) long long gender;
@property (nonatomic, readonly) NSNumber *age;
@property (nonatomic, readonly) NSNumber *diskSize;
@property (nonatomic, readonly) BOOL downloading;
@property (nonatomic, readonly) BOOL purgeable;
@property (nonatomic, readonly) BOOL locallyAvailable;
@property (nonatomic, readonly) TTSAssetSource *assetSource;

- (id)init;
- (void).cxx_destruct;

@end
