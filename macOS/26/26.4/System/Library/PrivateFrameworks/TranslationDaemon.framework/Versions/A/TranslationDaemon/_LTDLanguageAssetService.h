@class NSSet, NSArray;

@interface _LTDLanguageAssetService : NSObject

@property (class, readonly) NSSet *_selectedIdentifiers;
@property (class, readonly, copy) NSArray *availableIdentifiers;
@property (class, copy) NSArray *selectedLocales;
@property (class, readonly) BOOL onDeviceModeSupported;

+ (void)removeLanguages:(id)a0;
+ (void)addLanguages:(id)a0 useCellular:(BOOL)a1;
+ (id)queue;
+ (void)_installedAssetsWithCompletion:(id /* block */)a0;
+ (id)_selectedAssets;
+ (void)_availableAssetsWithCompletion:(id /* block */)a0;
+ (BOOL)_applyRequiredProgressUpdate:(id)a0;
+ (void)_cacheInstalledLanguages;
+ (id)_complementaryLocaleIfMissingForLocales:(id)a0 preferredComplements:(id)a1;
+ (id)_installedLocales;
+ (BOOL)_isWatchAndOffCharger;
+ (id)_languageAssetFilterDescription:(unsigned long long)a0;
+ (unsigned long long)_languageAssetFilterFromOptions:(unsigned long long)a0;
+ (id)_languageModelsForLocales:(id)a0 initialState:(long long)a1 error:(id *)a2;
+ (id)_localeRanks;
+ (long long)_offlineStateFromString:(id)a0;
+ (void)_preheatMissingCacheStatesAfter:(long long)a0;
+ (void)_purgeUnusedAssetsWithCompletion:(id /* block */)a0;
+ (void)_resetSymlinkDirectory;
+ (void)_selectedAssetsWithCompletion:(id /* block */)a0;
+ (id)_stringForOfflineState:(long long)a0;
+ (id)_supportedLocalesWithError:(id *)a0;
+ (void)_syncInstalledLocales;
+ (void)_syncInstalledLocalesWithCompletion:(id /* block */)a0;
+ (void)_syncInstalledLocalesWithRetry:(long long)a0 gateID:(id)a1;
+ (id)_synthesizeInitialObservationsFromDefaults;
+ (void)assetsWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
+ (void)cancelLanguageStatusSession:(id)a0;
+ (void)setAssets:(id)a0 options:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)setInstalledLocales:(id)a0 useCellular:(BOOL)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)startLanguageStatusSession:(id)a0 taskHint:(long long)a1 engineType:(long long)a2 progress:(BOOL)a3 observations:(id /* block */)a4 completion:(id /* block */)a5;
+ (void)syncInstalledLocalesIfPowerAllows;
+ (void)syncInstalledLocalesOnAssetUpdate;

@end
