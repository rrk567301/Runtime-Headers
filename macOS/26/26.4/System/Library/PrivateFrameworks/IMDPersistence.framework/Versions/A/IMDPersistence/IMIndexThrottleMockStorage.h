@class NSMutableDictionary, NSDictionary, NSArray, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IMIndexThrottleMockStorage : NSObject <IMIndexThrottleStorage>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storageQueue;
@property (retain, nonatomic) NSMutableDictionary *internalStorage;
@property (retain, nonatomic) NSMutableArray *internalObservers;
@property (nonatomic) BOOL internalIgnoreThrottling;
@property (readonly, nonatomic) NSDictionary *storage;
@property (nonatomic) BOOL ignoreThrottling;
@property (readonly, nonatomic) NSArray *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setInteger:(long long)a0 forKey:(id)a1;
- (long long)integerForKey:(id)a0;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)init;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (void)dealloc;
- (void)__unlocked_setIgnoreThrottling:(BOOL)a0;
- (id)__unlocked_observersForKeyPath:(id)a0;
- (void)__unlocked_addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (id)__unlocked_historicalThrottles;
- (BOOL)__unlocked_ignoreThrottling;
- (long long)__unlocked_integerForKey:(id)a0;
- (id)__unlocked_observers;
- (void)__unlocked_removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (void)__unlocked_setHistoricalThrottles:(id)a0;
- (void)__unlocked_setInteger:(long long)a0 forKey:(id)a1;
- (void)__unlocked_setThrottles:(id)a0;
- (id)__unlocked_storage;
- (id)__unlocked_throttles;
- (id)historicalThrottles;
- (void)setHistoricalThrottles:(id)a0;
- (void)setThrottles:(id)a0;
- (id)throttles;
- (void)triggerObserversForKeyPath:(id)a0;

@end
