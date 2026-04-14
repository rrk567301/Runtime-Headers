@interface PHASearchEnrichmentTask : PHAEnrichmentTask

- (double)period;
- (int)priority;
- (id)taskClassDependencies;
- (void)timeoutFatal:(BOOL)a0;
- (BOOL)currentPlatformIsSupported;
- (id)incrementalKey;
- (id)enrichmentProcessor;
- (double)incrementalWindow;
- (BOOL)shouldRunIncrementallyWithGraphManager:(id)a0 incrementalChange:(id)a1 timeIntervalSinceNonIncrementalRun:(double)a2;

@end
