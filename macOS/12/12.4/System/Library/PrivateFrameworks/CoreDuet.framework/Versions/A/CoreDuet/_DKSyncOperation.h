@interface _DKSyncOperation : NSOperation {
    _Atomic unsigned char _state;
}

+ (BOOL)_removesDependenciesAfterFinish;

- (void)dealloc;
- (id)init;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)endOperation;
- (void)startOperation;

@end
