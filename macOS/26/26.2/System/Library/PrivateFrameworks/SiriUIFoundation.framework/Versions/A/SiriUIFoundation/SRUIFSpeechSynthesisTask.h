@class NSString, SAUIAudioData, NSDictionary, SiriTTSBaseRequest, SAVoice, NSError;
@protocol SRUIFSpeechSynthesisTaskDelegate;

@interface SRUIFSpeechSynthesisTask : NSObject

@property (nonatomic, getter=isEligibleForSynthesis, setter=_setEligibleForSynthesis:) BOOL eligibleForSynthesis;
@property (nonatomic, getter=isEligibleForProcessing, setter=_setEligibleForProcessing:) BOOL eligibleForProcessing;
@property (readonly, nonatomic, getter=_completion) id /* block */ completion;
@property (copy, nonatomic, setter=_setText:) NSString *text;
@property (setter=_setPreparationBlockCompleted:) BOOL preparationBlockCompleted;
@property (setter=_setDurationHasElapsed:) BOOL durationHasElapsed;
@property (readonly, nonatomic) SAUIAudioData *audioData;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) SAVoice *preferredVoice;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *gender;
@property (readonly, nonatomic) NSString *voicePromptStyle;
@property (nonatomic) BOOL isPhonetic;
@property (readonly, nonatomic, getter=isProvisional) BOOL provisional;
@property (nonatomic, getter=isDelayed) BOOL delayed;
@property (nonatomic) BOOL canUseServerTTS;
@property (retain, nonatomic) SiriTTSBaseRequest *ttsSessionRequest;
@property (nonatomic) long long synthesisResult;
@property (retain, nonatomic) NSError *synthesisError;
@property (weak, nonatomic) id<SRUIFSpeechSynthesisTaskDelegate> delegate;
@property (readonly, nonatomic) NSDictionary *analyticsContext;
@property (retain, nonatomic) NSDictionary *speakableContextInfo;
@property (nonatomic) BOOL shouldCache;

- (void).cxx_destruct;
- (id)description;
- (void)_updateSynthesisEligibility;
- (void)executeCompletion;
- (id)initWithText:(id)a0 audioData:(id)a1 identifier:(id)a2 sessionId:(id)a3 preferredVoice:(id)a4 language:(id)a5 gender:(id)a6 voicePromptStyle:(id)a7 provisional:(BOOL)a8 eligibleAfterDuration:(double)a9 delayed:(BOOL)a10 preparation:(id /* block */)a11 completion:(id /* block */)a12 analyticsContext:(id)a13 speakableContextInfo:(id)a14 canUseServerTTS:(BOOL)a15 eligibilityChangedQueue:(id)a16;

@end
