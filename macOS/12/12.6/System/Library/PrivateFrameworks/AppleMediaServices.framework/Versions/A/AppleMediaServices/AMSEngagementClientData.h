@class NSString, NSMutableDictionary;

@interface AMSEngagementClientData : NSObject

@property (retain) NSMutableDictionary *apps;
@property (retain) NSString *lastSyncedBuild;

+ (BOOL)_isDaemon;
+ (void)_registerNotifications;
+ (id)_sharedQueue;
+ (id)loadFromDisk;
+ (id)_fetchClientData;
+ (void)_assertEngagementd;

- (void).cxx_destruct;
- (id)destinationsForEvent:(id)a0;
- (id)cachedResponseDataForEvent:(id)a0;
- (id)initWithCacheObject:(id)a0;
- (void)addCachedResponseData:(id)a0 cacheInfo:(id)a1 appIdentifier:(id)a2;
- (void)setAllowedEvents:(id)a0 appIdentifier:(id)a1;
- (void)saveToDisk;
- (void)_cleanUpApps;

@end
