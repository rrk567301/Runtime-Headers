@class OS_dispatch_queue;
@protocol LACCompanionAuthenticationEnvironmentProviding, LACCompanionAuthenticationSessionMonitoring, LACCompanionAuthenticationCoordinating, LACClientInfoProviding;

@interface LACCompanionAuthenticationController : NSObject <LACCompanionAuthenticationSessionMonitorObserver, LACCompanionAuthenticationControlling, LACEvaluationRequestProcessor, LACDomainStateProviding> {
    void /* unknown type, empty encoding */ pendingRequests;
}

@property (nonatomic, readonly) id<LACCompanionAuthenticationCoordinating> authenticator;
@property (nonatomic, readonly) id<LACClientInfoProviding> clientInfoProvider;
@property (nonatomic, readonly) id<LACCompanionAuthenticationEnvironmentProviding> environmentProvider;
@property (nonatomic, readonly) id<LACCompanionAuthenticationSessionMonitoring> sessionMonitor;
@property (nonatomic, readonly) OS_dispatch_queue *replyQueue;
@property (nonatomic, readonly) long long companion;
@property (nonatomic, readonly) BOOL isFeatureSupported;
@property (nonatomic, readonly) BOOL isSessionActive;

- (id)init;
- (void)cancelAllRequests;
- (void).cxx_destruct;
- (BOOL)canAuthenticateRequest:(id)a0 availabilityError:(id)a1 error:(id *)a2;
- (BOOL)canProcessRequest:(id)a0;
- (void)cancelRequestsForContextID:(id)a0;
- (void)companionAuthenticationSessionMonitorDidUpdate:(id)a0;
- (id)configureRequestForPreflight:(id)a0;
- (void)domainStateForRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithAuthenticator:(id)a0 clientInfoProvider:(id)a1 environmentProvider:(id)a2 sessionMonitor:(id)a3 replyQueue:(id)a4;
- (id)mapError:(id)a0;
- (void)postProcessRequest:(id)a0 result:(id)a1 completion:(id /* block */)a2;
- (void)processRequest:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;

@end
