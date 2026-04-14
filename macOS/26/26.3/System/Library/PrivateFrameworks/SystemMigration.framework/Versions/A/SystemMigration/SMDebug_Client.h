@class NSXPCConnection, NSXPCInterface;
@protocol SMDDebugProtocol;

@interface SMDebug_Client : NSObject

@property (retain) NSXPCInterface *daemonInterface;
@property (retain) NSXPCConnection *daemonConnection;
@property (retain) id<SMDDebugProtocol> daemonProxy;

- (id)init;
- (void)connectToDaemon;
- (void).cxx_destruct;
- (void)disableIdleExit;
- (void)allowLocalNetworkServer;
- (void)delaySpotlightIndexing;
- (void)forceSlowEnumeration;

@end
