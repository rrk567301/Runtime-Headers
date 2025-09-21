@interface FCAsyncBlockOperation : NSOperation {
    _Atomic char _executing;
    _Atomic char _finished;
}

@property (readonly, copy, nonatomic) id /* block */ block;

+ (id)asyncBlockOperationWithBlock:(id /* block */)a0;
+ (id)asyncBlockOperationWithMainThreadBlock:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (id)initWithBlock:(id /* block */)a0;
- (char)isAsynchronous;
- (char)isExecuting;
- (char)isFinished;

@end
