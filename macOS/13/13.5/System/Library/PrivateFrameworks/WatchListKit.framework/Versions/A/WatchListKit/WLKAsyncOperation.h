@interface WLKAsyncOperation : NSOperation {
    int _state;
}

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;

- (void)start;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)executionDidBegin;
- (void)finishExecutionIfPossible;

@end
