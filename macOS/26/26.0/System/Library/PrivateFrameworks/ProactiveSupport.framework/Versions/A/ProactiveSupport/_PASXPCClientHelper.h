@class NSString, NSXPCConnection, NSXPCInterface, NSObject;
@protocol OS_os_log;

@interface _PASXPCClientHelper : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _connLock;
    NSXPCConnection *_conn;
    NSString *_serviceName;
    unsigned long long _connectionOptions;
    NSXPCInterface *_allowlistedServerInterface;
    NSXPCInterface *_allowlistedClientInterface;
    id _serverInitiatedRequestHandler;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
    NSObject<OS_os_log> *_logHandle;
    BOOL _allowSystemToUserConnection;
}

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithServiceName:(id)a0 connectionOptions:(unsigned long long)a1 allowlistedServerInterface:(id)a2 allowlistedClientInterface:(id)a3 serverInitiatedRequestHandler:(id)a4 allowSystemToUserConnection:(BOOL)a5 interruptionHandler:(id /* block */)a6 invalidationHandler:(id /* block */)a7 logHandle:(id)a8;
- (void)dealloc;
- (id)initWithServiceName:(id)a0 whitelistedServerInterface:(id)a1 whitelistedClientInterface:(id)a2 serverInitiatedRequestHandler:(id)a3 interruptionHandler:(id /* block */)a4 invalidationHandler:(id /* block */)a5 logHandle:(id)a6;
- (id)initWithServiceName:(id)a0 allowlistedServerInterface:(id)a1 allowlistedClientInterface:(id)a2 serverInitiatedRequestHandler:(id)a3 interruptionHandler:(id /* block */)a4 invalidationHandler:(id /* block */)a5 logHandle:(id)a6;
- (id)initWithServiceName:(id)a0 allowlistedServerInterface:(id)a1 allowlistedClientInterface:(id)a2 serverInitiatedRequestHandler:(id)a3 allowSystemToUserConnection:(BOOL)a4 interruptionHandler:(id /* block */)a5 invalidationHandler:(id /* block */)a6 logHandle:(id)a7;
- (void).cxx_destruct;
- (void)_locked_establishConnection;

@end
