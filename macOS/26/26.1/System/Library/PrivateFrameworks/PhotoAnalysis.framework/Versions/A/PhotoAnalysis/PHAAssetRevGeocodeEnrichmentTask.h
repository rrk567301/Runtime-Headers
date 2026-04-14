@interface PHAAssetRevGeocodeEnrichmentTask : PHAEnrichmentTask

- (void)timeoutFatal:(BOOL)a0;
- (double)period;
- (int)priority;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (id)taskClassDependencies;
- (id)enrichmentProcessor;

@end
