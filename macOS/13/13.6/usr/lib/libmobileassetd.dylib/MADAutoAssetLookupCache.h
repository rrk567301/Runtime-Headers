@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MADAutoAssetLookupCache : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *lookupCacheQueue;
@property (retain, nonatomic) NSMutableDictionary *lookupResultsByAssetSelector;

+ (void)recordLookupResult:(id)a0 forSelector:(id)a1;
+ (id)_newBySelectorKey:(id)a0 forAssetAudience:(id)a1;
+ (id)autoAssetLookupCache;
+ (id)cachedLookupResultForSelector:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
