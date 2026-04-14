@interface GKDaemonProxyServiceHelper : NSObject <GKTransportServiceHelper>

- (oneway void)initiateRelayRequest:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)revokePseudonym:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)updateRelayRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
