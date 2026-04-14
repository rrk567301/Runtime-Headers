@protocol LACUserInterfacePresenting;

@interface LACOnenessController : LACCompanionAuthenticationController

@property (nonatomic, readonly) id<LACUserInterfacePresenting> uiPresenter;
@property (nonatomic, readonly) long long companion;

- (void).cxx_destruct;
- (BOOL)canAuthenticateRequest:(id)a0 availabilityError:(id)a1 error:(id *)a2;
- (id)initWithAuthenticator:(id)a0 environmentProvider:(id)a1 sessionMonitor:(id)a2 replyQueue:(id)a3;
- (id)initWithAuthenticator:(id)a0 environmentProvider:(id)a1 sessionMonitor:(id)a2 uiPresenter:(id)a3 replyQueue:(id)a4;
- (id)mapError:(id)a0;
- (void)postProcessRequest:(id)a0 result:(id)a1 completion:(id /* block */)a2;

@end
