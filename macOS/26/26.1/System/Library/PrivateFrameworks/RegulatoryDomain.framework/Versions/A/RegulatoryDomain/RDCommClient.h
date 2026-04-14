@class NSXPCConnection;
@protocol RDXPCProtocol;

@interface RDCommClient : NSObject <RDXPCProtocol> {
    NSXPCConnection *connection;
    id<RDXPCProtocol> server;
}

- (void)ping;
- (void)triggerUpdateToEligibilityEngine;
- (void)updatePeer:(id)a0 withInfo:(id)a1;
- (void)update:(long long)a0 withDict:(id)a1;
- (void)updatePeer:(id)a0 withCountryCode:(id)a1 priority:(int)a2 andTimestamp:(id)a3;
- (void)shareStatusWithPeers;
- (void)createCacheDirAtPath:(id)a0;
- (void)clearStatusSharedWithPeers;
- (void)updatePeer:(id)a0 withEstimate:(id)a1;
- (void).cxx_destruct;
- (void)clearDataCache;
- (void)setCacheLockState:(BOOL)a0;
- (void)update:(long long)a0 withCountryCode:(id)a1;
- (void)update:(long long)a0 withListOfCountryCodes:(id)a1;
- (id)init;

@end
