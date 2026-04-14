@class NSString, CDMDefaultAssetsManager, NSFileManager, NSLocale, CDMUAFAssetsManager;

@interface CDMAssetsManager : NSObject {
    CDMDefaultAssetsManager *_cdmDefaultAssetsManager;
    CDMUAFAssetsManager *_cdmUAFAssetsManager;
    NSFileManager *_fileManager;
}

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *assetDirPath;

+ (id)getFactorNamesForService:(id)a0;

- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (void)setupWithError:(id *)a0;
- (void)_setupUafAssetManager:(id *)a0;
- (BOOL)areAssetsAvailableForCDMAssetsInfo:(id)a0 factorToAsset:(id)a1 withError:(id *)a2;
- (BOOL)areAssetsAvailableForCDMAssetsInfo:(id)a0 factorToAsset:(id)a1 withError:(id *)a2 withSelfMetadata:(id)a3 withSelfContextId:(id)a4 withDataDispatcherContext:(id)a5;
- (id)getAssetsByFactorNamesForCDMAssetsInfo:(id)a0;
- (id)getFactorToUnprocessedNLAsset:(id)a0;
- (id)initWithLocale:(id)a0 assetDirPath:(id)a1;
- (id)initWithLocale:(id)a0 assetDirPath:(id)a1 cdmAssetsInfo:(id)a2;
- (BOOL)isAssetAvailableForCDMAssetsFactorConfig:(id)a0 factorToAsset:(id)a1 withError:(id *)a2;
- (id)processNLAsset:(id)a0 withAssetFolders:(id)a1;
- (id)processSideLoadedAssetForNLAsset:(id)a0 withAssetFolders:(id)a1;
- (BOOL)registerForCDMAssetsInfo:(id)a0 withAssetsDelegate:(id)a1 selfContextId:(id)a2 selfMetadata:(id)a3 dataDispatcherContext:(id)a4;

@end
