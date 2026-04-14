@class _PASLock, _PASSimpleCoalescingTimer;

@interface TRIPruningFactorLevelCache : NSObject <TRIFactorLevelCaching> {
    _PASLock *_lock;
    _PASSimpleCoalescingTimer *_pruningTimer;
    double _pruningDelaySeconds;
}

- (id)factorLevelCurrentlyCachedForFactorName:(id)a0;
- (void)enumerateFactorLevelsUsingBlock:(id /* block */)a0;
- (id)initWithPruningDelaySeconds:(double)a0 loadFactorLevels:(id /* block */)a1;
- (void)_populateCacheForRequiredKey:(id)a0 guardedData:(id)a1;
- (void).cxx_destruct;
- (void)pruneSynchronously;
- (id)objectForKeyedSubscript:(id)a0;
- (id)init;

@end
