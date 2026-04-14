@class NSDate;

@interface BOSSUCTransferBundleOperation : BOSSUCOperation

@property (retain) NSDate *lastProgressLogDate;

- (void).cxx_destruct;
- (id)description;
- (void)bridgeOSSoftwareUpdateController:(id)a0 updateBundleTransferComplete:(id)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 updateBundleTransferProgress:(double)a1;
- (unsigned long long)_updateBundleSize;
- (int)controllerEndingState;
- (int)controllerOperation;
- (id)initWithRequest:(id)a0 controller:(id)a1;
- (void)startControllerOperation;

@end
