@class NSString, NSNumber;

@interface AXAssetPolicy : NSObject

@property (readonly, nonatomic) NSString *assetType;
@property (nonatomic) char daemonShouldDownloadInBackgroundIfNeeded;
@property (retain, nonatomic) NSNumber *minSupportedFormatVersion;
@property (retain, nonatomic) NSNumber *maxSupportedFormatVersion;
@property (retain, nonatomic) NSNumber *compatibilityVersion;
@property (nonatomic) double downloadResourceTimeout;
@property (nonatomic) double updateCatalogTimeout;
@property (nonatomic) double refreshRetryInterval;
@property (nonatomic) double downloadRetryInterval;
@property (readonly, nonatomic) char shouldCopyLocally;
@property (readonly, nonatomic) char shouldUseProductionServerForInternalBuilds;
@property (retain, nonatomic) NSString *launchActivityIdentifier;
@property (nonatomic) double updateInterval;
@property (readonly, nonatomic) NSString *assetTypeSuffix;

+ (id)policy;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)_isAssetSupportedBasedOnCompatibilityVersion:(id)a0;
- (char)_isAssetSupportedBasedOnMinMaxFormatVersion:(id)a0;
- (id)assetsToDownloadFromRefreshedAssets:(id)a0;
- (id)assetsToPurgeFromInstalledAssets:(id)a0;
- (id)assetsToPurgeFromInstalledAssets:(id)a0 withRefreshedAssets:(id)a1;
- (id)downloadOptionsForOperation:(unsigned long long)a0 userInitiated:(char)a1;
- (char)isAssetContentVersion:(id)a0 greatherThanInstalledAssets:(id)a1;
- (char)isAssetSupported:(id)a0;
- (id)newAssetQuery;
- (char)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;

@end
