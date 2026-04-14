@class NSObject;
@protocol OS_dispatch_queue;

@interface _NSThreadedPeriodicInvoker : _NSPeriodicInvoker {
    NSObject<OS_dispatch_queue> *queue;
}

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)cancel;
- (void)setDelayFunction:(id /* block */)a0;
- (void)setWorkBlock:(id /* block */)a0;

@end
