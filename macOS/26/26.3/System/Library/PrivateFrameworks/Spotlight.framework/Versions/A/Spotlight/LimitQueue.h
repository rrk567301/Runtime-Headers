@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface LimitQueue : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_waitingWork;
    unsigned int _activeWork;
}

+ (void)initialize;

- (void)async:(id /* block */)a0;
- (id)initWithName:(const char *)a0;
- (void).cxx_destruct;
- (void)_async:(id /* block */)a0;

@end
