@class AMSEngagementCacheDatabase;

@interface AMSEngagementCache : NSObject

@property (retain) AMSEngagementCacheDatabase *database;

+ (id)sharedInstance;

- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cacheResponse:(id)a0 filter:(id)a1 expiration:(id)a2;
- (id)cachedResponseForEvent:(id)a0;

@end
