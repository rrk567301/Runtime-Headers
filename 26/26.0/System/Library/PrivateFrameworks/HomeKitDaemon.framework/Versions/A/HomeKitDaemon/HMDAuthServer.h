@protocol HMDAuthServerDelegate;

@interface HMDAuthServer : HMFObject

@property (readonly, weak) id<HMDAuthServerDelegate> delegate;

- (void)sendPPIDInfoRequest:(id)a0 model:(id)a1 token:(id)a2 authFeatures:(unsigned long long)a3 uuid:(id)a4 context:(id)a5;
- (id)initWithDelegate:(id)a0;
- (void)getPPIDInfo:(id)a0 model:(id)a1 cert:(id)a2 context:(id)a3;
- (void)sendActivationRequest:(id)a0 uuid:(id)a1 context:(id)a2;
- (void)sendActivationConfirmation:(id)a0 uuid:(id)a1 context:(id)a2;
- (void).cxx_destruct;

@end
