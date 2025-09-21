@interface lighthouse_runtime.AsyncOperation : NSOperation {
    void /* unknown type, empty encoding */ lockQueue;
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ task;
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ _isExecuting;
    void /* unknown type, empty encoding */ _isFinished;
}

@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (void)main;
- (BOOL)isExecuting;
- (void)start;
- (void)dealloc;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;

@end
