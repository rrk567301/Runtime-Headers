@class _PASLock;

@interface TRIExcessiveStaleFactorsUsageTimer : NSObject {
    _PASLock *_lock;
}

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithNamespaceName:(id)a0 delayTimeInSeconds:(double)a1 block:(id /* block */)a2;

@end
