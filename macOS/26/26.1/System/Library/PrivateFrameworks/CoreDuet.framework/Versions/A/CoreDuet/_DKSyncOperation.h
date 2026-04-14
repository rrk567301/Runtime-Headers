@interface _DKSyncOperation : NSOperation {
    _Atomic unsigned char _state;
}

+ (BOOL)_removesDependenciesAfterFinish;

- (BOOL)isExecuting;
- (void)start;
- (BOOL)isFinished;
- (void)dealloc;
- (id)init;
- (void)endOperation;
- (void)startOperation;

@end
