@interface HGAudioFeedbackConfigurationInternal : NSObject {
    void /* unknown type, empty encoding */ audioFeedbackForGesture;
    void /* unknown type, empty encoding */ audioFeedbackForPartGesture;
    void /* unknown type, empty encoding */ _enableWaitingTone;
}

@property (class, nonatomic, readonly) HGAudioFeedbackConfigurationInternal *defaultAudioConfiguration;

@property (nonatomic) void /* unknown type, empty encoding */ enableAudioFeedback;
@property (nonatomic) void /* unknown type, empty encoding */ invertedConfirmationAudioFeedbackMode;
@property (nonatomic) char enableWaitingTone;

- (id)init;
- (void).cxx_destruct;
- (void)enableAudioFeedbackForGestureWithGesture:(unsigned long long)a0 enable:(char)a1;
- (void)enableAudioFeedbackForPartGestureWithPart:(unsigned long long)a0 enable:(char)a1;
- (id)initWithEnableAudioFeedback:(char)a0 enableWaitingTone:(char)a1;

@end
