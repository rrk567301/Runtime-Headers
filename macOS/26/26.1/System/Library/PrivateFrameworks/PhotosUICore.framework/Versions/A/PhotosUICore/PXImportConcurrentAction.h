@interface PXImportConcurrentAction : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (void)finish;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (id)performAction;

@end
