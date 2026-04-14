@interface PHAGraphForceGraphRebuildTask : PHAGraphRebuildTask

- (double)period;
- (id)taskClassDependencies;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (id)name;
- (int)priority;
- (id)incrementalKey;
- (BOOL)currentPlatformIsSupported;

@end
