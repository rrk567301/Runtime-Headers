@class NSObject;
@protocol OS_dispatch_queue;

@interface _HDMaintenanceWorkCoordinatorSynchronousOperation : HDMaintenanceOperation {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithName:(id)a0 queue:(id)a1 block:(id /* block */)a2;

@end
