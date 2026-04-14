@class NSXPCConnection, NSXPCInterface;
@protocol SMDDebugProtocol;

@interface SMDebug_Client : NSObject

@property (retain) NSXPCInterface *daemonInterface;
@property (retain) NSXPCConnection *daemonConnection;
@property (retain) id<SMDDebugProtocol> daemonProxy;

- (void).cxx_destruct;
- (void)connectToDaemon;
- (id)init;
- (void)disableIdleExit;
- (void)allowLocalNetworkServer;
- (void)delaySpotlightIndexing;
- (void)forceSlowEnumeration;

@end
