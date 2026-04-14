@interface PXImportConcurrentAction : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)start;
- (BOOL)isConcurrent;
- (void)finish;
- (id)performAction;

@end
