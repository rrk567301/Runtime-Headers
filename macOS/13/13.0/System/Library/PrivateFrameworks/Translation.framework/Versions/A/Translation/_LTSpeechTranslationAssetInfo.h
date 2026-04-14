@class NSArray, NSDictionary, MAAsset, _LTOfflineAssetManager, _LTLocalePair;

@interface _LTSpeechTranslationAssetInfo : NSObject {
    _LTOfflineAssetManager *_assetManager;
    _LTLocalePair *_localePair;
    NSDictionary *_pairDictionary;
    MAAsset *_sourceASRModel;
    MAAsset *_targetASRModel;
    NSArray *_allAssets;
    NSArray *_mtAssets;
    NSArray *_missingAssets;
    NSArray *_missingMTAssets;
    BOOL _needsUpdate;
    NSArray *_modelURLs;
}

+ (void)initialize;

- (id)description;
- (void).cxx_destruct;
- (id)_getTranslationConfig;
- (id)initWithInstalledAssets:(id)a0 catalogAssets:(id)a1 localePair:(id)a2 configInfo:(id)a3 assetManager:(id)a4;
- (void)createSymlinkDirectoryForMTAssets;
- (void)referenceAssets:(id)a0 catalogAssets:(id)a1;
- (BOOL)updateAvailableInAssets:(id)a0;
- (id)speechModelURLForLocale:(id)a0;
- (id)speechModelVersionForLocale:(id)a0;
- (id)translationModelURLs;
- (BOOL)isCompletePassthroughModel;
- (BOOL)isCompleteBidirectionalModel;
- (unsigned long long)_mtModelOfflineState;
- (id)availabilityInfo;
- (id)_languagePairDirectory;
- (BOOL)_validateSymlinksForAssets:(id)a0;
- (void)_createSymlinkDirectoryForAssets:(id)a0;
- (void)downloadAssetsUserInitiated:(BOOL)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)purgeAssetUserInitiated:(BOOL)a0 queue:(id)a1 completion:(id /* block */)a2;

@end
