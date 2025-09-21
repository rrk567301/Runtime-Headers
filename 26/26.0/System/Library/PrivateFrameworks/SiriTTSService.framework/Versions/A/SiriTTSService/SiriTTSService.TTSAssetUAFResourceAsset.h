@class TTSAssetType, TTSAssetTechnology, NSString, NSDictionary, TTSAssetQuality;

@interface SiriTTSService.TTSAssetUAFResourceAsset : SiriTTSService.TTSAssetUAFAsset

@property (nonatomic, readonly) TTSAssetType *assetType;
@property (nonatomic, readonly) TTSAssetTechnology *technology;
@property (nonatomic, readonly) TTSAssetQuality *quality;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long brand;
@property (nonatomic, readonly) long long gender;
@property (nonatomic, readonly) NSDictionary *attributes;

@end
