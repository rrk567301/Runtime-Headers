@interface PHAGraphForceGraphRebuildTask : PHAGraphRebuildTask

- (double)period;
- (int)priority;
- (BOOL)currentPlatformIsSupported;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (id)incrementalKey;
- (id)name;
- (id)taskClassDependencies;

@end
