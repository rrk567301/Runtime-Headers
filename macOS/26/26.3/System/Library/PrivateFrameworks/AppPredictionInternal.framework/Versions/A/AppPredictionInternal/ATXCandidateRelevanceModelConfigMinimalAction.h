@class ATXActionPredictionBlacklist, ATXDigitalHealthBlacklist;

@interface ATXCandidateRelevanceModelConfigMinimalAction : ATXCandidateRelevanceModelConfig

@property (retain, nonatomic) ATXDigitalHealthBlacklist *appDigitalHealthBlacklist;
@property (retain, nonatomic) ATXActionPredictionBlacklist *actionBlacklist;

- (id)heuristicSuggestionsForContext:(id)a0 currentSuggestionExecutableIds:(id)a1;
- (BOOL)candidateIsStillValidToSuggest:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)datasetGenerator;
- (id)candidatePublisherFromStartTime:(double)a0;
- (id)proactiveSuggestionForCandidate:(id)a0 prediction:(float)a1;

@end
