@class HGMLConfigurationInternal, HGAudioFeedbackConfigurationInternal;

@interface HGConfigurationInternal : NSObject

@property (class, nonatomic, readonly) HGConfigurationInternal *defaultConfig;

@property (nonatomic, retain) HGMLConfigurationInternal *mlConfig;
@property (nonatomic, retain) HGAudioFeedbackConfigurationInternal *audioFeedbackConfig;
@property (nonatomic) BOOL requestPartGestures;
@property (nonatomic) BOOL singleDelivery;
@property (nonatomic) BOOL enableRawDataLogging;
@property (nonatomic) float gesturePartRepeatTimeout;
@property (nonatomic) float gesturePartAcceptableNodVelocity;
@property (nonatomic) float gesturePartAcceptableShakeVelocity;

- (id)init;
- (void).cxx_destruct;
- (id)initWithML:(id)a0 audioFeedbackConfig:(id)a1;
- (id)initWithMlConfig:(id)a0 audioFeedbackConfig:(id)a1 requestPartGestures:(BOOL)a2;

@end
