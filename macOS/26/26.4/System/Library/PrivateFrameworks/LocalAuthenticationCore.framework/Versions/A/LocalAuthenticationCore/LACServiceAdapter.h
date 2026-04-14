@class NSObject, NSXPCInterface;
@protocol OS_dispatch_queue;

@interface LACServiceAdapter : LACServiceBase {
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)exportedObject;
- (id)queue;
- (void).cxx_destruct;
- (id)exportedInterface;
- (id)initWithExportedInterface:(id)a0 exportedObject:(id)a1 queue:(id)a2;

@end
