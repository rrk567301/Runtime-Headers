@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MADAutoAssetLookupCache : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *lookupCacheQueue;
@property (retain, nonatomic) NSMutableDictionary *lookupResultsByAssetSelector;
@property (retain, nonatomic) NSMutableDictionary *lookupResultsBySetConfiguration;

+ (id)_newBySelectorKey:(id)a0 forAssetAudience:(id)a1;
+ (id)_newBySetConfigurationKey:(id)a0 forAssetAudience:(id)a1;
+ (id)_setConfigurationAssetType:(id)a0;
+ (id)autoAssetLookupCache;
+ (id)cachedLookupResultForSelector:(id)a0 forStaging:(BOOL)a1;
+ (id)cachedLookupResultForSetConfiguration:(id)a0 forStaging:(BOOL)a1;
+ (void)clearLookupResultsForSetConfiguration:(id)a0;
+ (void)recordLookupResult:(id)a0 forSelector:(id)a1 forStaging:(BOOL)a2;
+ (void)recordLookupResult:(id)a0 forSetConfiguration:(id)a1 forStaging:(BOOL)a2;

- (void).cxx_destruct;
- (id)init;

@end
