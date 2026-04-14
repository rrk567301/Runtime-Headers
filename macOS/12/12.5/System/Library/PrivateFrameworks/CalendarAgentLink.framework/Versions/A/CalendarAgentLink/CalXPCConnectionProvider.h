@class CalXPCConnectionInfo, NSDate, NSXPCConnection;

@interface CalXPCConnectionProvider : NSObject

@property (retain, nonatomic) CalXPCConnectionInfo *info;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) id /* block */ aliveHandler;
@property (retain, nonatomic) NSDate *lastLifecycleCheckin;

+ (id)providerWithConnectionInfo:(id)a0 errorHandler:(id /* block */)a1;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)remoteProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithConnectionInfo:(id)a0 errorHandler:(id /* block */)a1;
- (void)_reregisterForLifecycleNotification:(id)a0;
- (void)didReceiveLifecycleNotification;
- (void)_didReceiveLifecycleNotificationHelper:(unsigned long long)a0;
- (void)_didInterruptConnection;
- (void)_didInvalidateConnection;
- (void)_updateExportedObject;
- (void)startMonitoringLifecycleWithHandler:(id /* block */)a0;
- (void)updateConnectionInfo:(id)a0;

@end
