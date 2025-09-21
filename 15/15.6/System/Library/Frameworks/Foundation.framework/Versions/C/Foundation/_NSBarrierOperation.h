@interface _NSBarrierOperation : NSOperation {
    id /* block */ _block;
}

+ (char)_removesDependenciesAfterFinish;

- (void)dealloc;
- (void)main;
- (long long)queuePriority;

@end
