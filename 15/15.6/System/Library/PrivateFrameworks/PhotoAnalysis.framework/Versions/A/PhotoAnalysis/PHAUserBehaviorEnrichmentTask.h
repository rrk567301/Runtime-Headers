@interface PHAUserBehaviorEnrichmentTask : PHAEnrichmentTask

- (int)priority;
- (double)period;
- (id)enrichmentProcessor;
- (id)taskClassDependencies;
- (void)timeoutFatal:(char)a0;

@end
