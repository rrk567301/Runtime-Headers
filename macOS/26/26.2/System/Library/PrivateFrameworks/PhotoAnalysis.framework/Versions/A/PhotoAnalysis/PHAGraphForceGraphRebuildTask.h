@interface PHAGraphForceGraphRebuildTask : PHAGraphRebuildTask

- (double)period;
- (int)priority;
- (id)taskClassDependencies;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (id)name;
- (BOOL)currentPlatformIsSupported;
- (id)incrementalKey;

@end
