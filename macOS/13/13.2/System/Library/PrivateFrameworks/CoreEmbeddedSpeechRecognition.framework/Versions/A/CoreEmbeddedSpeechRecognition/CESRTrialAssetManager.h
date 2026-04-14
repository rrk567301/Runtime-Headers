@class NSMutableSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CESRTrialAssetManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_trialClientDict;
    NSObject<OS_dispatch_source> *_cleanupTimer;
    unsigned long long _cleanupDuration;
    NSMutableSet *_purgedLegacyDictationAssetCache;
}

+ (void)initialize;
+ (id)sharedInstance;
+ (unsigned long long)getAssetTypeForNamespace:(id)a0;
+ (id)factorPrefixForAssetType:(unsigned long long)a0;
+ (id)factorNameForAssetType:(unsigned long long)a0 language:(id)a1 regionId:(id)a2;
+ (id)factorNameForAssetType:(unsigned long long)a0 language:(id)a1;
+ (id)jsonFilenameForAssetType:(unsigned long long)a0;
+ (BOOL)factorName:(id)a0 belongsToAssetType:(unsigned long long)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)wait;
- (BOOL)dictationIsEnabled;
- (id)installedAssetOfType:(unsigned long long)a0 language:(id)a1;
- (id)installationStatusForLanguagesForAssetType:(unsigned long long)a0 includeDetailedStatus:(BOOL)a1 error:(id *)a2;
- (id)initWithClients:(id)a0 cleanupDuration:(unsigned long long)a1;
- (id)triClients;
- (id)trialIdsForAssetType:(unsigned long long)a0;
- (id)installedAssetWithConfig:(id)a0;
- (id)installedAssetWithConfig:(id)a0 regionId:(id)a1;
- (id)installedAssetWithConfig:(id)a0 regionId:(id)a1 triggerDownload:(BOOL)a2;
- (id)_installedAssetWithConfig:(id)a0 regionId:(id)a1 triggerDownload:(BOOL)a2;
- (id)installedFileAssetOfAssetType:(unsigned long long)a0 factorName:(id)a1;
- (void)setAssetsProvisionalForAssetType:(unsigned long long)a0;
- (void)promoteAssetsForAssetType:(unsigned long long)a0;
- (void)switchToNewAssetsForAssetType:(unsigned long long)a0;
- (void)replaceCorruptAssetWithConfig:(id)a0;
- (void)downloadAssetOfType:(unsigned long long)a0 language:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)downloadAssetOfType:(unsigned long long)a0 language:(id)a1 urgent:(BOOL)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)downloadAssetOfType:(unsigned long long)a0 language:(id)a1 urgent:(BOOL)a2 forceUpgrade:(BOOL)a3 progressHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (void)downloadStatusWithConfig:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)_purgeLegacyDictationAssetForLanguage:(id)a0;
- (BOOL)_purgeInstalledAssetsExceptLanguages:(id)a0 assetType:(unsigned long long)a1 error:(id *)a2;
- (BOOL)purgeInstalledAssetsExceptLanguages:(id)a0 assetType:(unsigned long long)a1 error:(id *)a2;
- (BOOL)purgeInstalledAssetForAssetType:(unsigned long long)a0 language:(id)a1 regionId:(id)a2 error:(id *)a3;
- (BOOL)setAssetsPurgeabilityExceptLanguages:(id)a0 assetType:(unsigned long long)a1;
- (void)registerAssetDelegate:(id)a0 assetType:(unsigned long long)a1;
- (void)releaseClients;
- (void)releaseClientsForAssetType:(unsigned long long)a0;
- (id)supportedLanguagesWithAssetType:(unsigned long long)a0;
- (void)_scheduleCleanupTimer;
- (void)_cancelCleanupTimer;
- (void)_cleanupTimerFired;
- (id)_languageFromFactorName:(id)a0 assetType:(unsigned long long)a1;
- (id)_trialClientForProject:(int)a0;
- (id)modelQualityTypeStatusStringWithConfig:(id)a0;
- (id)modelAttributesStatusStringWithAsset:(id)a0;
- (id)modelTypeStatusStringAndVersionWithAsset:(id)a0;
- (void)startDownloadLevelsForAsset:(unsigned long long)a0 withFactor:(id)a1 withClient:(id)a2 withNamespace:(id)a3 urgent:(BOOL)a4 progress:(id /* block */)a5 completion:(id /* block */)a6;
- (id)overrideAssetPath:(unsigned long long)a0;
- (id)_overrideAssetStatus:(unsigned long long)a0;
- (BOOL)isBelowLocaleLimit;
- (BOOL)removeAssetsForFactors:(id)a0 withNamespace:(id)a1 withClient:(id)a2 error:(id *)a3;

@end
