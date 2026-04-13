@class NSMutableSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CalAgentCache : NSObject {
    NSObject<OS_dispatch_queue> *syncQueue;
    NSMutableDictionary *cachedValues;
    NSMutableSet *observers;
}

+ (id)cachedValueForKey:(id)a0;
+ (void)addCacheObserver:(id)a0;
+ (void)updateCachedDictionaryValue:(id)a0 forKey:(id)a1 dictionaryKey:(id)a2;
+ (void)cacheUpdatedTo:(id)a0;
+ (void)_agentSideSetup;
+ (id)agentCache;
+ (void)updateCachedValue:(id)a0 forKey:(id)a1;
+ (void)_clientSideSetupAddingObserver:(id)a0;
+ (void)_clientSideSetup;

- (void).cxx_destruct;
- (void)_checkIn;
- (id)initWithInitialObserver:(id)a0;
- (void)_addCacheObserver:(id)a0;
- (void)_cacheUpdatedTo:(id)a0;
- (id)_cachedValueForKey:(id)a0;

@end
