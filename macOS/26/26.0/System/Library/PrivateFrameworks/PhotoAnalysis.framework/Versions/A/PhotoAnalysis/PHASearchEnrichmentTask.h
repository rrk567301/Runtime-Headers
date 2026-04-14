@interface PHASearchEnrichmentTask : PHAEnrichmentTask

- (double)period;
- (id)taskClassDependencies;
- (int)priority;
- (BOOL)currentPlatformIsSupported;
- (void)timeoutFatal:(BOOL)a0;
- (id)incrementalKey;
- (id)enrichmentProcessor;
- (double)incrementalWindow;
- (BOOL)shouldRunIncrementallyWithGraphManager:(id)a0 incrementalChange:(id)a1 timeIntervalSinceNonIncrementalRun:(double)a2;

@end
