@interface _DKSyncOperation : NSOperation {
    _Atomic unsigned char _state;
}

+ (BOOL)_removesDependenciesAfterFinish;

- (BOOL)isFinished;
- (BOOL)isExecuting;
- (id)init;
- (void)start;
- (void)dealloc;
- (void)endOperation;
- (void)startOperation;

@end
