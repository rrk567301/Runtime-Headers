@class NSXPCConnection;
@protocol LACAgentProxyXPC, LACAgentProxyXPCWrapperDelegate;

@interface LACAgentProxyXPCWrapper : NSObject <LACAgentProxyXPC> {
    NSXPCConnection *_connection;
    id<LACAgentProxyXPC> _agentProxy;
}

@property (weak, nonatomic) id<LACAgentProxyXPCWrapperDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)dumpStatusWithCompletion:(id /* block */)a0;
- (void)queryUuid:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerAcmExternalizedFormHash:(unsigned long long)a0 uuid:(id)a1 completionHandler:(id /* block */)a2;
- (void)registerContextWithUuid:(id)a0 ownership:(id)a1 description:(id)a2 originalUuid:(id)a3 originalAcmHash:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (void)remoteAuthenticationInProgressWithPriority:(long long)a0 reply:(id /* block */)a1;
- (void)setFUSDisabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_agentProxy:(id /* block */)a0;

@end
