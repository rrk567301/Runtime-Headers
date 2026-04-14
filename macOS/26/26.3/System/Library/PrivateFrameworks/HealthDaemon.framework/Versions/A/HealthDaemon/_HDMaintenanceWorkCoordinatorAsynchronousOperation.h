@interface _HDMaintenanceWorkCoordinatorAsynchronousOperation : HDMaintenanceOperation {
    id /* block */ _operationBlock;
    id /* block */ _canceledBlock;
}

- (id)initWithName:(id)a0 operationBlock:(id /* block */)a1;
- (void)cancel;
- (void)main;
- (id)initWithName:(id)a0 operationBlock:(id /* block */)a1 canceledBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
