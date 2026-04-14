@class NSString, NSMutableDictionary, GEOApplicationAuditToken, GEOXPCConnection, GEODaemon;
@protocol NSObject;

@interface GEOPeer : NSObject {
    GEODaemon *_daemon;
    NSMutableDictionary *_entitlementValueCache;
    id<NSObject> _peerTransaction;
    id<NSObject> _preloadingTransaction;
}

@property (copy, nonatomic) NSString *debugIdentifier;
@property (copy, nonatomic) NSString *serverIdentifier;
@property (readonly, nonatomic) GEOXPCConnection *connection;
@property (readonly, nonatomic) GEOApplicationAuditToken *auditToken;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *peerID;
@property (readonly, nonatomic) unsigned long long serverType;
@property (nonatomic) BOOL preloading;
@property (nonatomic) BOOL preloadingExclusively;
@property (readonly, nonatomic) BOOL isLocationd;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)valueForEntitlement:(id)a0;
- (void)_handleEvent:(id)a0;
- (BOOL)hasEntitlement:(id)a0;
- (void)_updateConnectionDebugIdentifier;
- (id)initWithConnection:(id)a0 daemon:(id)a1;
- (BOOL)isForServerIdentifier:(id)a0;
- (BOOL)isForServerType:(unsigned long long)a0;

@end
