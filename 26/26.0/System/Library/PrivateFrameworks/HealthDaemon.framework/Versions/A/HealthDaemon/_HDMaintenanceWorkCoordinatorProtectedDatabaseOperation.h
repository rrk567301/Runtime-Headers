@class HDDatabase, HDAssertion, HDDaemonTransaction;

@interface _HDMaintenanceWorkCoordinatorProtectedDatabaseOperation : HDMaintenanceOperation {
    HDDatabase *_database;
    HDAssertion *_accessibilityAssertion;
    HDDaemonTransaction *_transaction;
    id /* block */ _operationBlock;
    id /* block */ _canceledBlock;
}

- (void)main;
- (void)dealloc;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 database:(id)a1 operationBlock:(id /* block */)a2;
- (id)initWithName:(id)a0 database:(id)a1 operationBlock:(id /* block */)a2 canceledBlock:(id /* block */)a3;

@end
