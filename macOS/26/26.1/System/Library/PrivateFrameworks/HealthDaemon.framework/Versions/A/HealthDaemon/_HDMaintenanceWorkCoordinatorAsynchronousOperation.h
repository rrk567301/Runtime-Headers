@interface _HDMaintenanceWorkCoordinatorAsynchronousOperation : HDMaintenanceOperation {
    id /* block */ _operationBlock;
    id /* block */ _canceledBlock;
}

- (void)cancel;
- (id)initWithName:(id)a0 operationBlock:(id /* block */)a1;
- (void)main;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 operationBlock:(id /* block */)a1 canceledBlock:(id /* block */)a2;

@end
