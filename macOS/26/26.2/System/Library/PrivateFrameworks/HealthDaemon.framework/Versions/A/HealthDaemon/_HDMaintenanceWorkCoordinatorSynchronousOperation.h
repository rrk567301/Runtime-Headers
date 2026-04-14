@class NSObject;
@protocol OS_dispatch_queue;

@interface _HDMaintenanceWorkCoordinatorSynchronousOperation : HDMaintenanceOperation {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
    id /* block */ _canceledBlock;
}

- (void)cancel;
- (id)initWithName:(id)a0 queue:(id)a1 block:(id /* block */)a2 canceledBlock:(id /* block */)a3;
- (void)main;
- (id)initWithName:(id)a0 queue:(id)a1 block:(id /* block */)a2;
- (void).cxx_destruct;

@end
