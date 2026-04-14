@class CWFXPCProxy, NSObject;
@protocol OS_dispatch_queue;

@interface CWFXPCProxyConnection : NSObject <NSXPCProxyCreating> {
    CWFXPCProxy *_XPCProxy;
    CWFXPCProxy *_synchronousXPCProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy) id /* block */ invalidationHandler;

- (void)invalidate;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)suspend;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)resume;
- (id)remoteObjectProxy;
- (void).cxx_destruct;
- (void)activate;
- (id)initWithForwardingTarget:(id)a0;

@end
