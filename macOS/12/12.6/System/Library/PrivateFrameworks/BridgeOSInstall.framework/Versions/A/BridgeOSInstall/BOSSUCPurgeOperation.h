@interface BOSSUCPurgeOperation : BOSSUCOperation

- (id)description;
- (BOOL)shouldRun;
- (void)bridgeOSSoftwareUpdateController:(id)a0 purgeComplete:(id)a1;
- (BOOL)controllerEndingStateMustMatchExactly;
- (int)controllerEndingState;
- (int)controllerOperation;
- (BOOL)shouldWaitForInProgressOperationToFinish;
- (void)startControllerOperation;

@end
