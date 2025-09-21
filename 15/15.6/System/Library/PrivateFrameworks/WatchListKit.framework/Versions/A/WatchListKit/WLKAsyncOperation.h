@interface WLKAsyncOperation : NSOperation {
    struct { char isReady; char isCancelled; char isExecuting; char isFinished; } _state;
}

+ (id)keyPathsForValuesAffectingIsCancelled;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;

- (id)init;
- (void)start;
- (void)cancel;
- (char)isAsynchronous;
- (char)isCancelled;
- (char)isExecuting;
- (char)isFinished;
- (void)executionDidBegin;
- (void)finishExecutionIfPossible;

@end
