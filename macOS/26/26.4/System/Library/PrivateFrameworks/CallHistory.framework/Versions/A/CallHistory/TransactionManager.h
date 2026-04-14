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
- (void).cxx_destruct;
- (void)createXpcConnection_sync;
- (id)init;
- (void)createXpcConnection;
- (void)appendTransactions:(id)a0;
- (void)dealloc;
- (void)setupConnectionHandlers_sync;

@end
