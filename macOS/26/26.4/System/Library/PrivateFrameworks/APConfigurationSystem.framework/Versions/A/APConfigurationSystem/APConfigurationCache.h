@class APInMemoryTTLCache;

@interface APConfigurationCache : NSObject <APPurgeableCacheNotifierP>

@property (retain, nonatomic) APInMemoryTTLCache *purgeableCache;

+ (id)sharedInstance;

- (void)setConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)configurationForPath:(id)a0;
- (void)recentlyAccessedObject:(id)a0;

@end
