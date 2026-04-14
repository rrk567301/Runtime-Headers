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
    BOOL _needsUpdate;
    NSArray *_modelURLs;
}

+ (void)_createSymlink:(id)a0 target:(id)a1 error:(id *)a2;
+ (BOOL)_createSymlinkDirectoryForLocalePair:(id)a0 assets:(id)a1 configAsset:(id)a2 validateIfNeeded:(BOOL)a3;
+ (BOOL)_createSymlinkDirectoryForLocalePair:(id)a0 assets:(id)a1 validateIfNeeded:(BOOL)a2;
+ (void)_createSymlinksFromDirectory:(id)a0 target:(id)a1 error:(id *)a2;
+ (id)_languagePairDirectoryForLocalePair:(id)a0;
+ (BOOL)_validTopLevelSymlinkDirectory:(id)a0 configAssetURL:(id)a1 assets:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (void)_referenceAssets:(id)a0 catalogAssets:(id)a1;
- (long long)_mtModelOfflineState;
- (BOOL)_validateSymlinksForAssets:(id)a0;
- (id)availabilityInfo;
- (void)createSymlinkDirectoryForMTAssets;
- (void)downloadAssetsUserInitiated:(BOOL)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)initWithInstalledAssets:(id)a0 catalogAssets:(id)a1 localePair:(id)a2 offlineConfig:(id)a3 assetManager:(id)a4;
- (BOOL)isCompleteBidirectionalModelForTaskHint:(long long)a0;
- (BOOL)isCompletePassthroughModelForTaskHint:(long long)a0;
- (void)purgeAssetUserInitiated:(BOOL)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)speechModelURLForLocale:(id)a0 taskHint:(long long)a1;
- (id)speechModelVersionForLocale:(id)a0;
- (id)translationModelURLs;
- (BOOL)updateAvailableInAssets:(id)a0;

@end
