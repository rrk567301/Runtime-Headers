@interface PHAAssetRevGeocodeEnrichmentTask : PHAEnrichmentTask

- (int)priority;
- (double)period;
- (id)enrichmentProcessor;
- (id)taskClassDependencies;
- (void)timeoutFatal:(BOOL)a0;

@end
