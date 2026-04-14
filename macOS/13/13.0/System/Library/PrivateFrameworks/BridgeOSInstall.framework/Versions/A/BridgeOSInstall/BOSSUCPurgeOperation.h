@interface BOSSUCPurgeOperation : BOSSUCOperation

- (id)description;
- (BOOL)shouldRun;
- (void)bridgeOSSoftwareUpdateController:(id)a0 purgeComplete:(id)a1;
- (int)controllerOperation;
- (BOOL)controllerEndingStateMustMatchExactly;
- (BOOL)shouldWaitForInProgressOperationToFinish;
- (void)startControllerOperation;
- (int)controllerEndingState;

@end
