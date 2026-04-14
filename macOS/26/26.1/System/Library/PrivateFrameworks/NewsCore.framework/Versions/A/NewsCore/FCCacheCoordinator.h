@class NSString, NFUnfairLock, NSSet, FCCacheCoordinatorFlushPolicy, NSCountedSet, NSMutableSet, FCThreadSafeHashTable, FCThreadSafeMutableDictionary;
@protocol FCCacheCoordinatorLocking, FCOperationThrottler, FCCacheCoordinatorDelegate;

@interface FCCacheCoordinator : NSObject <FCOperationThrottlerDelegate> {
    BOOL _flushingEnabled;
    NSMutableSet *_storedKeys;
    NSCountedSet *_interestedKeys;
    FCThreadSafeMutableDictionary *_cacheHintsByKey;
    NFUnfairLock *_interestLock;
    id<FCCacheCoordinatorLocking> _underlyingLock;
    id<FCOperationThrottler> _flushThrottler;
    FCCacheCoordinatorFlushPolicy *_flushPolicy;
    FCThreadSafeHashTable *_observers;
}

@property (weak, nonatomic) id<FCCacheCoordinatorDelegate> delegate;
@property (readonly, nonatomic) NSSet *allKeys;
@property (readonly, nonatomic) NSSet *keysWithZeroInterest;
@property (readonly, nonatomic) NSSet *keysWithNonZeroInterest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)cacheContainsKey:(id)a0;
- (id)holdTokenForKey:(id)a0;
- (void)didInsertKeysIntoCache:(id)a0 withLifetimeHints:(id)a1;
- (void)operationThrottlerPerformOperation:(id)a0;
- (id)holdTokenForKeys:(id)a0;
- (void)setupWithInitialKeys:(id)a0 persistedHints:(id)a1;
- (void)didRemoveKeysFromCache:(id)a0;
- (void)didInsertKeyIntoCache:(id)a0;
- (id)persistableHints;
- (id)holdTokensForKeys:(id)a0;
- (void)setupWithInitialKeys:(id)a0;
- (void)dealloc;
- (void)performCacheWrite:(id /* block */)a0;
- (void).cxx_destruct;
- (void)enableFlushingWithPolicy:(id)a0;
- (void)performCacheRead:(id /* block */)a0;
- (void)didInsertKeyIntoCache:(id)a0 withLifetimeHint:(long long)a1;
- (void)pruneToMaxCount:(unsigned long long)a0;
- (id)init;
- (void)addObserver:(id)a0;

@end
