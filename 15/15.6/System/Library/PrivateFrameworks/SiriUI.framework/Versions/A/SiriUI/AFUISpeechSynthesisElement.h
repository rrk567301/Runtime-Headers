@class NSString, SAUIAudioData;
@protocol AFUISpeechSynthesisElementDelegate;

@interface AFUISpeechSynthesisElement : NSObject

@property (nonatomic, getter=isEligibleForSynthesis, setter=_setEligibleForSynthesis:) char eligibleForSynthesis;
@property (readonly, nonatomic, getter=_completion) id /* block */ completion;
@property (copy, nonatomic, setter=_setText:) NSString *text;
@property (setter=_setPreparationBlockCompleted:) char preprationBlockCompleted;
@property (setter=_setDurationHasElapsed:) char durationHasElapsed;
@property (readonly, nonatomic) SAUIAudioData *audioData;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) char isPhonetic;
@property (nonatomic) char isSilent;
@property (nonatomic) char synthesizesWhileRecording;
@property (readonly, nonatomic, getter=isProvisional) char provisional;
@property (nonatomic) long long synthesisResult;
@property (weak, nonatomic) id<AFUISpeechSynthesisElementDelegate> delegate;
@property (readonly, nonatomic) NSString *animationIdentifier;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)_updateSynthesisEligibility;
- (void)executeCompletion;
- (id)initWithText:(id)a0 audioData:(id)a1 identifier:(id)a2 isPhonetic:(char)a3 isSilent:(char)a4 synthesizesWhileRecording:(char)a5 provisional:(char)a6 eligibleAfterDuration:(double)a7 preparation:(id /* block */)a8 completion:(id /* block */)a9 animationIdentifier:(id)a10;

@end
