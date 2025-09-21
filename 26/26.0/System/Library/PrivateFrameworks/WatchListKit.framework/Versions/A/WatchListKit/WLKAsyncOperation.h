@interface WLKAsyncOperation : NSOperation {
    struct { BOOL isReady; BOOL isCancelled; BOOL isExecuting; BOOL isFinished; } _state;
}

+ (id)keyPathsForValuesAffectingIsCancelled;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (BOOL)isCancelled;
- (BOOL)isExecuting;
- (void)start;
- (void)cancel;
- (void)executionDidBegin;
- (id)init;
- (void)finishExecutionIfPossible;

@end
