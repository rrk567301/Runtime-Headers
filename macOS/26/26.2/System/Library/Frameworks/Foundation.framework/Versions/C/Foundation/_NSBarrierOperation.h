@interface _NSBarrierOperation : NSOperation {
    id /* block */ _block;
}

+ (BOOL)_removesDependenciesAfterFinish;

- (long long)queuePriority;
- (void)main;
- (void)dealloc;

@end
