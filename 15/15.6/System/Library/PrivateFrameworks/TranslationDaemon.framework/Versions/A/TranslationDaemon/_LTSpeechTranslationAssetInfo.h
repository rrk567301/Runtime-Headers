@class _LTDAssetModel, NSArray, _LTOfflineAssetManager, _LTLocalePair, _LTDOfflineConfigurationModel;

@interface _LTSpeechTranslationAssetInfo : NSObject {
    _LTOfflineAssetManager *_assetManager;
    _LTLocalePair *_localePair;
    _LTDOfflineConfigurationModel *_offlineConfig;
    _LTDAssetModel *_sourceASRModel;
    _LTDAssetModel *_targetASRModel;
    NSArray *_allAssets;
    NSArray *_mtAssets;
    NSArray *_missingAssets;
    NSArray *_missingMTAssets;
    char _needsUpdate;
    NSArray *_modelURLs;
}

+ (void)_createSymlink:(id)a0 target:(id)a1 error:(id *)a2;
+ (char)_createSymlinkDirectoryForLocalePair:(id)a0 assets:(id)a1 validateIfNeeded:(char)a2;
+ (void)_createSymlinksFromDirectory:(id)a0 target:(id)a1 error:(id *)a2;
+ (id)_languagePairDirectoryForLocalePair:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)_referenceAssets:(id)a0 catalogAssets:(id)a1;
- (long long)_mtModelOfflineState;
- (char)_validateSymlinksForAssets:(id)a0;
- (id)availabilityInfo;
- (void)createSymlinkDirectoryForMTAssets;
- (void)downloadAssetsUserInitiated:(char)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)initWithInstalledAssets:(id)a0 catalogAssets:(id)a1 localePair:(id)a2 offlineConfig:(id)a3 assetManager:(id)a4;
- (char)isCompleteBidirectionalModel;
- (char)isCompletePassthroughModel;
- (void)purgeAssetUserInitiated:(char)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)speechModelURLForLocale:(id)a0;
- (id)speechModelVersionForLocale:(id)a0;
- (id)translationModelURLs;
- (char)updateAvailableInAssets:(id)a0;

@end
