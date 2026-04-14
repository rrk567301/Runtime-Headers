@class CWFXPCProxy, NSObject;
@protocol OS_dispatch_queue;

@interface CWFXPCProxyConnection : NSObject <NSXPCProxyCreating> {
    CWFXPCProxy *_XPCProxy;
    CWFXPCProxy *_synchronousXPCProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy) id /* block */ invalidationHandler;

- (id)remoteObjectProxy;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)resume;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)suspend;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (id)initWithForwardingTarget:(id)a0;

@end
