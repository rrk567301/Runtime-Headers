@interface PHAGraphForceGraphRebuildTask : PHAGraphRebuildTask

- (id)name;
- (int)priority;
- (double)period;
- (char)currentPlatformIsSupported;
- (id)incrementalKey;
- (char)shouldRunWithGraphManager:(id)a0;
- (id)taskClassDependencies;

@end
