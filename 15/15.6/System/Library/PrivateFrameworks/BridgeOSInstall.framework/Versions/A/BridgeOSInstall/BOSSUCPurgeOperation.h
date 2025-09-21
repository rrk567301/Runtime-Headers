@interface BOSSUCPurgeOperation : BOSSUCOperation

- (id)description;
- (char)shouldRun;
- (void)bridgeOSSoftwareUpdateController:(id)a0 purgeComplete:(id)a1;
- (int)controllerEndingState;
- (char)controllerEndingStateMustMatchExactly;
- (int)controllerOperation;
- (char)shouldWaitForInProgressOperationToFinish;
- (void)startControllerOperation;

@end
