@class NSString;

@interface CWFAssetPowerTable : NSObject {
    unsigned long long numberOfCallsToCopyAsset;
    unsigned long long numberOfTimesAssetExisted;
    unsigned long long numberOfSuccessfullAssetCopy;
}

@property (nonatomic) BOOL allowTestingOnUnSupportedChipset;
@property (copy, nonatomic) NSString *powerTableAPIMajorVersion;

+ (id)currentLatestAssetVersion;
+ (id)currentLatestPowerTableAssemblyDate;
+ (id)currentLatestPowerTableAssemblyDateFromPT:(id)a0;
+ (id)currentLatestPowerTableVersion;
+ (id)currentLatestPowerTableVersionFromPT:(id)a0;
+ (id)currentLatestPowerTableVersionInfoDict;
+ (id)getDeviceSKU;
+ (id)getPowerTableAssemblyDateFromDict:(id)a0;
+ (id)getPowerTableVersionFromDict:(id)a0;
+ (id)getPowerTableVersionInfoDict:(id)a0;
+ (BOOL)isChipsetDownloadOnly;
+ (BOOL)isChipsetFullySupported;
+ (BOOL)isSupportedDeviceClass;
+ (BOOL)isSupportedOTAPTDownloadOnly;
+ (BOOL)isSupportedOTAPTUpdate;
+ (id)sharedObj;
+ (BOOL)shouldAllowTestingOnUnSupportedChipset;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)assetSpecifierToTrack;
- (void)createTopLevelDir;
- (void)garbageCollectWithNewAsset:(id)a0 prevAsset:(id)a1;
- (void)processLocalAsset:(id)a0;
- (id)transferAssetFromSrc:(id)a0 toDst:(id)a1 withAsseID:(id)a2 withVersion:(id)a3 assetBuild:(id)a4 firstSupportedOS:(id)a5 lastSupportedOS:(id)a6 firstSupportedBuild:(id)a7 lastSupportedBuild:(id)a8 ptVersionInfo:(id)a9 lastTimeCatalogChecked:(id)a10 catalogPostedDate:(id)a11;

@end
