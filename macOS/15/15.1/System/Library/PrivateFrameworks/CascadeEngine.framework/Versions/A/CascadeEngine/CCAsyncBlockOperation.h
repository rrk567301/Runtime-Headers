@interface CCAsyncBlockOperation : NSOperation {
    BOOL _operationQueue;
    BOOL _executing;
    BOOL _finished;
}

@property (readonly, copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (void)start;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (id)initWithAsyncOperationBlock:(id /* block */)a0;

@end
