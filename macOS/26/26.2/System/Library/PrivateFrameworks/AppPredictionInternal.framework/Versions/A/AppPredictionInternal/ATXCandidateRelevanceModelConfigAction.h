@class ATXActionPredictionBlacklist, ATXDigitalHealthBlacklist;

@interface ATXCandidateRelevanceModelConfigAction : ATXCandidateRelevanceModelConfig

@property (retain, nonatomic) ATXDigitalHealthBlacklist *appDigitalHealthBlacklist;
@property (retain, nonatomic) ATXActionPredictionBlacklist *actionBlacklist;

- (id)heuristicSuggestionsForContext:(id)a0 currentSuggestionExecutableIds:(id)a1;
- (BOOL)candidateIsStillValidToSuggest:(id)a0;
- (void).cxx_destruct;
- (id)datasetGenerator;
- (id)proactiveSuggestionForCandidate:(id)a0 prediction:(float)a1;
- (id)candidatePublisherFromStartTime:(double)a0;
- (id)init;

@end
