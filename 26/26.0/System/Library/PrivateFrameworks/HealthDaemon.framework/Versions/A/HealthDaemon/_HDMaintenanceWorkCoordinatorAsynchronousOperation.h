@interface _HDMaintenanceWorkCoordinatorAsynchronousOperation : HDMaintenanceOperation {
    id /* block */ _operationBlock;
    id /* block */ _canceledBlock;
}

- (id)initWithName:(id)a0 operationBlock:(id /* block */)a1;
- (void)main;
- (void)cancel;
- (id)initWithName:(id)a0 operationBlock:(id /* block */)a1 canceledBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
