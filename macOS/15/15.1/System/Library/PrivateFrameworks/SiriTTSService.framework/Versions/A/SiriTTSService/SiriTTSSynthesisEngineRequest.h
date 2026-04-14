@class NSString;

@interface SiriTTSSynthesisEngineRequest : NSObject

@property (retain, nonatomic) NSString *text;
@property (nonatomic) BOOL privacySensitive;
@property (nonatomic) float rate;
@property (nonatomic) float pitch;
@property (nonatomic) float volume;
@property (nonatomic) unsigned long long profile;
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
@property (copy, nonatomic) id /* block */ synthesisIssueHandler;

- (void).cxx_destruct;

@end
