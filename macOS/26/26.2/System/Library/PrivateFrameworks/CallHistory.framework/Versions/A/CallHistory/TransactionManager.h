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

- (void)appendTransactions_sync:(id)a0;
- (void)appendTransactions:(id)a0;
- (void)createXpcConnection_sync;
- (void).cxx_destruct;
- (void)setupConnectionHandlers_sync;
- (void)createXpcConnection;
- (id)init;
- (void)dealloc;

@end
