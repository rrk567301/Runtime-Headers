@interface PXImportConcurrentAction : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

- (BOOL)isAsynchronous;
- (void)finish;
- (BOOL)isFinished;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (id)performAction;
- (void)start;

@end
