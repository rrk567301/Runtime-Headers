@interface NSFilePresenterAsynchronousOperation : NSOperation {
    id /* block */ _block;
    char _isFinished;
    char _isExecuting;
}

+ (id)operationWithBlock:(id /* block */)a0;

- (void)finish;
- (void)start;
- (char)isAsynchronous;
- (char)isExecuting;
- (char)isFinished;

@end
