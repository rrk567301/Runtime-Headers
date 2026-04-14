@class NSString, NSXPCConnection;

@interface PDXPCService : NSObject <PDXPCServiceExportedInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCConnection *_connection;
    NSString *_className;
    BOOL _callbacksSuspended;
}

@property (readonly, nonatomic) int remoteProcessIdentifier;
@property (readonly, nonatomic) NSString *remoteProcessApplicationIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithConnection:(id)a0;
- (void)serviceSuspended;
- (void)activated;
- (id)init;
- (void)clearConnectionReference;
- (void)serviceResumed;
- (id)connection;
- (void).cxx_destruct;

@end
