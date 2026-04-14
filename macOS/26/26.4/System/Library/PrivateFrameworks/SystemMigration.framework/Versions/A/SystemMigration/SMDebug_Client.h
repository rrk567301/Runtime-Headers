@class NSXPCConnection, NSXPCInterface;
@protocol SMDDebugProtocol;

@interface SMDebug_Client : NSObject

@property (retain) NSXPCInterface *daemonInterface;
@property (retain) NSXPCConnection *daemonConnection;
@property (retain) id<SMDDebugProtocol> daemonProxy;

- (void)connectToDaemon;
- (void).cxx_destruct;
- (id)init;
- (void)disableIdleExit;
- (void)allowLocalNetworkServer;
- (void)delaySpotlightIndexing;
- (void)forceSlowEnumeration;

@end
