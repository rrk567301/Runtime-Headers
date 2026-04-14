@interface WLKAsyncOperation : NSOperation {
    struct { BOOL isReady; BOOL isCancelled; BOOL isExecuting; BOOL isFinished; } _state;
}

+ (id)keyPathsForValuesAffectingIsCancelled;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)cancel;
- (void)executionDidBegin;
- (id)init;
- (BOOL)isCancelled;
- (void)start;
- (void)finishExecutionIfPossible;

@end
