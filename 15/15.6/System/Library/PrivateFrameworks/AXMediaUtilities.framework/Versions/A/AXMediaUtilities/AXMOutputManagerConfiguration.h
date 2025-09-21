@interface AXMOutputManagerConfiguration : NSObject

@property (nonatomic) unsigned long long components;
@property (nonatomic) char usesPrivateAudioSession;
@property (nonatomic) char hapticEngineUsesAutoShutdown;
@property (nonatomic) double hapticEngineAutoShutdownTimeout;
@property (nonatomic) char hapticEngineUsesHapticsOnly;

- (id)description;

@end
