@class TTSAssetType, TTSAssetQuality, NSString, TTSAssetTechnology, NSArray, NSDictionary, NSBundle, NSNumber, TTSAssetSource;

@interface SiriTTSService.TTSAssetMAAsset : TTSAsset {
    void /* unknown type, empty encoding */ asset;
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
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSNumber *downloadSize;
@property (nonatomic, readonly) NSNumber *diskSize;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) char downloading;
@property (nonatomic, readonly) char purgeable;
@property (nonatomic, readonly) char locallyAvailable;

- (id)init;
- (void).cxx_destruct;
- (void)purge;
- (void)cancelDownloadingThen:(id /* block */)a0;
- (void)downloadWithReservation:(id)a0 useBattery:(char)a1 progress:(id /* block */)a2 then:(id /* block */)a3;

@end
