@class NSXPCConnection;
@protocol RDXPCProtocol;

@interface RDCommClient : NSObject <RDXPCProtocol> {
    NSXPCConnection *connection;
    id<RDXPCProtocol> server;
}

- (id)init;
- (void).cxx_destruct;
- (void)ping;
- (void)update:(long long)a0 withCountryCode:(id)a1;
- (void)updatePeer:(id)a0 withEstimate:(id)a1;
- (void)updatePeer:(id)a0 withCountryCode:(id)a1 priority:(int)a2 andTimestamp:(id)a3;
- (void)clearDataCache;
- (void)shareStatusWithPeers;
- (void)clearStatusSharedWithPeers;
- (void)createCacheDirAtPath:(id)a0;

@end
