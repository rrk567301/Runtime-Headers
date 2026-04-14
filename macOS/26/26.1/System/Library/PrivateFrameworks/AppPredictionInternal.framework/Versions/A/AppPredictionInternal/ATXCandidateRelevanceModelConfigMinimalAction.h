@class ATXActionPredictionBlacklist, ATXDigitalHealthBlacklist;

@interface ATXCandidateRelevanceModelConfigMinimalAction : ATXCandidateRelevanceModelConfig

@property (retain, nonatomic) ATXDigitalHealthBlacklist *appDigitalHealthBlacklist;
@property (retain, nonatomic) ATXActionPredictionBlacklist *actionBlacklist;

- (id)datasetGenerator;
- (id)proactiveSuggestionForCandidate:(id)a0 prediction:(float)a1;
- (id)heuristicSuggestionsForContext:(id)a0 currentSuggestionExecutableIds:(id)a1;
- (void).cxx_destruct;
- (id)candidatePublisherFromStartTime:(double)a0;
- (BOOL)candidateIsStillValidToSuggest:(id)a0;
- (id)init;

@end
