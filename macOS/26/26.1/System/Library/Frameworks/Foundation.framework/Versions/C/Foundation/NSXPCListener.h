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

+ (id)_UUID;
+ (void)enableTransactions;
+ (id)serviceListener;
+ (id)anonymousListener;

- (void)__receiveRemoteConnection:(id)a0;
- (id)_initShared;
- (void)_setQueue:(id)a0;
- (void)setOptions:(unsigned long long)a0;
- (void)setConnectionCodeSigningRequirement:(id)a0;
- (void)resume;
- (void)suspend;
- (id)__initWithoutRemoteConnection;
- (void)invalidate;
- (id)initWithMachServiceName:(id)a0;
- (id)serviceName;
- (void)activate;
- (id)initWithServiceName:(id)a0;
- (id)_xpcConnection;
- (id)_queue;
- (id)_initWithRemoteName:(id)a0;
- (id)description;
- (void)dealloc;
- (void)stop;

@end
