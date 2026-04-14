@class NSURL, NSMutableDictionary, NSString;

@interface AMSEngagementClientData : NSObject

@property (class, readonly) NSURL *clientDataURL;

@property (retain) NSMutableDictionary *apps;
@property (retain) NSString *lastSyncedBuild;

+ (BOOL)_isDaemon;
+ (void)_registerNotifications;
+ (id)_sharedQueue;
+ (void)_assertEngagementd;
+ (id)_fetchClientData;
+ (void)erase;
+ (id)loadFromDisk;

- (void).cxx_destruct;
- (void)setAllowedEvents:(id)a0 appIdentifier:(id)a1;
- (void)_cleanUpApps;
- (void)addCachedResponseData:(id)a0 cacheInfo:(id)a1 appIdentifier:(id)a2;
- (id)cachedResponseDataForEvent:(id)a0;
- (id)destinationsForEvent:(id)a0;
- (id)initWithCacheObject:(id)a0;
- (void)saveToDisk;

@end
