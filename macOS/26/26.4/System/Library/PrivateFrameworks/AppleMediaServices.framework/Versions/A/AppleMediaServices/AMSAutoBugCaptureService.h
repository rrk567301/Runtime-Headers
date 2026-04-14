@class NSString;

@interface AMSAutoBugCaptureService : NSObject <AMSAutoBugCaptureServiceInterface>

@property (class, readonly) AMSAutoBugCaptureService *sharedService;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)captureSnapshotWithSignature:(id)a0 delay:(double)a1 events:(id)a2 payload:(id)a3 actions:(id)a4 completion:(id /* block */)a5;

@end
