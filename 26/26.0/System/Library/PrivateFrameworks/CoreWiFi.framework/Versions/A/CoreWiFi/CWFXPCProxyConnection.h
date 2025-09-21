@class CWFXPCProxy, NSObject;
@protocol OS_dispatch_queue;

@interface CWFXPCProxyConnection : NSObject <NSXPCProxyCreating> {
    CWFXPCProxy *_XPCProxy;
    CWFXPCProxy *_synchronousXPCProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy) id /* block */ invalidationHandler;

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)invalidate;
- (void)suspend;
- (void)resume;
- (void)activate;
- (void).cxx_destruct;
- (id)initWithForwardingTarget:(id)a0;

@end
