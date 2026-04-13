@class NSObject, NSMutableDictionary, NSMutableOrderedSet;
@protocol OS_dispatch_queue, DDSCacheDelegate;

@interface DDSCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *cache;
@property (readonly, nonatomic) NSMutableOrderedSet *order;
@property (readonly, nonatomic) unsigned long long maxCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<DDSCacheDelegate> delegate;

- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (void)clearCache;
- (void)cacheObject:(id)a0 forKey:(id)a1;
- (id)initWithMaxCount:(unsigned long long)a0;

@end
