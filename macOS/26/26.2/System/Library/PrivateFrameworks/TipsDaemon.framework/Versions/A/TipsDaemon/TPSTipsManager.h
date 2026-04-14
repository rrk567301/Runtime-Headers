@class NSString, TPSNotificationController, NSDictionary, TPSWidgetController, TPSExperiment, TPSTipStatusController, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, TPSTipsManagerDelegate;

@interface TPSTipsManager : NSObject <TPSWidgetControllerDelegate, TPSDeviceProfileDataSource>

@property (nonatomic) BOOL contextualTipsInactive;
@property (retain, nonatomic) TPSTipStatusController *tipStatusController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableArray *sessionItems;
@property (copy, nonatomic) TPSExperiment *experiment;
@property (copy, nonatomic) NSString *rulesVersion;
@property (retain, nonatomic) TPSWidgetController *widgetController;
@property (weak, nonatomic) id<TPSTipsManagerDelegate> delegate;
@property (retain, nonatomic) NSDictionary *cachedUserGuideMap;
@property (retain, nonatomic) NSString *lastFetchedLanguage;
@property (retain, nonatomic) TPSNotificationController *notificationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)experiment;
+ (BOOL)needImmediateNotificationForType:(unsigned long long)a0;
+ (id)rulesVersion;
+ (void)removeWelcomeDocumentCache;
+ (void)removeWidgetUpdateDate;
+ (void)presentReentryNotificationIfNeeded;
+ (id)immediateNotificationIdentifierForType:(unsigned long long)a0;
+ (BOOL)supportsFeaturedCollection;
+ (BOOL)tipKitProcessingEligible;
+ (BOOL)deviceLocalesContainLanguage:(id)a0;
+ (void)removeExperimentCache;
+ (void)resetContentUpdatedNotificationDate;

- (id)featureCollectionFromCollectionMap:(id)a0 collectionOrder:(id)a1 tipMap:(id)a2;
- (id)collectionSectionMapWithCollections:(id)a0 availableCollectionSections:(id)a1 collectionIdToCollectionLabelMap:(id)a2;
- (void)_updatePauseStatus:(BOOL)a0;
- (id)collectionSectionsFromCollectionMap:(id)a0 exclude:(id)a1;
- (id)categorizedMapWithDocumentMap:(id)a0;
- (void)_updateExperimentCache;
- (id)welcomeCollectionFromContentPackage:(id)a0;
- (void)processTipDocumentsDictionary:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isContentIdentifierHoldoutCamp:(id)a0;
- (BOOL)shouldPerformWidgetUpdate;
- (void)reindexAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (void)processClientConditions:(id)a0 targetingCache:(id)a1 completionHandler:(id /* block */)a2;
- (void)contentForVariantIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)processTipsDeliveryInfo:(id)a0 deliveryInfoMap:(id)a1 targetingCache:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)widgetController:(id)a0 validForDocument:(id)a1 documentDeliveryInfoMap:(id)a2 deliveryInfoMap:(id)a3;
- (id)updateDocumentContent:(id)a0 withClientConditions:(id)a1 metadata:(id)a2 checklistCompletedConditions:(id)a3 usingDictionary:(id)a4;
- (void)processCollection:(id)a0 collectionsMap:(id)a1 deliveryInfoMap:(id)a2 ignoreSection:(BOOL)a3 completionHandler:(id /* block */)a4;
- (BOOL)hasWidgetDocument;
- (void)postContentUpdatedNotificationIfNeeded;
- (void)clearCachedUserGuides;
- (BOOL)isHardwareWelcome;
- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)finalEligibleContentWithCollections:(id)a0 collectionsMap:(id)a1 collectionDeliveryInfoMap:(id)a2 eligibleTipIdentifiers:(id)a3 eligibleContextualTipIdentifiers:(id)a4 allFullTipsMap:(id)a5 tipDeliveryInfoMap:(id)a6 deliveryInfoMap:(id)a7 metadata:(id)a8 completionHandler:(id /* block */)a9;
- (id)updatedHMTCollectionSectionMapFromMap:(id)a0 featuredCollections:(id)a1;
- (id)collectionSectionsWithEligibleCollectionSections:(id)a0 collectionSectionMap:(id)a1 featuredCollection:(id)a2;
- (id)hmtFeaturedCollectionsWithCollectionMap:(id)a0 collectionDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2;
- (BOOL)checklistCollectionHasMinSuggestedTips:(id)a0 tipMap:(id)a1;
- (void)requestWithURL:(id)a0 identifier:(id)a1 attributionIdentifier:(id)a2 requestType:(id)a3 priority:(float)a4 shouldDeferBlock:(id /* block */)a5 completionHandler:(id /* block */)a6;
- (void)updateSupplementalIdentifiersForIdentifier:(id)a0 fromDictionary:(id)a1;
- (id)processUserGuidesFromContentPackage:(id)a0;
- (id)welcomeDocumentFromContentPackage:(id)a0;
- (void)userGuideMapWithUserGuideCollection:(id)a0 tipMap:(id)a1 completionHandler:(id /* block */)a2;
- (id)collectionStatusForCollection:(id)a0;
- (void)updateContentIfOverrideImmediately:(BOOL)a0;
- (void)reindexSearchableItemsWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithTipStatusController:(id)a0;
- (void)contentWithMetaDictionary:(id)a0 documentsDictionary:(id)a1 processTipKitContent:(BOOL)a2 contextualEligibility:(BOOL)a3 widgetEligibility:(BOOL)a4 notificationEligibility:(BOOL)a5 userGuideEligibility:(BOOL)a6 preferredNotificationIdentifiers:(id)a7 completionHandler:(id /* block */)a8;
- (void)contentFromOrigin:(BOOL)a0 systemEducationRequest:(BOOL)a1 processTipKitContent:(BOOL)a2 contextualEligibility:(BOOL)a3 widgetEligibility:(BOOL)a4 notificationEligibility:(BOOL)a5 preferredNotificationIdentifiers:(id)a6 shouldDeferBlock:(id /* block */)a7 completionHandler:(id /* block */)a8;

@end
