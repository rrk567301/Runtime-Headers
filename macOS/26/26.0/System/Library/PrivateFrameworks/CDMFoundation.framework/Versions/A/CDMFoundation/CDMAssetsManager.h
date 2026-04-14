@class CDMDefaultAssetsManager, NSFileManager, NSMutableDictionary, CDMUAFAssetsManager;

@interface CDMAssetsManager : NSObject {
    CDMDefaultAssetsManager *_cdmDefaultAssetsManager;
    CDMUAFAssetsManager *_cdmUAFAssetsManager;
    NSFileManager *_fileManager;
    NSMutableDictionary *_getProcessedAssetsCache;
}

+ (id)getAssetSetsInCacheForGraphName:(id)a0;
+ (id)getFactorNamesForService:(id)a0;
+ (id)getFactorToUnprocessedNLAsset:(id)a0 cdmAssetsInfo:(id)a1 locale:(id)a2;
+ (id)getHashKeyForAssetSets:(id)a0;
+ (id)getHashKeyForCDMAssetsInfo:(id)a0;
+ (id)getSingletonCDMAssetsManager;

- (id)initManager;
- (void).cxx_destruct;
- (void)_setupUafAssetManagerForLocale:(id)a0 cdmAssetsInfo:(id)a1 error:(id *)a2;
- (BOOL)areAssetsAvailableForCDMAssetsInfo:(id)a0 factorToAsset:(id)a1 withError:(id *)a2;
- (BOOL)areAssetsAvailableForCDMAssetsInfo:(id)a0 factorToAsset:(id)a1 withError:(id *)a2 withSelfMetadata:(id)a3 withSelfContextId:(id)a4 withDataDispatcherContext:(id)a5;
- (id)getAssetsByFactorNamesForCDMAssetsInfo:(id)a0 assetDirPath:(id)a1 locale:(id)a2;
- (id)getCDMDefaultAssetsManager;
- (id)getCDMUAFAssetsManager;
- (id)getNSFileManager;
- (id)getProcessedAssetsCache;
- (id)getSavedResponseFromCacheForCDMAssetsInfo:(id)a0 locale:(id)a1 assetSets:(id)a2;
- (BOOL)isAssetAvailableForCDMAssetsFactorConfig:(id)a0 factorToAsset:(id)a1 withError:(id *)a2;
- (id)processNLAsset:(id)a0 withAssetFolders:(id)a1;
- (id)processSideLoadedAssetForNLAsset:(id)a0 withAssetFolders:(id)a1 assetDirPath:(id)a2 locale:(id)a3;
- (BOOL)registerForCDMAssetsInfo:(id)a0 withLocale:(id)a1 withAssetsDelegate:(id)a2 selfContextId:(id)a3 selfMetadata:(id)a4 dataDispatcherContext:(id)a5 withAssetAvailabilityType:(long long)a6 withError:(id *)a7;
- (void)saveGetAssetsResponseForCDMAssetsInfo:(id)a0 locale:(id)a1 assetSets:(id)a2 forResponse:(id)a3;
- (void)setupForLocale:(id)a0 cdmAssetsInfo:(id)a1 error:(id *)a2;
- (BOOL)shouldReSetupForLocale:(id)a0 cdmAssetsInfo:(id)a1;

@end
