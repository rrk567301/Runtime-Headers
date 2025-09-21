@class GEONavdClientInfo, NSMutableDictionary, NSXPCConnection;

@interface GEONavdPeer : NSObject {
    NSMutableDictionary *_entitlementCache;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) GEONavdClientInfo *clientInfo;
@property (nonatomic) char expectingUpdates;

- (id)description;
- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0;
- (char)hasEntitlement:(id)a0;
- (void)updateConnection:(id)a0;

@end
