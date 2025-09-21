@interface PHAPeopleSuggestionEnrichmentTask : PHAEnrichmentTask

- (int)priority;
- (double)period;
- (id)enrichmentProcessor;
- (void)timeoutFatal:(char)a0;

@end
