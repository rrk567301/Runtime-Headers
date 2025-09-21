@class TTSAssetType, TTSAssetQuality, NSString, TTSAssetTechnology, NSArray, NSDictionary, NSBundle, NSNumber, TTSAssetSource;

@interface SiriTTSService.TTSAssetProxyAsset : TTSAsset {
    void /* unknown type, empty encoding */ cookie;
    void /* unknown type, empty encoding */ assetQuality;
    void /* unknown type, empty encoding */ bundlePath;
    void /* unknown type, empty encoding */ authorizedBundle;
    void /* unknown type, empty encoding */ proxy_attr;
}

@property (nonatomic, readonly) TTSAssetType *assetType;
@property (nonatomic, readonly) TTSAssetSource *assetSource;
@property (nonatomic, readonly) TTSAssetTechnology *technology;
@property (nonatomic, readonly) TTSAssetQuality *quality;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long versionNumber;
@property (nonatomic, readonly) NSString *versionDescription;
@property (nonatomic, readonly) NSArray *supportedLanguages;
@property (nonatomic, readonly) long long gender;
@property (nonatomic, readonly) NSNumber *age;
@property (nonatomic, readonly) NSNumber *downloadSize;
@property (nonatomic, readonly) NSNumber *diskSize;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) BOOL locallyAvailable;
@property (nonatomic, readonly) BOOL purgeable;
@property (nonatomic, readonly) BOOL downloading;
@property (nonatomic, readonly) long long purgeCondition;

- (void)purgeThen:(id /* block */)a0;
- (id)init;
- (void)cancelDownloadingThen:(id /* block */)a0;
- (void).cxx_destruct;
- (void)downloadWithOptions:(unsigned long long)a0 progress:(id /* block */)a1 then:(id /* block */)a2;
- (void)setPurgeCondition:(long long)a0;

@end
