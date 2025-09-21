@class TRSession;

@interface HMTRSession : NSObject <HMDeviceSetupOperationTransport>

@property (readonly, weak) TRSession *session;

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)sendRequestData:(id)a0 qualityOfService:(long long)a1 responseHandler:(id /* block */)a2;

@end
