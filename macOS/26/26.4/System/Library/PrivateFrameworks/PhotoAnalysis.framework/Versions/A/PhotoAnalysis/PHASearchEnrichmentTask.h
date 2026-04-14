@interface PHASearchEnrichmentTask : PHAEnrichmentTask

- (double)period;
- (int)priority;
- (void)timeoutFatal:(BOOL)a0;
- (BOOL)currentPlatformIsSupported;
- (id)taskClassDependencies;
- (id)incrementalKey;
- (id)enrichmentProcessor;
- (double)incrementalWindow;
- (BOOL)shouldRunIncrementallyWithGraphManager:(id)a0 incrementalChange:(id)a1 timeIntervalSinceNonIncrementalRun:(double)a2;

@end
