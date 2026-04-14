@interface NSFilePresenterAsynchronousOperation : NSOperation {
    id /* block */ _block;
    BOOL _isFinished;
    BOOL _isExecuting;
}

+ (id)operationWithBlock:(id /* block */)a0;

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)start;
- (void)finish;

@end
