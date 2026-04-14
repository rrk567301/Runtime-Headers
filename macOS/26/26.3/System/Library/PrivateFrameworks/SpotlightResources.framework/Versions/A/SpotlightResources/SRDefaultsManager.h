@class SRTrialConfiguration, NSString, NSHashTable, NSMutableDictionary, SRAssetConfiguration, NSBundle, NSMutableSet, NSObject, SRLanguageConfiguration, NSNumber;
@protocol OS_dispatch_queue;

@interface SRDefaultsManager : NSObject <DDSAssetCenterDelegate> {
    SRAssetConfiguration *_assetConfig;
    SRTrialConfiguration *_trialConfig;
    SRLanguageConfiguration *_langConfig;
    NSMutableDictionary *_assets;
    NSMutableDictionary *_parameters;
    NSMutableSet *_fetchedLanguages;
    BOOL _fetchedRoot;
    BOOL _ignoreOTAEmbeddings;
    NSMutableDictionary *_sandboxExtensionHandlers;
    NSNumber *_requiredAssetsContentVersion;
}

@property (readonly, nonatomic) NSBundle *customBundle;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ddsQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *defaultsQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegatesQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notifyQueueNonBlocking;
@property (readonly, nonatomic) NSMutableSet *cachedOTALanguages;
@property (readonly, nonatomic) NSMutableSet *requestedOTALanguages;
@property (readonly, nonatomic) NSHashTable *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removeKey:(id)a0;
+ (id)userDefaults;
+ (id)identifier;
+ (id)defaultValueWithKey:(id)a0;
+ (void)setDefaultWithKey:(id)a0 value:(id)a1;
+ (id)defaultProperties;
+ (void)setVersionWithValue:(long long)a0;
+ (void)removeDefaults;
+ (long long)version;
+ (id)sharedDefaultsManager;
+ (id)lastLoadedBundleVersion;

- (void)registerDelegate:(id)a0;
- (void)didUpdateAssetsWithType:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unregisterDelegate:(id)a0;
- (id)resourceBundle;
- (id)allLoadedAssets;
- (id)assetConfigDump;
- (id)trialConfigDump;
- (void)_loadAssets:(id)a0 shouldUpdate:(BOOL)a1;
- (void)_unloadAssetsForLocale:(id)a0;
- (void)addFetchForLanguage:(id)a0;
- (id)assertionsDump;
- (id)assetBundleForLocale:(id)a0 client:(id)a1 force:(BOOL)a2;
- (id)assetConfig;
- (id)assetsFromResourcePath:(id)a0 deliveryType:(id)a1 assetType:(id)a2 language:(id)a3 force:(BOOL)a4;
- (id)currentAssetTypes;
- (id)currentNamespaceDescription;
- (id)currentNamespaces;
- (id)currentNamespacesForClient:(id)a0;
- (BOOL)didFetchForLanguage:(id)a0;
- (void)didUpdateTrialNamespace:(id)a0;
- (id)fetchedLanguages;
- (BOOL)hasTestAssets;
- (id)langConfig;
- (id)langConfigDump;
- (id)loadAssetsForLanguage:(id)a0 reload:(BOOL)a1 force:(BOOL)a2;
- (id)loadDefaultsForLocale:(id)a0 reload:(BOOL)a1 force:(BOOL)a2;
- (void)loadDefaultsFromDefaultAssets:(id)a0;
- (void)loadFactorsAtPath:(id)a0 namespaceId:(id)a1;
- (id)loadOTAAssetsForLanguage:(id)a0 updateCache:(BOOL)a1 assetTypes:(id)a2 force:(BOOL)a3;
- (void)loadSystemAssetsForLanguage:(id)a0 assetTypes:(id)a1;
- (void)loadTestAssetsForLanguage:(id)a0 assetTypes:(id)a1;
- (void)notifyObserversWithLanguage:(id)a0 bundleVersions:(id)a1 reloadFromCache:(BOOL)a2 force:(BOOL)a3;
- (id)parametersOfNamespaceWithName:(id)a0;
- (id)parametersOfNamespaceWithName:(id)a0 client:(id)a1;
- (void)refreshCacheForLanguages:(id)a0 force:(BOOL)a1 completion:(id /* block */)a2;
- (void)removeFetchForLanguage:(id)a0;
- (void)requestAssetsForLanguages:(id)a0 removeExisting:(BOOL)a1 force:(BOOL)a2;
- (void)requestCatalogUpdate;
- (id)requiredAssetsContentVersion;
- (void)unloadDefaultsForLocale:(id)a0;
- (void)updateFetchedLanguages:(id)a0;
- (void)updateParameter:(id)a0 inNamespace:(id)a1 withValue:(id)a2;

@end
