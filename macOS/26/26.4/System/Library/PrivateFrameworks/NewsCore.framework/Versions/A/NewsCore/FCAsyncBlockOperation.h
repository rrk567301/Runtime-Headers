@interface FCAsyncBlockOperation : NSOperation {
    _Atomic BOOL _executing;
    _Atomic BOOL _finished;
}

@property (readonly, copy, nonatomic) id /* block */ block;

+ (id)asyncBlockOperationWithMainThreadBlock:(id /* block */)a0;
+ (id)asyncBlockOperationWithBlock:(id /* block */)a0;

- (id)initWithBlock:(id /* block */)a0;
- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void).cxx_destruct;
- (id)init;
- (void)start;

@end
