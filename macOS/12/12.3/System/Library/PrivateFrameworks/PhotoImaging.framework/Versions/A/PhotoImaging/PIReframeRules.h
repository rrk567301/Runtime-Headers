@interface PIReframeRules : NURuleSystem

@property (readonly) BOOL isCandidateForReframe;
@property (readonly) BOOL isCandidateForPerspective;
@property (readonly) BOOL isCandidateForHorizon;

+ (id)factCandidateForReframe;
+ (id)factCandidateForStill;
+ (id)factCandidateForVideo;
+ (id)factCandidateForPerspective;
+ (id)factCandidateForHorizon;
+ (id)sharedPregateRules;
+ (id)pregateRulesSystemWithConstants:(id)a0;

@end
