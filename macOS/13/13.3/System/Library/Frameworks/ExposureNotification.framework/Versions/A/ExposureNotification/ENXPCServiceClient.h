@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface ENXPCServiceClient : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_xpc_object> *_xpcConnection;
    BOOL _invalidated;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *testListenerEndpoint;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_xpcReceivedEvent:(id)a0;
- (id)getXPCConnectionAndReturnError:(id *)a0;
- (id)_ensureXPCStartedAndReturnError:(id *)a0;
- (void)_invalidateForced:(BOOL)a0;

@end
