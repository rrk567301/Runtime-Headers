@interface FPCorpseProcess : FPUserProcess

- (BOOL)_populateTask;
- (void)_gatherIdleExitStatus;
- (id)_gatherOwnedVmObjects;
- (BOOL)_isAlive;

@end
