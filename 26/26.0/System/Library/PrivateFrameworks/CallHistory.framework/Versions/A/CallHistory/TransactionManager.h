@class NSString, NSXPCConnection, NSXPCInterface, NSMutableArray;

@interface TransactionManager : CHSynchronizedLoggable <TransactionManagerProtocol> {
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
    id _syncHelperReadyNotificationRef;
    NSMutableArray *_queuedTransactions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instance;

- (void)dealloc;
- (void)createXpcConnection_sync;
- (void)appendTransactions:(id)a0;
- (id)init;
- (void)appendTransactions_sync:(id)a0;
- (void)createXpcConnection;
- (void)setupConnectionHandlers_sync;
- (void).cxx_destruct;

@end
