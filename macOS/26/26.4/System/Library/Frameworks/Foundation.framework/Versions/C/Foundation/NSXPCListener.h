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
+ (id)_UUID;
+ (void)enableTransactions;
+ (id)anonymousListener;

- (void)stop;
- (void)setConnectionCodeSigningRequirement:(id)a0;
- (void)resume;
- (id)initWithMachServiceName:(id)a0;
- (void)activate;
- (void)setOptions:(unsigned long long)a0;
- (void)_setQueue:(id)a0;
- (id)initWithServiceName:(id)a0;
- (id)__initWithoutRemoteConnection;
- (id)serviceName;
- (void)suspend;
- (id)_initShared;
- (id)_initWithRemoteName:(id)a0;
- (void)invalidate;
- (id)_queue;
- (void)__receiveRemoteConnection:(id)a0;
- (id)description;
- (id)_xpcConnection;
- (void)dealloc;

@end
