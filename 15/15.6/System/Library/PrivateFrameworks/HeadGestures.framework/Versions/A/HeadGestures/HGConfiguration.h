@class HGConfigurationInternal, HGMLConfiguration, HGAudioFeedbackConfiguration;

@interface HGConfiguration : NSObject

@property (retain, nonatomic) HGConfigurationInternal *internal;
@property (retain, nonatomic) HGMLConfiguration *mlConfig;
@property (retain, nonatomic) HGAudioFeedbackConfiguration *audioFeedbackConfig;
@property (nonatomic) char requestPartGestures;
@property (nonatomic) char enableRawDataLogging;
@property (nonatomic) char singleDelivery;

- (id)init;
- (void).cxx_destruct;

@end
