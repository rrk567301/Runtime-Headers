@class NSURL, NSMutableDictionary, NSString;

@interface AMSEngagementClientData : NSObject

@property (class, readonly) NSURL *clientDataURL;

@property (retain) NSMutableDictionary *apps;
@property (retain) NSString *lastSyncedBuild;

+ (BOOL)_isDaemon;
+ (void)_registerNotifications;
+ (id)_sharedQueue;
+ (id)loadFromDisk;
+ (void)erase;
+ (void)_assertEngagementd;
+ (id)_fetchClientData;

- (void).cxx_destruct;
- (id)initWithCacheObject:(id)a0;
- (void)addCachedResponseData:(id)a0 cacheInfo:(id)a1 appIdentifier:(id)a2;
- (void)setAllowedEvents:(id)a0 appIdentifier:(id)a1;
- (id)cachedResponseDataForEvent:(id)a0;
- (id)destinationsForEvent:(id)a0;
- (void)saveToDisk;
- (void)_cleanUpApps;

@end
