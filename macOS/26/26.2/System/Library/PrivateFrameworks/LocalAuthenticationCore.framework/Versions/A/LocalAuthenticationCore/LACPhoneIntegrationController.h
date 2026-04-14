@interface LACPhoneIntegrationController : LACCompanionAuthenticationController

@property (nonatomic, readonly) long long companion;

- (BOOL)canAuthenticateRequest:(id)a0 availabilityError:(id)a1 error:(id *)a2;
- (id)initWithAuthenticator:(id)a0 clientInfoProvider:(id)a1 environmentProvider:(id)a2 sessionMonitor:(id)a3 replyQueue:(id)a4;
- (void)processRequest:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;

@end
