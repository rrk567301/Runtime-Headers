@interface PHAAssetRevGeocodeEnrichmentTask : PHAEnrichmentTask

- (double)period;
- (int)priority;
- (id)taskClassDependencies;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (void)timeoutFatal:(BOOL)a0;
- (id)enrichmentProcessor;

@end
