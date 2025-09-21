@interface PXImportConcurrentAction : NSOperation {
    char _executing;
    char _finished;
}

- (void)finish;
- (void)start;
- (char)isAsynchronous;
- (char)isConcurrent;
- (char)isExecuting;
- (char)isFinished;
- (id)performAction;

@end
