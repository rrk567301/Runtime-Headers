@class NSMutableDictionary, NSHashTable;

@interface NSXPCSharedListener : NSObject {
    NSHashTable *_delegates;
    void *reserved;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
}

@property (retain) NSMutableDictionary *listeners;

+ (void)warmUpClassNamed:(id)a0 inServiceNamed:(id)a1;
+ (id)endpointForReply:(id)a0 withListenerName:(id)a1 replyErrorCode:(long long *)a2;
+ (void)cacheFutureEndpointsForServiceNamed:(id)a0;
+ (void)purgeEndpointCache;
+ (id)endpointCache;
+ (void)setEndpointCache:(id)a0;
+ (void)_endpointForListenerNamed:(id)a0 fromServiceNamed:(id)a1 instanceIdentifier:(id)a2 queue:(id)a3 async:(BOOL)a4 completion:(id /* block */)a5;
+ (void)endpointForListenerNamed:(id)a0 fromServiceNamed:(id)a1 instanceIdentifier:(id)a2 queue:(id)a3 async:(BOOL)a4 completion:(id /* block */)a5;
+ (void)endpointForListenerNamed:(id)a0 fromServiceNamed:(id)a1 instanceIdentifier:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
+ (id)connectionForListenerNamed:(id)a0 fromServiceNamed:(id)a1;
+ (id)connectionForListenerNamed:(id)a0 fromServiceNamed:(id)a1 instanceIdentifier:(id)a2;
+ (void)listenerEndpointForService:(id)a0 listener:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)listenerEndpointForService:(id)a0 instanceIdentifier:(id)a1 listener:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
+ (void)connectToService:(id)a0 listener:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (id)connectToService:(id)a0 listener:(id)a1 error:(id *)a2;
+ (id)connectToService:(id)a0 instanceIdentifier:(id)a1 listener:(id)a2 error:(id *)a3;
+ (void)connectToService:(id)a0 instanceIdentifier:(id)a1 listener:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
+ (id)listenerEndpointForService:(id)a0 listener:(id)a1 error:(id *)a2;
+ (id)sharedServiceListener;
+ (void)_failedToWarmUpClassNamed:(id)a0 inServiceNamed:(id)a1 dueTo:(id)a2;
+ (void)getSDKVersionOfServiceNamed:(id)a0 reply:(id /* block */)a1;
+ (void)service:(id)a0 builtForPlatform:(unsigned int)a1 againstMinimumSDK:(unsigned int)a2 reply:(id /* block */)a3;

- (void)dealloc;
- (void)resume;
- (void)addDelegate:(id)a0;
- (void)didAcceptNewConnection:(id)a0;
- (void)whileHoldingLock:(id /* block */)a0;
- (void)addListener:(id)a0 withName:(id)a1;
- (id)listenerEndpointWithName:(id)a0;
- (BOOL)shouldAcceptNewConnection:(id)a0 forListenerNamed:(id)a1;
- (void)resumeAdditionalService:(id)a0;
- (void)resumeSubService:(id)a0;

@end
