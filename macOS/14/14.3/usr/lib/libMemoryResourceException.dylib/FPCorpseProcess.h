@interface FPCorpseProcess : FPUserProcess

- (void)_gatherIdleExitStatus;
- (BOOL)_isAlive;
- (BOOL)_populateTask;

@end
