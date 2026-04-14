@interface SCWAsyncBlockOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

@property (readonly, copy, nonatomic) id /* block */ block;

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (id)initWithBlock:(id /* block */)a0;
- (BOOL)isExecuting;
- (void)start;
- (void).cxx_destruct;

@end
