@class NSDate, NSXPCConnection, MTXPCConnectionInfo;
@protocol NAScheduler;

@interface MTXPCConnectionProvider : NSObject {
    NSXPCConnection *_connection;
    BOOL _alive;
}

@property (retain, nonatomic) id<NAScheduler> callbackScheduler;
@property (retain, nonatomic) MTXPCConnectionInfo *info;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ reconnectHandler;
@property (retain, nonatomic) NSDate *lastLifecycleNotification;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } connectionLock;

+ (id)providerWithConnectionInfo:(id)a0 reconnectHandler:(id /* block */)a1;
+ (id)providerWithConnectionInfo:(id)a0 errorHandler:(id /* block */)a1;

- (void)invalidate;
- (void)performRemoteBlock:(id /* block */)a0 withErrorHandler:(id /* block */)a1 isSynchronous:(BOOL)a2;
- (void)_retryConnectionWithRecover:(BOOL)a0;
- (void)performRemoteBlock:(id /* block */)a0;
- (id)_retryConnection;
- (id)description;
- (id)_remoteObjectProxyWithXPCConnectionProvider:(id /* block */)a0 remoteObjectProxyProvider:(id /* block */)a1 errorHandler:(id /* block */)a2;
- (void)_didInvalidateConnection;
- (id)_syncRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)connection;
- (void)didReceiveLifecycleNotification;
- (void).cxx_destruct;
- (id)initWithConnectionInfo:(id)a0 errorHandler:(id /* block */)a1 reconnectHandler:(id /* block */)a2;
- (id)_connectionRebuildingIfNecessary;
- (void)dealloc;
- (id)_asyncRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_didInterruptConnection;
- (void)performRemoteBlock:(id /* block */)a0 withErrorHandler:(id /* block */)a1;

@end
