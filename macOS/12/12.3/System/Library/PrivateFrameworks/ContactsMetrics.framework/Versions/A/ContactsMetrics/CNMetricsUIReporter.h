@interface CNMetricsUIReporter : CNMetricsReporter

- (id)emptyDictionaryForAction:(id)a0 andApplication:(id)a1;
- (void)logActionDictionary:(id)a0;
- (void)logContactShownforApplication:(id)a0;
- (void)logSearchUsageforApplication:(id)a0;
- (void)logSearchResultsFetchedforApplication:(id)a0 fromSuggestions:(BOOL)a1;
- (void)logSearchResultsSelectedforApplication:(id)a0 fromSuggestions:(BOOL)a1;
- (void)logSearchActionWithDictionary:(id)a0;
- (id)eventKeyPrefix;

@end
