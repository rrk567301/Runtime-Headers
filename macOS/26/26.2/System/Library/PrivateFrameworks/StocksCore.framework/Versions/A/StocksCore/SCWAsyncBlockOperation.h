@interface SCWAsyncBlockOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

@property (readonly, copy, nonatomic) id /* block */ block;

- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (id)initWithBlock:(id /* block */)a0;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)start;

@end
