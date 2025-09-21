@class HGAudioFeedbackConfigurationInternal;

@interface HGAudioFeedbackConfiguration : NSObject

@property (retain, nonatomic) HGAudioFeedbackConfigurationInternal *internal;
@property (nonatomic) char enableAudioFeedback;
@property (nonatomic) char enableWaitingTone;
@property (nonatomic) char invertedConfirmationAudioFeedbackMode;

- (id)init;
- (void).cxx_destruct;
- (void)enableAudioFeedbackForHeadGesture:(unsigned long long)a0 toEnable:(char)a1;
- (void)enableAudioFeedbackForHeadGesturePart:(unsigned long long)a0 toEnable:(char)a1;

@end
