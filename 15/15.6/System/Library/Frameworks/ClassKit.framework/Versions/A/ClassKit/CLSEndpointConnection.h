@class NSXPCListenerEndpoint, NSString, NSXPCConnection;

@interface CLSEndpointConnection : NSObject <CLSClientDelegate, NSLocking> {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    NSXPCConnection *_serverConnection;
    NSXPCListenerEndpoint *_endpoint;
    char _connectionBorked;
    char _interrupted;
}

@property (class, readonly, nonatomic) CLSEndpointConnection *sharedInstance;
@property (class, readonly, nonatomic) NSString *classKitEnvironment;
@property (class, readonly, nonatomic, getter=isInDevelopmentEnvironment) char inDevelopmentEnvironment;
@property (class, readonly, nonatomic, getter=isClassKitEnabled) char classKitEnabled;
@property (class, readonly, nonatomic, getter=isAllowedToMakeXPCCalls) char allowedToMakeXPCCalls;

@property (copy, nonatomic) NSString *overrideBundleIdentifier;
@property (copy, nonatomic) id /* block */ onInterupt;
@property (copy, nonatomic) id /* block */ onConnect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceForEndpoint:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)lock;
- (void)unlock;
- (id)initWithEndpoint:(id)a0;
- (void)addBarrierBlock:(id /* block */)a0;
- (void)connect;
- (void)accountChanged;
- (void)connectionInterrupted:(id)a0;
- (id)serverConnection;
- (id)server:(id /* block */)a0;
- (void)_registerForDarwinNotifications;
- (id)syncDataServer:(id /* block */)a0;
- (void)_updateBundleIdentifier:(id)a0 forConnection:(id)a1 completion:(id /* block */)a2;
- (void)connectionBorked:(id)a0;
- (id)dataServer:(id /* block */)a0;
- (void)deleteAppWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)devModeChanged;
- (char)isBorked;
- (void)listAppsWithCompletion:(id /* block */)a0;
- (void)setOverrideBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)syncServer:(id /* block */)a0;
- (id)syncUtilityServer:(id /* block */)a0;
- (id)utilityServer:(id /* block */)a0;

@end
