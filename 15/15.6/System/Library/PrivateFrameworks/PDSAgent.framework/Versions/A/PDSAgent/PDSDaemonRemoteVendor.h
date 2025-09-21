@class NSString, NSObject;
@protocol OS_dispatch_queue, PDSDaemonListenerVendor;

@interface PDSDaemonRemoteVendor : NSObject <PDSRemoteVendor>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<PDSDaemonListenerVendor> daemonListenerVendor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)internalRemoteObjectProxyWithError:(id *)a0;
- (id)remoteObjectProxyWithError:(id *)a0;
- (id)synchronousInternalRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (char)validateConnectionWithError:(id *)a0;
- (id)_remoteForSync:(char)a0;
- (id)_remoteInternalForSync:(char)a0;
- (id)initWithQueue:(id)a0 daemonListenerVendor:(id)a1;

@end
