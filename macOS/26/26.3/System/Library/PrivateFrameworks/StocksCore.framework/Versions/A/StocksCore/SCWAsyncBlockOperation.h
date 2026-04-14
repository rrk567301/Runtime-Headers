@interface SCWAsyncBlockOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

@property (readonly, copy, nonatomic) id /* block */ block;

- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)initWithBlock:(id /* block */)a0;
- (void)start;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;

@end
