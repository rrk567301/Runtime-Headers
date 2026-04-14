@class NSDate;

@interface BOSSUCTransferBrainOperation : BOSSUCOperation

@property (retain) NSDate *lastProgressLogDate;

- (id)description;
- (void).cxx_destruct;
- (void)bridgeOSSoftwareUpdateController:(id)a0 updateBrainTransferComplete:(id)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 updateBrainTransferProgress:(double)a1;
- (int)controllerOperation;
- (void)startControllerOperation;
- (int)controllerEndingState;

@end
