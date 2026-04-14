@interface NSFilePresenterAsynchronousOperation : NSOperation {
    id /* block */ _block;
    BOOL _isFinished;
    BOOL _isExecuting;
}

+ (id)operationWithBlock:(id /* block */)a0;

- (void)finish;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)start;
- (BOOL)isAsynchronous;

@end
