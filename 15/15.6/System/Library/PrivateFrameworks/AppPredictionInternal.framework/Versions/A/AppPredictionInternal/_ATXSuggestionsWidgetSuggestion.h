@interface _ATXSuggestionsWidgetSuggestion : _ATXCompositeLayoutWidgetSuggestionBase

- (char)addSuggestion:(id)a0 asMainSuggestion:(char)a1 dryRun:(char)a2;
- (char)containsIdenticalContentOfSuggestion:(id)a0;
- (id)initForPreviewOfSize:(unsigned long long)a0 hyperParameters:(id)a1;
- (id)initWithSuggestionsWidget:(id)a0 containingStack:(id)a1 suggestionDeduplicator:(id)a2 hyperParameters:(id)a3;
- (id)initWithSuggestionsWidget:(id)a0 containingStack:(id)a1 suggestionLayout:(id)a2 suggestionDeduplicator:(id)a3 hyperParameters:(id)a4;

@end
