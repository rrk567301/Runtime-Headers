@interface WLKAsyncOperation : NSOperation {
    struct { BOOL isReady; BOOL isCancelled; BOOL isExecuting; BOOL isFinished; } _state;
}

+ (id)keyPathsForValuesAffectingIsCancelled;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;

- (BOOL)isExecuting;
- (void)cancel;
- (BOOL)isFinished;
- (BOOL)isCancelled;
- (void)start;
- (BOOL)isAsynchronous;
- (id)init;
- (void)executionDidBegin;
- (void)finishExecutionIfPossible;

@end
