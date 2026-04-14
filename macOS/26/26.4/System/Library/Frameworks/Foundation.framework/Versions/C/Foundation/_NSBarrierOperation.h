@interface _NSBarrierOperation : NSOperation {
    id /* block */ _block;
}

+ (BOOL)_removesDependenciesAfterFinish;

- (void)main;
- (long long)queuePriority;
- (void)dealloc;

@end
