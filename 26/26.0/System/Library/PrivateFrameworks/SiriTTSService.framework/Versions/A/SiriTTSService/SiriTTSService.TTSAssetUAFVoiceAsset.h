@class TTSAssetType, TTSAssetTechnology, NSString, NSDictionary, NSNumber, TTSAssetQuality;

@interface SiriTTSService.TTSAssetUAFVoiceAsset : SiriTTSService.TTSAssetUAFAsset {
    void /* unknown type, empty encoding */ lazyName;
}

@property (nonatomic, readonly) TTSAssetType *assetType;
@property (nonatomic, readonly) TTSAssetTechnology *technology;
@property (nonatomic, readonly) TTSAssetQuality *quality;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long gender;
@property (nonatomic, readonly) NSNumber *age;
@property (nonatomic, readonly) NSDictionary *attributes;

- (void).cxx_destruct;

@end
