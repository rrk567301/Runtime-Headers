@class NSXPCListenerEndpoint, NSString, NSObject, OS_xpc_remote_connection;
@protocol OS_xpc_object, OS_dispatch_queue, NSXPCListenerDelegate;

@interface NSXPCListener : NSObject {
    union { NSObject<OS_xpc_object> *xpc; OS_xpc_remote_connection *remote; } _connection;
    NSObject<OS_dispatch_queue> *_userQueue;
    _Atomic id _delegate;
    NSString *_serviceName;
    unsigned long long _state;
    unsigned char _remote;
}

@property (weak) id<NSXPCListenerDelegate> delegate;
@property (readonly, retain) NSXPCListenerEndpoint *endpoint;

+ (id)serviceListener;
+ (id)anonymousListener;
+ (void)enableTransactions;
+ (id)_UUID;

- (id)_initWithRemoteName:(id)a0;
- (void)setOptions:(unsigned long long)a0;
- (id)initWithMachServiceName:(id)a0;
- (void)dealloc;
- (id)_queue;
- (void)invalidate;
- (void)stop;
- (void)setConnectionCodeSigningRequirement:(id)a0;
- (id)__initWithoutRemoteConnection;
- (id)_xpcConnection;
- (void)suspend;
- (void)_setQueue:(id)a0;
- (void)resume;
- (void)__receiveRemoteConnection:(id)a0;
- (id)_initShared;
- (id)initWithServiceName:(id)a0;
- (id)description;
- (id)serviceName;
- (void)activate;

@end
