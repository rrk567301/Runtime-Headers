@class ATXStackStateTracker, NSMutableDictionary, ATXBlendingLayerHyperParameters, ATXHomeScreenStackConfig, NSMutableArray, _ATXHomeScreenPageState;
@protocol ATXSuggestionDeduplicatorProtocol, _ATXWidgetSuggesting;

@interface _ATXHomeScreenStackState : NSObject {
    ATXStackStateTracker *_stackStateTracker;
    id<ATXSuggestionDeduplicatorProtocol> _suggestionDeduplicator;
    ATXBlendingLayerHyperParameters *_hyperParameters;
    id<_ATXWidgetSuggesting> _topOfStackSuggestion;
}

@property (readonly, weak, nonatomic) _ATXHomeScreenPageState *page;
@property (readonly, nonatomic) ATXHomeScreenStackConfig *config;
@property (retain, nonatomic) id<_ATXWidgetSuggesting> topOfStackSuggestion;
@property (readonly, nonatomic) id<_ATXWidgetSuggesting> previousTopOfStackSuggestion;
@property (readonly, nonatomic) NSMutableArray *suggestedWidgets;
@property (readonly, nonatomic) NSMutableArray *previousSuggestedWidgets;
@property (readonly, nonatomic) NSMutableDictionary *suggestionsWidgetSuggestionsByWidgetUniqueId;

- (id)init;
- (void).cxx_destruct;
- (char)isStale;
- (id)_firstWidgetPassingTest:(id /* block */)a0 considerSuggestedWidgets:(char)a1;
- (id)_previousSuggestionForMemberWidget:(id)a0;
- (char)containsIdenticalContentOfSuggestion:(id)a0 ignoreDuplicatesInSGWidget:(char)a1 ignoreDuplicatesInPanels:(char)a2;
- (char)containsSuggestedWidgetForApp:(id)a0;
- (char)containsWidgetForApp:(id)a0;
- (char)containsWidgetForIntent:(id)a0;
- (id)initWithPageState:(id)a0 stackConfig:(id)a1 stackStateTracker:(id)a2 suggestionDeduplicator:(id)a3 hyperParameters:(id)a4;
- (char)mostRecentRotationOfStackIsSystemInitiated;
- (char)previousSuggestedWidgetsContainIdenticalContentOfSuggestion:(id)a0;
- (id)previousTopWidget;
- (char)previousTopWidgetWasShowingIdenticalContentOfSuggestion:(id)a0;
- (char)sizeIsCompatibleWithWidgetSuggestion:(id)a0;
- (char)topWidgetIsShowingIdenticalContentOfSuggestion:(id)a0 ignoreDuplicatesInSGWidget:(char)a1 ignoreDuplicatesInPanels:(char)a2;
- (id)widgetForSuggestion:(id)a0 considerSuggestedWidgets:(char)a1;

@end
