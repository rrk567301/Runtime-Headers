@class NSString, NSXPCConnection, NSXPCInterface, HMFProcessInfo, NSObject;
@protocol OS_dispatch_queue;

@interface HMXPCConnection : HMFObject <HMXPCConnection> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSXPCConnection *xpcConnection;
@property (readonly) HMFProcessInfo *processInfo;
@property (readonly) int processIdentifier;
@property (readonly) struct { unsigned int x0[8]; } auditToken;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSXPCInterface *exportedInterface;
@property (retain) id exportedObject;
@property (retain) NSXPCInterface *remoteObjectInterface;
@property (readonly) id remoteObjectProxy;
@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)invalidate;
- (id)attributeDescriptions;
- (id)initWithXPCConnection:(id)a0;
- (void)resume;
- (id)valueForEntitlement:(id)a0;
- (void)activate;
- (void).cxx_destruct;

@end
