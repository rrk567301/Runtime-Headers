@class NSMutableSet, NSMutableDictionary;

@interface UnifiedFieldCompletionListSearchSuggestionsCoordinator : NSObject {
    NSMutableSet *_expectedSources;
    NSMutableSet *_sourcesThatFailed;
    NSMutableDictionary *_suggestionsBySource;
    NSMutableDictionary *_fallbackSuggestionsBySource;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isExpectingSuggestionsFromSource:(int)a0;
- (void)expectSuggestionsFromSource:(int)a0;
- (void)setFallbackSuggestions:(id)a0 fromSource:(int)a1;
- (void)setSuggestions:(id)a0 fromSource:(int)a1;
- (void)didFailToReceiveSuggestionsFromSource:(int)a0;
- (id)suggestionsFromSource:(int)a0;
- (void)removeAllSuggestions;
- (BOOL)hasSufficientSuggestionsToDisplayCompletionList;

@end
