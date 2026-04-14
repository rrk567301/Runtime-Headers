@class NSObject;
@protocol OS_dispatch_queue;

@interface NumberAdder : NSObject {
    struct unique_ptr<CLConnection, CLConnectionDeleter> { struct { struct CLConnection *__ptr_; } ; } _connection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;

- (void)handleMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (void)setup;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;
- (id)initWithConnection:(struct unique_ptr<CLConnection, CLConnectionDeleter> { struct { struct CLConnection *x0; } x0; })a0 onQueue:(id)a1;
- (void)numberOne:(int)a0 numberTwo:(int)a1 withCompletionHandler:(id /* block */)a2;

@end
