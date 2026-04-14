@class CWFXPCProxy, NSObject;
@protocol OS_dispatch_queue;

@interface CWFXPCProxyConnection : NSObject <NSXPCProxyCreating> {
    CWFXPCProxy *_XPCProxy;
    CWFXPCProxy *_synchronousXPCProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy) id /* block */ invalidationHandler;

- (void)resume;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxy;
- (void)activate;
- (void)suspend;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithForwardingTarget:(id)a0;

@end
