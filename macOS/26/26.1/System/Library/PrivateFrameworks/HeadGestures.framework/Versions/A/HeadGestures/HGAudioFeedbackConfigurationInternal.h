@interface HGAudioFeedbackConfigurationInternal : NSObject {
    void /* unknown type, empty encoding */ audioFeedbackForGesture;
    void /* unknown type, empty encoding */ audioFeedbackForPartGesture;
    void /* unknown type, empty encoding */ _enableWaitingTone;
}

@property (class, nonatomic, readonly) HGAudioFeedbackConfigurationInternal *defaultAudioConfiguration;

@property (nonatomic) BOOL enableAudioFeedback;
@property (nonatomic) BOOL invertedConfirmationAudioFeedbackMode;
@property (nonatomic) BOOL enableWaitingTone;

- (void).cxx_destruct;
- (id)init;
- (void)enableAudioFeedbackForGestureWithGesture:(unsigned long long)a0 enable:(BOOL)a1;
- (void)enableAudioFeedbackForPartGestureWithPart:(unsigned long long)a0 enable:(BOOL)a1;
- (id)initWithEnableAudioFeedback:(BOOL)a0 enableWaitingTone:(BOOL)a1;

@end
