@class VUITimedMetadataVisualSmoothingConfig, VUITimedMetadataAudioSmoothingConfig;

@interface VUITimedMetadataConfig : NSObject

@property (retain, nonatomic) VUITimedMetadataVisualSmoothingConfig *visualSmoothingConfig;
@property (retain, nonatomic) VUITimedMetadataAudioSmoothingConfig *audioSmoothingConfig;

- (void).cxx_destruct;
- (id)init;

@end
