@interface SCWAsyncBlockOperation : NSOperation {
    char _executing;
    char _finished;
}

@property (readonly, copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (void)start;
- (id)initWithBlock:(id /* block */)a0;
- (char)isAsynchronous;
- (char)isExecuting;
- (char)isFinished;

@end
