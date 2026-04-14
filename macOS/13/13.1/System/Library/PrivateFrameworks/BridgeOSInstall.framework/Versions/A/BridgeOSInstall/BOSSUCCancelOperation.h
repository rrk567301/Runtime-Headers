@interface BOSSUCCancelOperation : BOSSUCOperation

- (id)description;
- (void)bridgeOSSoftwareUpdateController:(id)a0 cancelComplete:(id)a1;
- (int)controllerOperation;
- (BOOL)controllerEndingStateMustMatchExactly;
- (BOOL)shouldWaitForInProgressOperationToFinish;
- (void)startControllerOperation;
- (int)controllerEndingState;

@end
