@interface PHAPeopleSuggestionEnrichmentTask : PHAEnrichmentTask

- (double)period;
- (void)timeoutFatal:(BOOL)a0;
- (int)priority;
- (id)enrichmentProcessor;

@end
