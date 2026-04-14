@interface PHAGraphForceGraphRebuildTask : PHAGraphRebuildTask

- (double)period;
- (id)name;
- (int)priority;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (BOOL)currentPlatformIsSupported;
- (id)taskClassDependencies;
- (id)incrementalKey;

@end
