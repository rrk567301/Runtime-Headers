@class ATXContextHeuristics, ATXContextHeuristicsScheduler;

@interface ATXContextHeuristicsServer : NSObject <ATXContextHeuristicsDelegate> {
    ATXContextHeuristics *_heuristics;
    ATXContextHeuristicsScheduler *_sportsScheduler;
}

+ (id)sharedInstance;

- (void)_updateBlendingLayerWithSuggestionsFromContextHeuristics:(id)a0;
- (id)_retrieveOldContextHeuristicsSuggestions;
- (void)contextHeuristics:(id)a0 didUpdateSpotlightRecents:(id)a1;
- (void)_updateContextHeuristicsBiomeStreamWithNewSuggestions:(id)a0 oldSuggestions:(id)a1;
- (void)_updateBlendingLayerWithSuggestionsFromSpotlightRecents:(id)a0;
- (id)_contextHeuristicsClientModel;
- (void).cxx_destruct;
- (void)contextHeuristics:(id)a0 didUpdateSuggestions:(id)a1;
- (id)initWithHeuristics:(id)a0;
- (id)init;
- (id)_cachedContextsFromSuggestions:(id)a0;

@end
