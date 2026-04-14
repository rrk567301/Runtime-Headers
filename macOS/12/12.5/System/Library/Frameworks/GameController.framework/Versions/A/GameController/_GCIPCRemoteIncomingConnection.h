@class _GCIPCRemoteProcess;

@interface _GCIPCRemoteIncomingConnection : _GCIPCRemoteConnection <_GCIPCIncomingConnection>

@property (readonly, weak, nonatomic) _GCIPCRemoteProcess *process;
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;

+ (id)sharedConnectionWorkloop;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (id)valueForEntitlement:(id)a0;
- (id)remoteProxy;
- (id)remoteProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithConnection:(id)a0 fromProcess:(id)a1;

@end
