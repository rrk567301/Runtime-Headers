@interface lighthouse_runtime.AsyncOperation : NSOperation {
    void /* unknown type, empty encoding */ lockQueue;
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ task;
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ _isExecuting;
    void /* unknown type, empty encoding */ _isFinished;
}

@property (nonatomic, readonly) char asynchronous;
@property (nonatomic) char executing;
@property (nonatomic) char finished;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (char)isAsynchronous;
- (char)isExecuting;
- (char)isFinished;
- (void)main;

@end
