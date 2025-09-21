@interface BOSSUCCancelOperation : BOSSUCOperation

- (id)description;
- (void)bridgeOSSoftwareUpdateController:(id)a0 cancelComplete:(id)a1;
- (int)controllerEndingState;
- (char)controllerEndingStateMustMatchExactly;
- (int)controllerOperation;
- (char)shouldWaitForInProgressOperationToFinish;
- (void)startControllerOperation;

@end
