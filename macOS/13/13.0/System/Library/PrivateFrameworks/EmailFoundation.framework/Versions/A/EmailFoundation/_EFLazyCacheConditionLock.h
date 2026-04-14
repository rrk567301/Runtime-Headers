@interface _EFLazyCacheConditionLock : NSConditionLock {
    _Atomic long long _waiterCount;
}

@property (readonly) long long waiterCount;

- (id)initWithCondition:(long long)a0;
- (void)incrementWaiterCount;
- (void)decrementWaiterCount;

@end
