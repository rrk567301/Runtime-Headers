@interface SFSpeechAssetManager : NSObject

+ (void)fetchAssetsForLanguage:(id)a0 urgent:(char)a1 forceUpgrade:(char)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
+ (id)_serialQueueForClientIdentifier:(id)a0;
+ (id)_timeoutError:(double)a0;
+ (id)assetPathForConfig:(id)a0 clientIdentifier:(id)a1;
+ (id)assetPathForLanguage:(id)a0;
+ (id)assetPathForLanguage:(id)a0 clientIdentifier:(id)a1;
+ (id)configParametersForVoicemailWithLanguage:(id)a0;
+ (id)configParametersForVoicemailWithLanguage:(id)a0 clientIdentifier:(id)a1;
+ (void)fetchAssetWithConfig:(id)a0 clientIdentifier:(id)a1 detailedProgress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)fetchAssetWithConfig:(id)a0 clientIdentifier:(id)a1 detailedProgress:(id /* block */)a2 completion:(id /* block */)a3 timeout:(double)a4;
+ (void)fetchAssetWithConfig:(id)a0 clientIdentifier:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)fetchAssetWithConfig:(id)a0 clientIdentifier:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3 timeout:(double)a4;
+ (void)fetchAssetsForLanguage:(id)a0 clientIdentifier:(id)a1 detailedProgress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)fetchAssetsForLanguage:(id)a0 clientIdentifier:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)fetchAssetsForLanguage:(id)a0 clientIdentifier:(id)a1 urgent:(char)a2 forceUpgrade:(char)a3 detailedProgress:(id /* block */)a4 completion:(id /* block */)a5;
+ (void)fetchAssetsForLanguage:(id)a0 clientIdentifier:(id)a1 urgent:(char)a2 forceUpgrade:(char)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
+ (void)fetchAssetsForLanguage:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)fetchAssetsForLanguage:(id)a0 taskHint:(long long)a1 clientIdentifier:(id)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)fetchAssetsForLanguage:(id)a0 urgent:(char)a1 forceUpgrade:(char)a2 detailedProgress:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)fetchAssetsForLanguage:(id)a0 urgent:(char)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)fetchLanguageDetectorAssetsForClientIdentifier:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
+ (id)generalASRLanguageForLocale:(id)a0;
+ (id)generalASRLanguageForLocaleIdentifier:(id)a0;
+ (id)installedLanguages;
+ (id)installedLanguagesForTaskHint:(long long)a0;
+ (void)installedLanguagesForTaskHint:(long long)a0 completion:(id /* block */)a1;
+ (void)installedLanguagesWithCompletion:(id /* block */)a0;
+ (char)isLanguageDetectorInstalled;
+ (id)languageCode:(id)a0;
+ (id)pathToAssetWithConfig:(id)a0 clientIdentifier:(id)a1;
+ (void)pathToAssetWithConfig:(id)a0 clientIdentifier:(id)a1 completion:(id /* block */)a2;
+ (void)promoteAssets;
+ (void)purgeAssetsForLanguage:(id)a0 clientIdentifier:(id)a1 error:(id *)a2;
+ (void)purgeAssetsForLanguage:(id)a0 error:(id *)a1;
+ (void)setAssetsAsProvisional;
+ (void)setAssetsPurgeability:(char)a0 forLanguages:(id)a1 completion:(id /* block */)a2;
+ (void)setAssetsPurgeability:(char)a0 forLanguages:(id)a1 error:(id *)a2;
+ (void)setPurgeabilityForAssetWithConfig:(id)a0 purgeable:(char)a1 completion:(id /* block */)a2;
+ (id)subscriptionsForClientIdentifier:(id)a0;
+ (void)supportedLanguagesForTaskHint:(long long)a0 completion:(id /* block */)a1;
+ (id)systemClientId;
+ (void)unsubscribeFromAssetWithConfig:(id)a0 clientIdentifier:(id)a1 completion:(id /* block */)a2;
+ (void)unsubscribeFromAssetWithConfig:(id)a0 clientIdentifier:(id)a1 error:(id *)a2;

@end
