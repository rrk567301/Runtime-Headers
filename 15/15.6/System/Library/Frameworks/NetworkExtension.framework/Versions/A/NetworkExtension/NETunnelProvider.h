@class NEVPNProtocol, NSArray, NSString;

@interface NETunnelProvider : NEProvider <NSExtensionRequestHandling> {
    char _reasserting;
    char _onDemandEnabled;
    char _gracefulShutdown;
}

@property (retain) NEVPNProtocol *protocolConfiguration;
@property (retain) NSArray *appRules;
@property (readonly) long long routingMethod;
@property char reasserting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleAppMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)setTunnelNetworkSettings:(id)a0 completionHandler:(id /* block */)a1;

@end
