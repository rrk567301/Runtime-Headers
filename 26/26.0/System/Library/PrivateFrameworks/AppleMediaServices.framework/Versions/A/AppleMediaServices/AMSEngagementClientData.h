@class NSURL, NSMutableDictionary, NSString;

@interface AMSEngagementClientData : NSObject

@property (class, readonly) NSURL *clientDataURL;

@property (retain) NSMutableDictionary *apps;
@property (retain) NSString *lastSyncedBuild;

+ (void)_registerNotifications;
+ (id)_sharedQueue;
+ (id)_fetchClientData;
+ (void)_assertEngagementd;
+ (BOOL)_isDaemon;
+ (void)erase;
+ (id)loadFromDisk;

- (void)_enumerateAppsWithBlock:(id /* block */)a0;
- (id)_appForIdentifier:(id)a0;
- (BOOL)destination:(id)a0 allowsEvent:(id)a1;
- (void)_setApp:(id)a0 forIdentifier:(id)a1;
- (void)saveToDisk;
- (id)destinationsNeedingSyncSinceBuild:(id)a0;
- (void)setLastSyncedBuild:(id)a0 appIdentifier:(id)a1;
- (id)lastSyncedBuildForDestination:(id)a0;
- (void)addCachedResponseData:(id)a0 cacheInfo:(id)a1 appIdentifier:(id)a2;
- (id)destinationsForEvent:(id)a0;
- (void)setAllowedEvents:(id)a0 appIdentifier:(id)a1;
- (id)cachedResponseDataForEvent:(id)a0;
- (id)initWithCacheObject:(id)a0;
- (void).cxx_destruct;

@end
