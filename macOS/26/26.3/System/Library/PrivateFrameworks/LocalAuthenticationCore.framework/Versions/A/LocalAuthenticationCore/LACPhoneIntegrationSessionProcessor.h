@protocol LACCompanionAuthenticationSessionMonitoring, LACCompanionAuthenticationEnvironmentProviding;

@interface LACPhoneIntegrationSessionProcessor : NSObject <LACEvaluationRequestProcessor>

@property (nonatomic, readonly) id<LACCompanionAuthenticationEnvironmentProviding> environmentProvider;
@property (nonatomic, readonly) id<LACCompanionAuthenticationSessionMonitoring> monitor;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canProcessRequest:(id)a0;
- (id)initWithEnvironmentProvider:(id)a0 monitor:(id)a1;
- (void)processRequest:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;

@end
