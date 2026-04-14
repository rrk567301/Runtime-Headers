@interface PHAAssetRevGeocodeEnrichmentTask : PHAEnrichmentTask

- (double)period;
- (void)timeoutFatal:(BOOL)a0;
- (id)taskClassDependencies;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (int)priority;
- (id)enrichmentProcessor;

@end
