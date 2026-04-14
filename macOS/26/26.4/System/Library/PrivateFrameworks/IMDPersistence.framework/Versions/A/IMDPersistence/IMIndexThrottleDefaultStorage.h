@class NSString;

@interface IMIndexThrottleDefaultStorage : NSObject <IMIndexThrottleStorage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setInteger:(long long)a0 forKey:(id)a1;
- (id)defaults;
- (long long)integerForKey:(id)a0;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (BOOL)ignoreThrottling;
- (id)historicalThrottles;
- (void)setHistoricalThrottles:(id)a0;
- (void)setThrottles:(id)a0;
- (id)throttles;

@end
