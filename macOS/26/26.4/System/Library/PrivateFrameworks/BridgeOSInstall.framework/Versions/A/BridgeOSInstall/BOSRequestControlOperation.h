@class NSObject;
@protocol OS_dispatch_semaphore;

@interface BOSRequestControlOperation : BOSOperation

@property (retain) NSObject<OS_dispatch_semaphore> *doneWaitingForUpdateControl;

- (void)main;
- (void)cancel;
- (void).cxx_destruct;
- (id)description;
- (void)bridgeOSSoftwareUpdateController:(id)a0 updateControlGranted:(BOOL)a1 error:(id)a2;
- (id)initWithRequest:(id)a0 controller:(id)a1;

@end
