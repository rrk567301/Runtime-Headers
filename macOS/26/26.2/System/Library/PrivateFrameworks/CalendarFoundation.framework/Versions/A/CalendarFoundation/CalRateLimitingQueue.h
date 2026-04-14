@class NSObject;
@protocol OS_dispatch_queue;

@interface CalRateLimitingQueue : NSObject {
    id /* block */ _block;
    unsigned long long _minimumInterval;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _executionPending;
    unsigned long long _lastExecutionTimestamp;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)executeBlock;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 minimumInterval:(double)a1 andBlock:(id /* block */)a2;

@end
