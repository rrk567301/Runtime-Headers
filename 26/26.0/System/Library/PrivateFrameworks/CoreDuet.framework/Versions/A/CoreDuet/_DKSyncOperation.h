@interface _DKSyncOperation : NSOperation {
    _Atomic unsigned char _state;
}

+ (BOOL)_removesDependenciesAfterFinish;

- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)start;
- (void)dealloc;
- (id)init;
- (void)endOperation;
- (void)startOperation;

@end
