@class TPSSavedTipsManager, NSError, NSArray, TPSFullTipContentManager, NSHashTable, NSUUID, NSDictionary, TPSAssetSizes, TPSUserGuide, NSUserDefaults, TPSCollection;

@interface TPSAppController : NSObject

@property (retain, nonatomic) NSError *lastFetchError;
@property (retain, nonatomic) TPSCollection *checklistCollection;
@property (retain, nonatomic) TPSCollection *featuredCollection;
@property (retain, nonatomic) TPSCollection *savedTipsCollection;
@property (retain, nonatomic) TPSCollection *userGuideCollection;
@property (retain, nonatomic) NSArray *collections;
@property (retain, nonatomic) NSArray *collectionSections;
@property (retain, nonatomic) NSDictionary *hmtCollectionMap;
@property (retain, nonatomic) NSDictionary *userGuideMap;
@property (retain, nonatomic) NSDictionary *collectionMap;
@property (retain, nonatomic) NSDictionary *collectionSectionMap;
@property (retain, nonatomic) NSDictionary *tipMap;
@property (retain, nonatomic) TPSFullTipContentManager *fullTipContentManager;
@property (retain, nonatomic) TPSSavedTipsManager *savedTipsManager;
@property (retain, nonatomic) TPSAssetSizes *assetSizes;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) NSUserDefaults *appGroupDefaults;
@property (retain, nonatomic) NSUUID *networkMonitorToken;
@property (nonatomic) BOOL alwaysShowIntro;
@property (nonatomic) BOOL contentHasLoaded;
@property (nonatomic) BOOL updatingContent;
@property (nonatomic) BOOL appInBackground;
@property (readonly, nonatomic) TPSUserGuide *mainUserGuide;
@property (readonly, nonatomic) NSArray *supportFlows;
@property (readonly, nonatomic) NSArray *userGuides;
@property (readonly, nonatomic) NSArray *tipCollections;
@property (readonly, nonatomic) NSArray *tips;

+ (id)sharedInstance;

- (void)updateContent;
- (id)collectionStatusForCollection:(id)a0;
- (void)dealloc;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (id)init;
- (void)reloadAppGroupDefaults;
- (void).cxx_destruct;
- (void)networkStateDidChange:(BOOL)a0;
- (id)collectionForIdentifier:(id)a0;
- (id)collectionSectionForIdentifier:(id)a0;
- (void)tipViewed:(id)a0 collectionIdentifier:(id)a1;
- (id)assetConfigurationForAssets:(id)a0 language:(id)a1 userInterfaceStyle:(long long)a2 assetFileInfoManager:(id)a3;
- (id)collectionIdentifierForTipIdentifier:(id)a0;
- (void)collectionIdentifierViewed:(id)a0;
- (void)contentForVariant:(id)a0 completionHandler:(id /* block */)a1;
- (void)contentWillUpdate;
- (id)delegateEnumerator;
- (void)fetchAssetsWithAssetsConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)hasLocalVariant:(id)a0;
- (void)logInvalidSharedTipDisplayed:(id)a0;
- (void)logSharedTipDisplayed:(id)a0 isEligible:(BOOL)a1;
- (id)mainUserGuide;
- (void)removeAllContent;
- (void)removeNotificationForIdentifier:(id)a0;
- (id)tipCollections;
- (id)tipForCorrelationIdentifier:(id)a0;
- (id)tipForIdentifier:(id)a0;
- (id)tipForIdentifier:(id)a0 includingCorrelation:(BOOL)a1;
- (id)tipForVariantIdentifier:(id)a0;
- (id)tipsForCollection:(id)a0;
- (id)tipsForCollectionIdentifier:(id)a0;
- (void)updateSavedTipsContent;
- (id)userGuideWithIdentifier:(id)a0;
- (id)userGuides;

@end
