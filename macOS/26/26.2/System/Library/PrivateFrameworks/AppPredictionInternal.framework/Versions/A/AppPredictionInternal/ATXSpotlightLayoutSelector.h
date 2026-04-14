@class NSString, ATXSpotlightContextAdapter;
@protocol ATXUniversalBlendingLayerHyperParametersProtocol, ATXUniversalSuggestionDeduplicatorProtocol;

@interface ATXSpotlightLayoutSelector : NSObject <ATXLayoutSelectorProtocol> {
    id<ATXUniversalSuggestionDeduplicatorProtocol> _deduplicator;
    id<ATXUniversalBlendingLayerHyperParametersProtocol> _hyperParameters;
    ATXSpotlightContextAdapter *_adapter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isCommuteWildCardSuggestion:(id)a0;
+ (id)_commuteWildcardReducer:(id)a0;
+ (BOOL)_isCommuteMediaSuggestion:(id)a0;

- (id)_titleForContextCode:(long long)a0 suggestions:(id)a1;
- (BOOL)_hasNilTitleForContextCode:(long long)a0;
- (id)_poiMUIDFromHero:(id)a0;
- (id)_preferredContextWithContextCode:(id)a0 contextCriteria:(id)a1;
- (id)_createPOISuggestionWithMUID:(id)a0 fromHeroSuggestion:(id)a1;
- (id)_insertMediaSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)_clearDuplicateContextsFromSuggestions:(id)a0 suggestionDict:(id)a1;
- (id)_collectionsWithSuggestions:(id)a0;
- (id)_intervalStringWithCriteria:(id)a0;
- (id)_createTopAppShortcutSuggestions;
- (id)_titleForParameterizedAutoShortcutContextualAction:(id)a0 provider:(id)a1;
- (id)selectedLayoutForConsumerSubType:(unsigned char)a0 rankedSuggestions:(id)a1;
- (id)initWithSuggestionDeduplicator:(id)a0 hyperParameters:(id)a1;
- (void)_indexSpotlightActions:(id)a0;
- (void).cxx_destruct;
- (id)_heroDataReducer:(id)a0;
- (id)nsuaFilteredLayoutForConsumerSubType:(unsigned char)a0 rankedSuggestions:(id)a1;
- (id)_rankedReasonCodes;
- (void)_dedupeSuggestions:(id)a0 suggestionDict:(id)a1;
- (BOOL)_isValidForReasons:(unsigned long long)a0;
- (id)_validAutoShortcutContextualActionsForBundleId:(id)a0 limit:(unsigned long long)a1 provider:(id)a2;
- (id)_createTopAppShortcutCollectionsWithSuggestions:(id)a0;
- (id)_scoresFlattenForCollections:(id)a0;
- (long long)_contextReasonCodeWithPredictionReasons:(unsigned long long)a0;
- (id)_staticTitleForContextCode:(long long)a0;
- (id)init;
- (id)_suggestionFromAutoShortcutContextualAction:(id)a0 title:(id)a1 predictionReasons:(unsigned long long)a2;
- (double)_adaptedScoreForSuggestion:(id)a0;
- (id)_autoShortcutsForBundleId:(id)a0 provider:(id)a1;
- (unsigned long long)_supportedContextReasons;

@end
