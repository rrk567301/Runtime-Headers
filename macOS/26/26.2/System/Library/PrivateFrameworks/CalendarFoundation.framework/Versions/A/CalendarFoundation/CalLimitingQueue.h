@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CalLimitingQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
}

- (void)executeBlock;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 andBlock:(id /* block */)a1;
- (id)queue;

@end
