@class NSXPCListenerEndpoint;
@protocol NSXPCProxyCreating;

@interface SoftwareTransparency : NSObject

@property unsigned long long application;
@property (retain) NSXPCListenerEndpoint *endpoint;
@property (retain) id<NSXPCProxyCreating> proxyCreating;

+ (BOOL)retryable:(id)a0;
+ (id)tooManyRetries;

- (void).cxx_destruct;
- (id)connection;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithApplication:(unsigned long long)a0;
- (void)clearAllCFUWithCompletion:(id /* block */)a0;
- (void)dailyWithCompletion:(id /* block */)a0;
- (BOOL)gmEligibility;
- (void)postCFU:(id)a0 completion:(id /* block */)a1;
- (void)setDebugEndpoint:(id)a0;
- (void)setDebugProxyCreating:(id)a0;
- (void)sysdiagnoseInfo:(int)a0 completion:(id /* block */)a1;
- (void)sysdiagnoseInfoWithCompletion:(id /* block */)a0;
- (void)triggerConsistencyVerificationWithCompletion:(id /* block */)a0;
- (void)triggerMilestoneRefreshWithCompletion:(id /* block */)a0;
- (void)triggerPublicKeyBagRefreshWithCompletion:(id /* block */)a0;
- (void)verifyExpiringProofs:(id)a0 for:(id)a1 completion:(id /* block */)a2;
- (void)verifyExpiringProofs:(id)a0 for:(id)a1 counter:(int)a2 completion:(id /* block */)a3;
- (void)verifyProofs:(id)a0 for:(id)a1 completion:(id /* block */)a2;
- (void)waitStateMachineReadyWithCompletion:(id /* block */)a0;

@end
