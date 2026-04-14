@interface SMDDebugCommands_XPCClientConnection : SMDXPCClientConnection <SMDDebugProtocol>

+ (id)daemonProtocolInterface;
+ (id)daemonProtocolInterfaceInstance;

- (void)disableIdleExit;
- (void)delaySpotlightIndexing;
- (void)forceSlowEnumeration;
- (void)allowLocalNetworkServer;
- (void)interfacesAvailable:(id /* block */)a0;

@end
