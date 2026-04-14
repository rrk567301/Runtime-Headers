@class NSArray, NSXPCConnection;

@interface _GCIPCRemoteConnection : NSObject <_GCIPCConnection> {
    _Atomic BOOL _invalid;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy) NSArray *interruptionHandlers;
@property (copy) NSArray *invalidationHandlers;
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)init;
- (id)redactedDescription;
- (void)invalidate;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithConnection:(id)a0;
- (void)suspend;
- (void)scheduleSendBarrierBlock:(id /* block */)a0;
- (id)remoteProxy;
- (id)addInvalidationHandler:(id /* block */)a0;
- (id)addInterruptionHandler:(id /* block */)a0;
- (id)remoteProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)isEqualToConnection:(id)a0;

@end
