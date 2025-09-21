@interface CSAssetDownloadingOption : NSObject

@property (nonatomic) char allowVoiceTriggerAssetDownloading;
@property (nonatomic) char allowEndpointAssetDownloading;
@property (nonatomic) char allowLanguageDetectorAssetDownloading;
@property (nonatomic) char allowAdBlockerAssetDownloading;
@property (nonatomic) char allowSpeakerRecognitionAssetDownloading;
@property (nonatomic) char allowVoiceTriggerAccessoryAssetDownloading;
@property (nonatomic) char allowGibraltarVoiceTriggerAssetDownloading;

- (id)description;
- (id)init;

@end
