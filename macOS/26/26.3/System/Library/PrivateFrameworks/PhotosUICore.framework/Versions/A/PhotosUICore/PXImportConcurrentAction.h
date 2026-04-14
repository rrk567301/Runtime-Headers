@interface PXImportConcurrentAction : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

- (void)finish;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (void)start;
- (BOOL)isAsynchronous;
- (id)performAction;

@end
