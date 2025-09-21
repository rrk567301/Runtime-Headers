@interface FPCorpseProcess : FPUserProcess

- (void)_gatherProcessState;
- (BOOL)_populateTask;
- (BOOL)_isAlive;

@end
