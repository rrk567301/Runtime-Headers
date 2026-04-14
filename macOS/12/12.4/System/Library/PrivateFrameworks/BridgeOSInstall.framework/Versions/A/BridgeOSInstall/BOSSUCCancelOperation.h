@interface BOSSUCCancelOperation : BOSSUCOperation

- (id)description;
- (void)bridgeOSSoftwareUpdateController:(id)a0 cancelComplete:(id)a1;
- (BOOL)controllerEndingStateMustMatchExactly;
- (int)controllerEndingState;
- (int)controllerOperation;
- (BOOL)shouldWaitForInProgressOperationToFinish;
- (void)startControllerOperation;

@end
