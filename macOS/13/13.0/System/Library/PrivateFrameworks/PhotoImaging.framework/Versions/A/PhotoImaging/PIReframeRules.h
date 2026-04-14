@interface PIReframeRules : NURuleSystem

@property (readonly) BOOL isCandidateForReframe;
@property (readonly) BOOL isCandidateForPerspective;
@property (readonly) BOOL isCandidateForHorizon;

+ (id)factCandidateForStill;
+ (id)factCandidateForVideo;
+ (id)factCandidateForReframe;
+ (id)factCandidateForPerspective;
+ (id)factCandidateForHorizon;
+ (id)sharedPregateRules;
+ (id)pregateRulesSystemWithConstants:(id)a0;

@end
