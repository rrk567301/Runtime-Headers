@class NSArray;

@interface NEDNSProxyProvider : NEProvider

@property (retain) NSArray *systemDNSSettings;

- (void).cxx_destruct;
- (void)cancelProxyWithError:(id)a0;
- (char)handleNewFlow:(id)a0;
- (char)handleNewUDPFlow:(id)a0 initialRemoteEndpoint:(id)a1;
- (char)handleNewUDPFlow:(id)a0 initialRemoteFlowEndpoint:(id)a1;
- (void)startProxyWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopProxyWithReason:(long long)a0 completionHandler:(id /* block */)a1;

@end
