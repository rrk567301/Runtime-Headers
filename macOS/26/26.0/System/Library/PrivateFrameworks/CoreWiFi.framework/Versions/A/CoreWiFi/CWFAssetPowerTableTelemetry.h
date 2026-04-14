@class NSString, NSDateFormatter, NSDate, NSError;

@interface CWFAssetPowerTableTelemetry : NSObject {
    NSDateFormatter *_dateFormatter;
    NSDate *_initializationDate;
    NSString *_assetSpecifier;
    BOOL _isSupportedChipset;
    NSString *_deviceSKU;
    NSString *_notificationString;
    NSString *_assetType;
    NSString *_assetVersion;
    BOOL _assetAvailable;
    NSString *_assetBuild;
    NSDate *_assetCatalogLastTimeChecked;
    NSDate *_assetCatalogPostedDate;
    BOOL _assetVersionSanity;
    BOOL _osVersionSanity;
    BOOL _osRestoreVersionSanity;
    BOOL _skuSanity;
    BOOL _assetBuildSanity;
    BOOL _transferSuccess;
    BOOL _transferAssetAlreadyHere;
    BOOL _transferPreviousAssetCleaned;
    NSDate *_transferAvailableDate;
    NSString *_assetVersionInfoVersion;
    NSDate *_assetVersionInfoDate;
    NSString *_assetVersionInfoDateString;
    NSError *_lastError;
}

+ (id)sharedObj;

- (id)init;
- (void).cxx_destruct;
- (void)setSKU:(id)a0;
- (id)getNSDateFromString:(id)a0;
- (BOOL)sendTelemetryAndClear;
- (void)setAssetContentSyncResult:(BOOL)a0 availableForUseAttributes:(id)a1 newerVersionAttributes:(id)a2 assetType:(id)a3 assetSpecifier:(id)a4 assetVersion:(id)a5 error:(id)a6;
- (void)setAssetHandoffInfo:(BOOL)a0 assetAlreadyHere:(BOOL)a1 previousAssetCleanedUp:(BOOL)a2 previousLatestPlist:(id)a3 latestPlistDict:(id)a4 newPlist:(id)a5 error:(id)a6;
- (void)setAssetLocalInfo:(id)a0 assetSpecifier:(id)a1 assetVersion:(id)a2 assetBuild:(id)a3 lastTimeCatalogChecked:(id)a4 catalogPostedDate:(id)a5 assetVersionSanity:(BOOL)a6 osVersionSanity:(BOOL)a7 osRestoreVersionSanity:(BOOL)a8 skuSanity:(BOOL)a9 sanityCheckAssetBuildAttribute:(BOOL)a10 attributes:(id)a11 localURL:(id)a12;
- (void)setAssetSpecifier:(id)a0;
- (void)setAssetVersionDownloadNotifcation:(id)a0 reason:(unsigned long long)a1;
- (void)setIsSupportedChipset:(BOOL)a0;

@end
