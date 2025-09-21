@interface NEAppProxyProvider : NETunnelProvider

@property (nonatomic) unsigned long long maxWriteSize;

- (void)cancelProxyWithError:(id)a0;
- (void)fetchFlowStatesWithCompletionHandler:(id /* block */)a0;
- (char)handleNewFlow:(id)a0;
- (char)handleNewUDPFlow:(id)a0 initialRemoteEndpoint:(id)a1;
- (char)handleNewUDPFlow:(id)a0 initialRemoteFlowEndpoint:(id)a1;
- (void)startProxyWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopProxyWithReason:(long long)a0 completionHandler:(id /* block */)a1;

@end
