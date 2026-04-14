@interface MCMainThreadInvocationOperation : MCThrowingInvocationOperation {
    BOOL _isExecuting;
    BOOL _isFinished;
}

+ (BOOL)automaticallyNotifiesObserversOfIsExecuting;
+ (BOOL)automaticallyNotifiesObserversOfIsFinished;

- (void)start;
- (void)main;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (void)_finish;
- (void)_setIsExecuting:(BOOL)a0;

@end
