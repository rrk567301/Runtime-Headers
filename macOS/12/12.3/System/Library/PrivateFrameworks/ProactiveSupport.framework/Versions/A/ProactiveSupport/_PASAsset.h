@class _PASLock, NSString, NSDictionary, NSObject, _PASNotificationTracker;
@protocol OS_dispatch_queue;

@interface _PASAsset : NSObject <_PASAssetProtocol> {
    NSString *_bundleIdentifier;
    NSDictionary *_requiredMobileAssetProperties;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _installNotificationToken;
    int _metadataNotificationToken;
    _PASNotificationTracker *_updateNotificationTracker;
    _PASLock *_lock;
}

@property (readonly, nonatomic) unsigned long long assetVersion;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) unsigned long long compatibilityVersion;
@property (readonly, nonatomic) unsigned long long bestAssetVersionObserved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)bundlePath;
- (void)setBundlePath:(id)a0;
- (id)initWithAssetTypeDescriptorPath:(id)a0 defaultBundlePath:(id)a1 matchingKeysAndValues:(id)a2 notificationQueue:(id)a3 enableAssetUpdates:(BOOL)a4;
- (id)_initWithBundleIdentifier:(id)a0 defaultBundlePath:(id)a1 compatibilityVersion:(unsigned long long)a2 matchingKeysAndValues:(id)a3 notificationQueue:(id)a4 enableAssetUpdates:(BOOL)a5;
- (void)_loadDefaultBundleVersionWithGuardedData:(id)a0;
- (id)_assetDescription;
- (void)_updateAssetMetadata;
- (id)pathsForResourcesWithNames:(id)a0 assetVersion:(unsigned long long *)a1;
- (id)pathForResourceWithName:(id)a0 extension:(id)a1 assetVersion:(unsigned long long *)a2;
- (id)pathForResourceWithNameAndExtension:(id)a0 assetVersion:(unsigned long long *)a1;
- (BOOL)_updateAssetMetadataUsingQueryResults:(id)a0;
- (void)_issueUpdateNotificationsWithCallback:(id /* block */)a0;
- (id)registerUpdateHandler:(id /* block */)a0;
- (BOOL)deregisterUpdateHandlerAsyncWithToken:(id)a0;
- (id)pathForResourceWithName:(id)a0 extension:(id)a1;
- (id)initWithAssetTypeDescriptorPath:(id)a0 defaultBundlePath:(id)a1 matchingKeysAndValues:(id)a2 notificationQueue:(id)a3;
- (BOOL)deregisterUpdateHandlerWithToken:(id)a0;
- (id)pathForResourceWithNameAndExtension:(id)a0;
- (id)pathsForResourcesWithNames:(id)a0;
- (void)invokeWithBundleOverride:(id)a0 block:(id /* block */)a1;
- (void)addOverridePath:(id)a0 forResource:(id)a1 ofType:(id)a2;
- (void)clearOverrides;
- (void)callAssetUpdateHandlers;

@end
