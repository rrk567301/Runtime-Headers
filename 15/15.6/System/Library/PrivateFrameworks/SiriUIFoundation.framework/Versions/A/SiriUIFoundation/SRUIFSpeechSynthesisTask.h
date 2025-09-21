@class NSString, SAUIAudioData, NSDictionary, SiriTTSBaseRequest, SAVoice, NSError;
@protocol SRUIFSpeechSynthesisTaskDelegate;

@interface SRUIFSpeechSynthesisTask : NSObject

@property (nonatomic, getter=isEligibleForSynthesis, setter=_setEligibleForSynthesis:) char eligibleForSynthesis;
@property (nonatomic, getter=isEligibleForProcessing, setter=_setEligibleForProcessing:) char eligibleForProcessing;
@property (readonly, nonatomic, getter=_completion) id /* block */ completion;
@property (copy, nonatomic, setter=_setText:) NSString *text;
@property (setter=_setPreparationBlockCompleted:) char preparationBlockCompleted;
@property (setter=_setDurationHasElapsed:) char durationHasElapsed;
@property (readonly, nonatomic) SAUIAudioData *audioData;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) SAVoice *preferredVoice;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *gender;
@property (nonatomic) char isPhonetic;
@property (readonly, nonatomic, getter=isProvisional) char provisional;
@property (nonatomic, getter=isDelayed) char delayed;
@property (nonatomic) char canUseServerTTS;
@property (retain, nonatomic) SiriTTSBaseRequest *ttsSessionRequest;
@property (nonatomic) long long synthesisResult;
@property (retain, nonatomic) NSError *synthesisError;
@property (weak, nonatomic) id<SRUIFSpeechSynthesisTaskDelegate> delegate;
@property (readonly, nonatomic) NSDictionary *analyticsContext;
@property (retain, nonatomic) NSDictionary *speakableContextInfo;
@property (nonatomic) char shouldCache;

- (id)description;
- (void).cxx_destruct;
- (void)_updateSynthesisEligibility;
- (void)executeCompletion;
- (id)initWithText:(id)a0 audioData:(id)a1 identifier:(id)a2 sessionId:(id)a3 preferredVoice:(id)a4 language:(id)a5 gender:(id)a6 provisional:(char)a7 eligibleAfterDuration:(double)a8 delayed:(char)a9 preparation:(id /* block */)a10 completion:(id /* block */)a11 analyticsContext:(id)a12 speakableContextInfo:(id)a13 canUseServerTTS:(char)a14 eligibilityChangedQueue:(id)a15;

@end
