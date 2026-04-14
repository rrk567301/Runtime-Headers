@class NSDate, SGLongRunningTaskManager;

@interface SGLongRunningTask : NSObject {
    SGLongRunningTaskManager *_manager;
    NSDate *_deadline;
    _Atomic BOOL _deferRequested;
}

- (BOOL)shouldDefer;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDeadline:(id)a0 manager:(id)a1;
- (void)markFinished;
- (void)requestDefer;

@end
