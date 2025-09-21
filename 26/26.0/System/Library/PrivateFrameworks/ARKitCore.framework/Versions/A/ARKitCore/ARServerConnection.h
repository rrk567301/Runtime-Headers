@class NSXPCListenerEndpoint, NSXPCConnection, NSXPCInterface, ARWeakReference;
@protocol ARServerConnectionDelegate;

@interface ARServerConnection : NSObject <NSXPCProxyCreating> {
    id /* block */ _connectionCreationBlock;
    ARWeakReference *_exportedObjectWeakReference;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<ARServerConnectionDelegate> delegate;
@property (retain, nonatomic) NSXPCInterface *exportedInterface;
@property (weak, nonatomic) id exportedObject;
@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface;
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;

- (void)setInvalidationHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (void)invalidate;
- (id)initWithListenerEndpoint:(id)a0;
- (void)setInterruptionHandler:(id /* block */)a0;
- (id /* block */)invalidationHandler;
- (id /* block */)interruptionHandler;
- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 options:(unsigned long long)a1;
- (id)initWithServiceName:(id)a0 options:(unsigned long long)a1 queue:(id)a2;
- (void)serverConnectionInterrupted;
- (void)serverConnectionInvalidated;

@end
