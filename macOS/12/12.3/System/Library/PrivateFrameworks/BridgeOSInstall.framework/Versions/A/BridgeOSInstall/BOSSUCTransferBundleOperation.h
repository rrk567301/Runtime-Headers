@class NSDate;

@interface BOSSUCTransferBundleOperation : BOSSUCOperation

@property (retain) NSDate *lastProgressLogDate;

- (id)description;
- (void).cxx_destruct;
- (void)bridgeOSSoftwareUpdateController:(id)a0 updateBundleTransferComplete:(id)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 updateBundleTransferProgress:(double)a1;
- (id)initWithRequest:(id)a0 controller:(id)a1;
- (int)controllerEndingState;
- (int)controllerOperation;
- (void)startControllerOperation;
- (unsigned long long)_updateBundleSize;

@end
