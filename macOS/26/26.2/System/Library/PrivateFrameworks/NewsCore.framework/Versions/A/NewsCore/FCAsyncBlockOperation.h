@interface FCAsyncBlockOperation : NSOperation {
    _Atomic BOOL _executing;
    _Atomic BOOL _finished;
}

@property (readonly, copy, nonatomic) id /* block */ block;

+ (id)asyncBlockOperationWithBlock:(id /* block */)a0;
+ (id)asyncBlockOperationWithMainThreadBlock:(id /* block */)a0;

- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (id)initWithBlock:(id /* block */)a0;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)start;
- (id)init;

@end
