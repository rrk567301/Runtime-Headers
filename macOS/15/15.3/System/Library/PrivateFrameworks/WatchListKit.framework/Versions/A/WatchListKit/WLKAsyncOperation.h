@interface WLKAsyncOperation : NSOperation {
    int _state;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _cancelled;
}

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;

- (id)init;
- (void)start;
- (void)cancel;
- (BOOL)isAsynchronous;
- (BOOL)isCancelled;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)executionDidBegin;
- (void)finishExecutionIfPossible;

@end
