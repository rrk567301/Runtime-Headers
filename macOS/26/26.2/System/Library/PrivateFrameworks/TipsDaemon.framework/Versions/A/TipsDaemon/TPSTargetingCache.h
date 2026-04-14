@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TPSTargetingCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheResultDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;

- (void)reset;
- (void).cxx_destruct;
- (id)init;
- (void)addCacheResult:(long long)a0 forIdentifier:(id)a1;
- (long long)cacheResultForIdentifier:(id)a0;

@end
