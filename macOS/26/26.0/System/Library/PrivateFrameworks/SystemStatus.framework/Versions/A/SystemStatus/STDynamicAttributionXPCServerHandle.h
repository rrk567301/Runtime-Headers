@class NSString, NSMutableSet, NSXPCConnection;
@protocol STServerLaunchObservable;

@interface STDynamicAttributionXPCServerHandle : NSObject <STDynamicAttributionXPCClientProtocol, STServerLaunchObserver, STDynamicActivityAttributionServerHandle> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCConnection *_lock_connection;
    id /* block */ _lock_connectionProvider;
    NSMutableSet *_lock_clients;
    id<STServerLaunchObservable> _serverLaunchObservable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMachServiceServerHandle;

- (void)setAttributionWebsiteString:(id)a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1 forClient:(id)a2;
- (void)dealloc;
- (void)setAttributionLocalizableKey:(id)a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1 forClient:(id)a2;
- (void)setLocalizableAttributionKey:(id)a0 andApplication:(id)a1 forClient:(id)a2;
- (void)unsubscribeFromUpdates:(id)a0;
- (void)didObserveServerLaunch:(id)a0;
- (void)currentAttributionsDidChange:(id)a0;
- (id)init;
- (void)setAttributionStringWithFormat:(id)a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1 forClient:(id)a2;
- (void)subscribeToUpdates:(id)a0;
- (void).cxx_destruct;
- (id)initWithXPCConnectionProvider:(id /* block */)a0;

@end
