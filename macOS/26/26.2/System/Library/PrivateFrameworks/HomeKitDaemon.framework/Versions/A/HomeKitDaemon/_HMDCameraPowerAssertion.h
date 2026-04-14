@class HMDCameraPowerAssertionHandler, HMDCameraSessionInfo;

@interface _HMDCameraPowerAssertion : HMFObject

@property (readonly, weak, nonatomic) HMDCameraPowerAssertionHandler *assertionHandler;
@property (readonly, nonatomic) HMDCameraSessionInfo *remoteRequestHandlerSessionInfo;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPowerAssertionHandler:(id)a0 remoteRequestHandlerSessionInfo:(id)a1;

@end
