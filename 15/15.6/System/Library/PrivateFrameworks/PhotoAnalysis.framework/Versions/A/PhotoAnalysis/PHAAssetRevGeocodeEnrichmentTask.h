@interface PHAAssetRevGeocodeEnrichmentTask : PHAEnrichmentTask

- (int)priority;
- (double)period;
- (id)enrichmentProcessor;
- (char)shouldRunWithGraphManager:(id)a0;
- (id)taskClassDependencies;
- (void)timeoutFatal:(char)a0;

@end
