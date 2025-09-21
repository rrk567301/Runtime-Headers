@interface PHAPeopleSuggestionEnrichmentTask : PHAEnrichmentTask

- (double)period;
- (int)priority;
- (void)timeoutFatal:(BOOL)a0;
- (id)enrichmentProcessor;

@end
