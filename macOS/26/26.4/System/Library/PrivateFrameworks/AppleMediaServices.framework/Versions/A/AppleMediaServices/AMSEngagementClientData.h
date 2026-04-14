@class NSURL, NSMutableDictionary, NSString;

@interface AMSEngagementClientData : NSObject

@property (class, readonly) NSURL *clientDataURL;

@property (retain) NSMutableDictionary *apps;
@property (retain) NSString *lastSyncedBuild;

+ (void)_registerNotifications;
+ (void)_assertEngagementd;
+ (BOOL)_isDaemon;
+ (id)_fetchClientData;
+ (void)erase;
+ (id)loadFromDisk;
+ (id)_sharedQueue;

- (id)lastSyncedBuildForDestination:(id)a0;
- (void)_enumerateAppsWithBlock:(id /* block */)a0;
- (id)destinationsNeedingSyncSinceBuild:(id)a0;
- (id)cachedResponseDataForEvent:(id)a0;
- (id)_appForIdentifier:(id)a0;
- (void)saveToDisk;
- (id)destinationsForEvent:(id)a0;
- (void)_setApp:(id)a0 forIdentifier:(id)a1;
- (void)setAllowedEvents:(id)a0 appIdentifier:(id)a1;
- (id)initWithCacheObject:(id)a0;
- (void)setLastSyncedBuild:(id)a0 appIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)addCachedResponseData:(id)a0 cacheInfo:(id)a1 appIdentifier:(id)a2;
- (BOOL)destination:(id)a0 allowsEvent:(id)a1;

@end
