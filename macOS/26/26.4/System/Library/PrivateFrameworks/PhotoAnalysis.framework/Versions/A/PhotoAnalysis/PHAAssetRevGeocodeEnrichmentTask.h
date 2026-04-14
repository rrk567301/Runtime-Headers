@interface PHAAssetRevGeocodeEnrichmentTask : PHAEnrichmentTask

- (double)period;
- (int)priority;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (void)timeoutFatal:(BOOL)a0;
- (id)taskClassDependencies;
- (id)enrichmentProcessor;

@end
