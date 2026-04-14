@interface PHASearchEnrichmentTask : PHAEnrichmentTask

- (void)timeoutFatal:(BOOL)a0;
- (double)period;
- (int)priority;
- (BOOL)currentPlatformIsSupported;
- (id)incrementalKey;
- (id)taskClassDependencies;
- (id)enrichmentProcessor;
- (double)incrementalWindow;
- (BOOL)shouldRunIncrementallyWithGraphManager:(id)a0 incrementalChange:(id)a1 timeIntervalSinceNonIncrementalRun:(double)a2;

@end
