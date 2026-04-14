@class HGAudioFeedbackConfigurationInternal;

@interface HGAudioFeedbackConfiguration : NSObject

@property (retain, nonatomic) HGAudioFeedbackConfigurationInternal *internal;
@property (nonatomic) BOOL enableAudioFeedback;
@property (nonatomic) BOOL enableWaitingTone;
@property (nonatomic) BOOL invertedConfirmationAudioFeedbackMode;

- (void).cxx_destruct;
- (id)init;
- (void)enableAudioFeedbackForHeadGesture:(unsigned long long)a0 toEnable:(BOOL)a1;
- (void)enableAudioFeedbackForHeadGesturePart:(unsigned long long)a0 toEnable:(BOOL)a1;

@end
