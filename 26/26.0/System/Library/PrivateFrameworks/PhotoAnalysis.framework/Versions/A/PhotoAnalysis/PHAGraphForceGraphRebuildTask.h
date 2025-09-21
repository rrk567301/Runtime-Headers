@interface PHAGraphForceGraphRebuildTask : PHAGraphRebuildTask

- (double)period;
- (id)taskClassDependencies;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (int)priority;
- (BOOL)currentPlatformIsSupported;
- (id)name;
- (id)incrementalKey;

@end
