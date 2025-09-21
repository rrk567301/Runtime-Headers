@interface PHASearchEnrichmentTask : PHAEnrichmentTask

- (int)priority;
- (double)period;
- (char)currentPlatformIsSupported;
- (id)enrichmentProcessor;
- (id)incrementalKey;
- (double)incrementalWindow;
- (char)shouldRunIncrementallyWithGraphManager:(id)a0 incrementalChange:(id)a1 timeIntervalSinceNonIncrementalRun:(double)a2;
- (id)taskClassDependencies;
- (void)timeoutFatal:(char)a0;

@end
