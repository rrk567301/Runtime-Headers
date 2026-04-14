@class ATXContextHeuristics, ATXContextHeuristicsScheduler;

@interface ATXContextHeuristicsServer : NSObject <ATXContextHeuristicsDelegate> {
    ATXContextHeuristics *_heuristics;
    ATXContextHeuristicsScheduler *_sportsScheduler;
}

+ (id)sharedInstance;

- (id)_cachedContextsFromSuggestions:(id)a0;
- (void)_updateBlendingLayerWithSuggestionsFromContextHeuristics:(id)a0;
- (void)contextHeuristics:(id)a0 didUpdateSuggestions:(id)a1;
- (id)init;
- (void)contextHeuristics:(id)a0 didUpdateSpotlightRecents:(id)a1;
- (id)_retrieveOldContextHeuristicsSuggestions;
- (void).cxx_destruct;
- (void)_updateBlendingLayerWithSuggestionsFromSpotlightRecents:(id)a0;
- (id)_contextHeuristicsClientModel;
- (void)_updateContextHeuristicsBiomeStreamWithNewSuggestions:(id)a0 oldSuggestions:(id)a1;
- (id)initWithHeuristics:(id)a0;

@end
