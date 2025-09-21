@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SYDStoreBundleMap : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDictionary *cachedStoreBundleMap;

+ (id)sharedInstance;
+ (id)disabledStoreIdentifiers;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)isCloudSyncUserDefaultEnabledForStoreIdentifier:(id)a0;
- (void)setCloudSyncUserDefaultEnabled:(char)a0 storeIdentifier:(id)a1;
- (id)bundleIdentifiersForStoreIdentifier:(id)a0;
- (void)clearCachedStoreBundleMap;
- (id)generateStoreBundleMap;
- (void)generateStoreBundleMapIfNecessary;
- (void)installedAppsDidChange:(id)a0;
- (char)isStoreIdentifierUsedOnThisDevice:(id)a0;
- (char)shouldSyncStoreWithIdentifier:(id)a0;
- (id)storeIdentifiersForInstalledBundles;

@end
