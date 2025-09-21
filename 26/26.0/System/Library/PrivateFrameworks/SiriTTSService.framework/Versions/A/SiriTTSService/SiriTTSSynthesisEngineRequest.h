@class NSString;

@interface SiriTTSSynthesisEngineRequest : NSObject

@property (retain, nonatomic) NSString *text;
@property (nonatomic) BOOL privacySensitive;
@property (nonatomic) BOOL disableThermalFallback;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) float rate;
@property (nonatomic) float pitch;
@property (nonatomic) float volume;
@property (nonatomic) long long profile;
@property (retain, nonatomic) NSString *promptStyle;
@property (nonatomic) float neuralSentencePitch;
@property (nonatomic) float neuralSentencePitchRange;
@property (nonatomic) float neuralSentenceDuration;
@property (nonatomic) float neuralSentenceEnergy;
@property (nonatomic) float neuralSentenceTilt;
@property (copy, nonatomic) id /* block */ audioHandler;
@property (copy, nonatomic) id /* block */ promptHandler;
@property (copy, nonatomic) id /* block */ wordTimingsHandler;
@property (copy, nonatomic) id /* block */ neuralFallbackHandler;
@property (copy, nonatomic) id /* block */ useHydraFrontendHandler;
@property (copy, nonatomic) id /* block */ dynamicPromptHandler;
@property (copy, nonatomic) id /* block */ synthesisIssueHandler;
@property (copy, nonatomic) id /* block */ wordAlignmentFailureHandler;

+ (id)synthesisIssueCauseString:(long long)a0;

- (id)init;
- (void).cxx_destruct;

@end
