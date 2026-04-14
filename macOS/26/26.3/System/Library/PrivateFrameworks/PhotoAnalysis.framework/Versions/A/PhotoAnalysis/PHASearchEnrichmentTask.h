@interface PHASearchEnrichmentTask : PHAEnrichmentTask

- (double)period;
- (void)timeoutFatal:(BOOL)a0;
- (id)taskClassDependencies;
- (int)priority;
- (id)incrementalKey;
- (BOOL)currentPlatformIsSupported;
- (id)enrichmentProcessor;
- (double)incrementalWindow;
- (BOOL)shouldRunIncrementallyWithGraphManager:(id)a0 incrementalChange:(id)a1 timeIntervalSinceNonIncrementalRun:(double)a2;

@end
