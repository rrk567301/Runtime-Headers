@interface WLKAsyncOperation : NSOperation {
    struct { BOOL isReady; BOOL isCancelled; BOOL isExecuting; BOOL isFinished; } _state;
}

+ (id)keyPathsForValuesAffectingIsCancelled;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;

- (BOOL)isExecuting;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isCancelled;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void)executionDidBegin;
- (id)init;
- (void)finishExecutionIfPossible;

@end
