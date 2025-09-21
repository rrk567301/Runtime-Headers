@class ATXProactiveSuggestion, NSMutableDictionary, ATXBlendingLayerHyperParameters, NSString, ATXHomeScreenWidgetIdentifiable, _ATXHomeScreenStackState, ATXSuggestionLayout;
@protocol ATXSuggestionDeduplicatorProtocol;

@interface _ATXCompositeLayoutWidgetSuggestionBase : NSObject <_ATXCompositeLayoutWidgetSuggesting>

@property (readonly, nonatomic) id<ATXSuggestionDeduplicatorProtocol> suggestionDeduplicator;
@property (readonly, nonatomic) ATXBlendingLayerHyperParameters *hyperParameters;
@property (readonly, nonatomic) NSMutableDictionary *suggestionsBySuggestionLayoutTypes;
@property (readonly, nonatomic) long long layoutType;
@property (readonly, weak, nonatomic) _ATXHomeScreenStackState *stack;
@property (readonly, nonatomic) ATXHomeScreenWidgetIdentifiable *widget;
@property (readonly, nonatomic) ATXSuggestionLayout *suggestionLayout;
@property (readonly, nonatomic) ATXProactiveSuggestion *mainSuggestionInLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)addSuggestion:(id)a0 asMainSuggestion:(char)a1;
- (id)_existingSuggestionsInLayout;
- (char)addSuggestion:(id)a0 asMainSuggestion:(char)a1 dryRun:(char)a2;
- (char)canAddSuggestion:(id)a0;
- (char)containsIdenticalContentOfSuggestion:(id)a0;
- (char)isLayoutComplete;

@end
