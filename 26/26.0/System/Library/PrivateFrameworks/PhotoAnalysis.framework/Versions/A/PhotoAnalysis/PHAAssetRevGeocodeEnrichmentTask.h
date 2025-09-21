@interface PHAAssetRevGeocodeEnrichmentTask : PHAEnrichmentTask

- (double)period;
- (id)taskClassDependencies;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (int)priority;
- (void)timeoutFatal:(BOOL)a0;
- (id)enrichmentProcessor;

@end
