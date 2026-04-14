@class NSArray;
@protocol ATXUniversalSuggestionDeduplicatorProtocol, ATXUniversalBlendingLayerHyperParametersProtocol;

@interface ATXLayoutGenerator : NSObject <ATXLayoutGeneratorProtocol> {
    NSArray *_rankedSuggestions;
    NSArray *_layoutsToConsider;
    id<ATXUniversalBlendingLayerHyperParametersProtocol> _hyperParameters;
    id<ATXUniversalSuggestionDeduplicatorProtocol> _deduplicator;
}

+ (id)sortLayouts:(id)a0;

- (id)generateGreedySuggestionLayoutForUILayoutType:(long long)a0 layoutTypesForRankedSuggestions:(id)a1 isSuggestionsWidgetLayout:(BOOL)a2;
- (id)init;
- (double)weightForConfidenceCategory:(long long)a0;
- (id)initWithRankedSuggestions:(id)a0 layoutsToConsider:(id)a1 hyperParameters:(id)a2 suggestionDeduplicator:(id)a3;
- (void).cxx_destruct;
- (id)generateLayoutToSuggestionDictionary;
- (id)uuidOfHighestConfidenceSuggestionFromRankedSuggestions:(id)a0 uiLayoutType:(long long)a1;
- (void)scoreLayout:(id)a0;
- (id)generateValidLayouts;
- (double)marginalScoreForSuggestion:(id)a0 topRankingSuggestion:(id)a1;

@end
