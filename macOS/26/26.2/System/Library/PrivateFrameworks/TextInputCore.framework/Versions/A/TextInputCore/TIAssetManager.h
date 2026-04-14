@class NSTimer, NSString, NSArray, NSDate, TIRequestedInputModes, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, TIInputModePreferenceProvider;

@interface TIAssetManager : NSObject <DDSAssetCenterDelegate, TIAssetManaging> {
    NSMutableArray *_notificationTokens;
    NSMutableSet *_languagesWithWarmedAssets;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSArray *requestedInputModes_mainThreadCache;
@property (readonly, nonatomic) id<TIInputModePreferenceProvider> inputModePreferenceProvider;
@property (retain, nonatomic) NSArray *currentActiveRegions;
@property (retain, nonatomic) NSArray *currentNormalizedActiveRegions;
@property (readonly, nonatomic) double requestExpirationInterval;
@property (retain, nonatomic) NSTimer *didUpdateAssetsTimer;
@property (readonly, nonatomic) NSMutableSet *languagesWithWarmedAssets;
@property (readonly, nonatomic) TIRequestedInputModes *requestedInputModes;
@property (copy, nonatomic) NSDate *lastMeCardRegionFetchTime;
@property (copy, nonatomic) NSArray *cachedMeCardRegions;
@property (copy, nonatomic) id /* block */ enabledInputModeIdentifiersProviderBlock;
@property (copy, nonatomic) id /* block */ preferencesProviderBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)singletonInstanceWithEnabledInputModesProvider:(id /* block */)a0;
+ (id)_addressFromRegion:(id)a0;
+ (void)setSharedAssetManager:(id)a0;
+ (id)sharedAssetManager;
+ (long long)assetUpdateStatusforDDSAssetUpdateStatus:(long long)a0;
+ (id)sharedAssetManagerWithEnabledInputModesProvider:(id /* block */)a0;
+ (id)_regionFromAddress:(id)a0;

- (void)addLinguisticAssetsAssertionForLanguage:(id)a0 assertionID:(id)a1 region:(id)a2 clientID:(id)a3 withHandler:(id /* block */)a4;
- (void)_warmAssetQueryForLanguage:(id)a0;
- (void)ddsAssetContentItemsWithContentType:(id)a0 inputMode:(id)a1 filteredWithRegion:(BOOL)a2 completion:(id /* block */)a3;
- (void)addAssertionWithInputMode:(id)a0 assertionID:(id)a1 potentialRegions:(id)a2;
- (void)fetchAssetUpdateStatusForInputModeIdentifier:(id)a0 callback:(id /* block */)a1;
- (id)_ddsContentItemsFromAssets:(id)a0 contentType:(id)a1 filteredWithRegion:(BOOL)a2;
- (id)assetTypeForAssertionId:(id)a0;
- (void)updateAssetForInputModeIdentifier:(id)a0 callback:(id /* block */)a1;
- (void)ddsAssetsForInputMode:(id)a0 cachedOnly:(BOOL)a1 completion:(id /* block */)a2;
- (void)appleKeyboardsPreferencesChanged:(id)a0;
- (void)didUpdateAssetsWithType:(id)a0;
- (id)updatedActiveRegions;
- (id)ddsLinguisticAssetQueryWithAssetType:(id)a0 inputModeIdentifier:(id)a1 withRegions:(id)a2;
- (id)initForTestingWithRequestedInputModes:(id)a0 inputModePreferenceProvider:(id)a1 enabledInputModesProvider:(id /* block */)a2;
- (BOOL)inputModeHasRegions:(id)a0;
- (id)_ddsAssetsForAssetType:(id)a0 languageIdentifier:(id)a1 cachedOnly:(BOOL)a2;
- (void)_warmAssetQueriesForInputModes:(id)a0;
- (void)registerForNotifications;
- (void)didUpdateAssets;
- (void)normalizedRegionsForGeoCodedAddresses:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithRequestedInputModes:(id)a0 inputModePreferenceProvider:(id)a1 enabledInputModesProvider:(id /* block */)a2;
- (id)_ddsAssetsForLanguageIdentifier:(id)a0 cachedOnly:(BOOL)a1;
- (id)ddsLanguageIdentifierFromInputMode:(id)a0;
- (id)localeIdentifierForAssertionId:(id)a0 inputMode:(id)a1;
- (id)multilingualLocaleIdentifierForInputMode:(id)a0;
- (void).cxx_destruct;
- (void)requestAssetDownloadForLanguage:(id)a0 completion:(id /* block */)a1;
- (id)enabledInputModes;
- (id)ddsAssertionIDsFromInputMode:(id)a0 withPotentialRegions:(id)a1;
- (void)getActiveRegionsWithCompletion:(id /* block */)a0;
- (void)unregisterForNotifications;
- (void)updatedActiveRegionsWithCompletionWithCompletion:(id /* block */)a0;
- (id)activeInputModes;
- (id)ddsLinguisticAssetQueryForInputModeIdentifier:(id)a0 withRegions:(id)a1;
- (id)activeInputModeLevels;
- (BOOL)requireMecabraDictionaryRapidUpdatesAssetsForLanguageIdentifier:(id)a0;
- (id)ddsAssetContentItemsWithContentType:(id)a0 inputMode:(id)a1 filteredWithRegion:(BOOL)a2;
- (id)levelsForInputMode:(id)a0;
- (id)init;
- (void)_warmLDEnumerateAssetQueriesForInputMode:(id)a0;
- (void)removeLinguisticAssetsAssertionWithIdentifier:(id)a0 forClientID:(id)a1 withHandler:(id /* block */)a2;
- (void)scheduleAssetsDidChangeNotificationWithDelay:(double)a0;
- (id)defaultEnabledInputModes;
- (id)topActiveRegions;
- (void)dealloc;
- (void)updateAssertionsForInputModes:(id)a0;

@end
