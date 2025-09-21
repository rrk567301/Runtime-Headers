@class _PASLock, NSString, NSDictionary, NSObject, _PASNotificationTracker;
@protocol OS_dispatch_queue, OS_os_log;

@interface _PASAsset2 : NSObject {
    NSString *_assetTypeIdentifier;
    NSString *_defaultBundlePathBackup;
    NSDictionary *_requiredMobileAssetProperties;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_os_log> *_logHandle;
    int _installNotificationToken;
    int _metadataNotificationToken;
    _PASNotificationTracker *_updateNotificationTracker;
    _PASLock *_lock;
}

@property (readonly, nonatomic) NSString *bundlePath;
@property (readonly, nonatomic) unsigned long long assetVersion;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) unsigned long long compatibilityVersion;
@property (readonly, nonatomic) unsigned long long bestAssetVersionObserved;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invokeWithBundleOverride:(id)a0 block:(id /* block */)a1;
- (void)downloadMetadataWithCompletion:(id /* block */)a0;
- (id)_assetDescription;
- (id)_defaultBundleFilesystemPathsForAssetDataRelativePaths:(id)a0 guardedData:(id)a1 assetVersion:(unsigned long long *)a2;
- (id)_initWithAssetTypeIdentifier:(id)a0 defaultBundlePath:(id)a1 compatibilityVersion:(unsigned long long)a2 matchingKeysAndValues:(id)a3 notificationQueue:(id)a4 logHandle:(id)a5 enableAssetUpdates:(char)a6 purgeObsoleteInstalledAssets:(char)a7;
- (void)_issueUpdateNotificationsWithCallback:(id /* block */)a0;
- (char)_loadDefaultBundleVersionWithGuardedData:(id)a0;
- (id)_maFilesystemPathsForAssetDataRelativePaths:(id)a0 guardedData:(id)a1 isMissingData:(char *)a2 assetVersion:(unsigned long long *)a3;
- (void)_purgeObsoleteInstalledAssetsFromCandidates:(id)a0 guardedData:(id)a1;
- (void)_updateAssetMetadata;
- (void)addOverridePath:(id)a0 forResourceWithRelativePath:(id)a1;
- (void)callAssetUpdateHandlers;
- (void)clearOverrides;
- (char)deregisterUpdateHandlerAsyncWithToken:(id)a0;
- (char)deregisterUpdateHandlerWithToken:(id)a0;
- (id)filesystemPathForAssetDataRelativePath:(id)a0;
- (id)filesystemPathForAssetDataRelativePath:(id)a0 assetVersion:(unsigned long long *)a1;
- (id)filesystemPathsForAssetDataRelativePaths:(id)a0;
- (id)filesystemPathsForAssetDataRelativePaths:(id)a0 assetVersion:(unsigned long long *)a1;
- (id)initWithAssetTypeDescriptorPath:(id)a0 defaultBundlePath:(id)a1 matchingKeysAndValues:(id)a2 notificationQueue:(id)a3 logHandle:(id)a4;
- (id)initWithAssetTypeDescriptorPath:(id)a0 defaultBundlePath:(id)a1 matchingKeysAndValues:(id)a2 notificationQueue:(id)a3 logHandle:(id)a4 enableAssetUpdates:(char)a5;
- (id)initWithAssetTypeDescriptorPath:(id)a0 defaultBundlePath:(id)a1 matchingKeysAndValues:(id)a2 notificationQueue:(id)a3 logHandle:(id)a4 enableAssetUpdates:(char)a5 purgeObsoleteInstalledAssets:(char)a6;
- (char)overrideDefaultBundleWithBundleAtPath:(id)a0;
- (id)registerUpdateHandler:(id /* block */)a0;
- (char)updateAssetMetadataUsingQueryResults:(id)a0;

@end
