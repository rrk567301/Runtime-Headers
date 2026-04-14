@interface WLKAsyncOperation : NSOperation {
    struct { BOOL isReady; BOOL isCancelled; BOOL isExecuting; BOOL isFinished; } _state;
}

+ (id)keyPathsForValuesAffectingIsCancelled;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;

- (BOOL)isAsynchronous;
- (BOOL)isCancelled;
- (BOOL)isExecuting;
- (void)cancel;
- (BOOL)isFinished;
- (void)executionDidBegin;
- (void)start;
- (id)init;
- (void)finishExecutionIfPossible;

@end
