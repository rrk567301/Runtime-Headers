@interface _ATXAppPredictionPanelSuggestion : _ATXCompositeLayoutWidgetSuggestionBase

- (char)addSuggestion:(id)a0 asMainSuggestion:(char)a1 dryRun:(char)a2;
- (char)containsIdenticalContentOfSuggestion:(id)a0;
- (id)initForPreviewWithHyperParameters:(id)a0;
- (id)initWithAppPredictionPanel:(id)a0 containingStack:(id)a1 suggestionDeduplicator:(id)a2 hyperParameters:(id)a3;
- (id)initWithAppPredictionPanel:(id)a0 containingStack:(id)a1 suggestionLayout:(id)a2 suggestionDeduplicator:(id)a3 hyperParameters:(id)a4;

@end
