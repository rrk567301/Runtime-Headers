@class NSDate;

@interface BOSSUCTransferBrainOperation : BOSSUCOperation

@property (retain) NSDate *lastProgressLogDate;

- (void).cxx_destruct;
- (id)description;
- (void)bridgeOSSoftwareUpdateController:(id)a0 updateBrainTransferComplete:(id)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 updateBrainTransferProgress:(double)a1;
- (int)controllerEndingState;
- (int)controllerOperation;
- (void)startControllerOperation;

@end
