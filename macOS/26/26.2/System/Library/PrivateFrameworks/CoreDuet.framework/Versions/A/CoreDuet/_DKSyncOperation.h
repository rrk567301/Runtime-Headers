@interface _DKSyncOperation : NSOperation {
    _Atomic unsigned char _state;
}

+ (BOOL)_removesDependenciesAfterFinish;

- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)start;
- (id)init;
- (void)dealloc;
- (void)endOperation;
- (void)startOperation;

@end
