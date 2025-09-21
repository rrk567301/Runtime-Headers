@interface _DKSyncOperation : NSOperation {
    _Atomic unsigned char _state;
}

+ (char)_removesDependenciesAfterFinish;

- (void)dealloc;
- (id)init;
- (void)start;
- (char)isExecuting;
- (char)isFinished;
- (void)endOperation;
- (void)startOperation;

@end
