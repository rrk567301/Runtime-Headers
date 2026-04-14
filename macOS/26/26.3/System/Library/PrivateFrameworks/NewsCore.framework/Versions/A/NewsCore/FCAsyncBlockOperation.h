@interface FCAsyncBlockOperation : NSOperation {
    _Atomic BOOL _executing;
    _Atomic BOOL _finished;
}

@property (readonly, copy, nonatomic) id /* block */ block;

+ (id)asyncBlockOperationWithMainThreadBlock:(id /* block */)a0;
+ (id)asyncBlockOperationWithBlock:(id /* block */)a0;

- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)initWithBlock:(id /* block */)a0;
- (void)start;
- (BOOL)isAsynchronous;
- (id)init;
- (void).cxx_destruct;

@end
