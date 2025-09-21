@class GEORingThrottler, NSString, NSMutableDictionary, GEOApplicationAuditToken, GEOXPCConnection, GEODaemon, GEOServer;
@protocol NSObject;

@interface GEOPeer : NSObject {
    GEODaemon *_daemon;
    NSMutableDictionary *_entitlementValueCache;
    id<NSObject> _peerTransaction;
    id<NSObject> _preloadingTransaction;
    GEOServer *_server;
    GEORingThrottler *_throttler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _throttlerLock;
}

@property (copy, nonatomic) NSString *debugIdentifier;
@property (copy, nonatomic) NSString *serverIdentifier;
@property (readonly, nonatomic) GEOXPCConnection *connection;
@property (readonly, nonatomic) GEOApplicationAuditToken *auditToken;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *peerID;
@property (readonly, nonatomic) BOOL canPeerLikelyReadOurCache;
@property (readonly, nonatomic) unsigned long long serverType;
@property (nonatomic) BOOL wasThrottled;
@property (nonatomic) BOOL preloading;
@property (nonatomic) BOOL preloadingExclusively;
@property (readonly, nonatomic) BOOL isLocationd;

- (void)dealloc;
- (void)_handleEvent:(id)a0;
- (BOOL)hasEntitlement:(id)a0;
- (id)valueForEntitlement:(id)a0;
- (id)description;
- (BOOL)isForServerIdentifier:(id)a0;
- (BOOL)shouldThrottleMessageForServer:(id)a0;
- (void)_updateConnectionDebugIdentifier;
- (BOOL)isForServerType:(unsigned long long)a0;
- (id)initWithConnection:(id)a0 daemon:(id)a1;
- (void).cxx_destruct;

@end
