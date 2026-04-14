@interface FPCorpseProcess : FPUserProcess

- (BOOL)_populateTask;
- (void)_gatherProcessState;
- (BOOL)_isAlive;

@end
