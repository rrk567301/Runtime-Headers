@interface PHAPeopleSuggestionEnrichmentTask : PHAEnrichmentTask

- (void)timeoutFatal:(BOOL)a0;
- (double)period;
- (int)priority;
- (id)enrichmentProcessor;

@end
