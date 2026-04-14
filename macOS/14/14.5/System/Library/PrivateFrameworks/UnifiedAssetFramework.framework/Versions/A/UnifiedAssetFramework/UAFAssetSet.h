@class NSUUID, NSString, NSDictionary, UAFAssetSetConfiguration, UAFAutoAssetSet, TRIClient, NSObject;
@protocol OS_dispatch_queue;

@interface UAFAssetSet : NSObject {
    TRIClient *_client;
    UAFAssetSetConfiguration *_cfg;
    NSDictionary *_minVersions;
    NSDictionary *_assetNameToTrial;
    NSDictionary *_assetNameToAutoAsset;
    NSDictionary *_assets;
    NSObject<OS_dispatch_queue> *_assetQueue;
    BOOL _rootsPresent;
    BOOL _factoryAssetsPresent;
    NSString *_autoAssetSetID;
    NSUUID *_uuid;
}

@property (retain, nonatomic) UAFAutoAssetSet *autoAssetSet;
@property (readonly, nonatomic) NSDictionary *usages;
@property (readonly, copy) NSString *assetSetId;
@property (readonly, copy) NSString *name;

+ (id)autoAssetSet:(id)a0 usages:(id)a1 uuid:(id)a2;
+ (id)getEntitledTrialAssets:(id)a0 usages:(id)a1;
+ (id)getTrialPurgeabilityLevel:(unsigned long long)a0;
+ (BOOL)isAssetValid:(id)a0 context:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)refresh;
- (id)assets;
- (id)assetNamed:(id)a0;
- (id)assetNamed:(id)a0 withUsage:(id)a1;
- (BOOL)markAssetsPromoted:(id)a0 error:(id *)a1;
- (BOOL)markAssetsProvisional:(id)a0 error:(id *)a1;
- (id)initWithAssetSet:(id)a0 usages:(id)a1;
- (id)getAsset:(id)a0;
- (id)_createAssetFromTrialInfo:(id)a0 assetName:(id)a1 fallback:(BOOL)a2 validPathOnly:(BOOL)a3;
- (id)_getAssetQueue;
- (BOOL)_shouldUseTrial:(id)a0 orFactory:(id)a1;
- (id)_targetingLanguageUsageToMetadata:(id)a0;
- (id)applyAssetTransformations:(id)a0;
- (id)applyMinVersions:(id)a0;
- (id)applyOSCompatibility:(id)a0;
- (id)createAssetFromMAAsset:(id)a0 assetName:(id)a1;
- (id)createAssetFromPreinstalledWithAutoAssetInfo:(id)a0 assetName:(id)a1 fromRoot:(BOOL)a2;
- (id)createAssetFromPreinstalledWithTrialInfo:(id)a0 assetName:(id)a1 fromRoot:(BOOL)a2 withUsages:(id)a3;
- (id)createAssetFromTrialInfo:(id)a0 assetName:(id)a1;
- (id)createAssets;
- (id)getAsset:(id)a0 withUsage:(id)a1;
- (id)getAssets;
- (id)getAutoAssetPreinstalledForRoots:(BOOL)a0;
- (id)getTrialAssets;
- (id)getTrialPreinstalledMAAssetsForRoots:(BOOL)a0;
- (id)initWithAssetSet:(id)a0 usages:(id)a1 configurationDirURLs:(id)a2;
- (id)namespacesOfAssetNames:(id)a0 error:(id *)a1;
- (id)overlayRoots:(id)a0;
- (BOOL)setAssetsPromoted:(id)a0 error:(id *)a1;
- (BOOL)setAssetsPromoted:(id)a0 purgabilityLevel:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setAssetsPromoted:(id)a0 purgeabilityLevel:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setAssetsProvisional:(id)a0 error:(id *)a1;
- (BOOL)setAssetsProvisional:(id)a0 purgabilityLevel:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setAssetsProvisional:(id)a0 purgeabilityLevel:(unsigned long long)a1 error:(id *)a2;

@end
