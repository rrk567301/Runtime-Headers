@class TPSLocalNotificationController, TPSEventsProviderManager, NSMutableDictionary, NSBundle, NSString, NSObject, TPSNotificationCache;
@protocol OS_dispatch_queue, TPSNotificationControllerDelegate;

@interface TPSNotificationController : NSObject <TPSDEventsProviderManagerDelegate>

@property (retain, nonatomic) NSMutableDictionary *assetURLSessionMap;
@property (retain, nonatomic) TPSEventsProviderManager *eventsProviderManager;
@property (retain, nonatomic) NSBundle *frameworkBundle;
@property (retain, nonatomic) TPSLocalNotificationController *localNotificationController;
@property (retain, nonatomic) TPSNotificationCache *notificationCache;
@property (retain, nonatomic) NSMutableDictionary *registeredWakingEventMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) long long notificationCount;
@property (readonly, nonatomic, getter=isNotificationSettingValid) BOOL notificationSettingValid;
@property (weak, nonatomic) id<TPSNotificationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)standardNotificationInterval;
+ (BOOL)supportsNotification;
+ (BOOL)alwaysDisplayCollectionIcon;
+ (id)cacheDirectoryCreateIfEmpty:(BOOL)a0;
+ (id)displayDarwinNotificationKey;
+ (BOOL)isValidNotificationInterval;
+ (long long)remainingCountOfNotificationsUntilOptOut;
+ (void)removeAssetCacheDirectory;
+ (void)removeNotificationCache;
+ (BOOL)respectsOptOut;
+ (long long)softOptOutNotificationCount;
+ (BOOL)supportsExtension;
+ (BOOL)supportsRemoteIcon;
+ (BOOL)supportsWelcomeNotification;

- (id)copyFileURL:(id)a0 cachePath:(id)a1;
- (void)_registerWakingEvents;
- (void)clearNotificationCount;
- (id)cacheAssetFileURLForDocument:(id)a0;
- (void)removeNotificationWithIdentifier:(id)a0;
- (id)updateNotificationCacheWithCollectionIdentifier:(id)a0 document:(id)a1 type:(unsigned long long)a2 extensionPayload:(id)a3;
- (BOOL)shouldDisplayCollectionIcon;
- (id)notificationDeliveryInfoForIdentifier:(id)a0 documentDeliveryIdentifierMap:(id)a1 deliveryInfoMap:(id)a2;
- (id)tipDocumentToNotifyWithIdentifier:(id)a0 tipMap:(id)a1 tipDeliveryInfoMap:(id)a2 deliveryInfoMap:(id)a3 overrideOptOutContentOnly:(BOOL)a4;
- (BOOL)preconditionValidForIdentifier:(id)a0 documentDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2 overrideOptOutContentOnly:(BOOL)a3 ignoreSuppressContent:(BOOL)a4;
- (BOOL)updateHintEligibleForTip:(id)a0 isValid:(BOOL)a1;
- (void)updateNotificationRegistrationEventsWithCollectionDeliveryIdentifierMap:(id)a0 tipsDeliveryIdentifierMap:(id)a1 deliveryInfoMap:(id)a2 completionHandler:(id /* block */)a3;
- (void)updateNotificationCount;
- (BOOL)collectionEligibleForNotification:(id)a0;
- (id)documentToNotifyForTipsInCollection:(id)a0 tipMap:(id)a1 tipDeliveryInfoMap:(id)a2 deliveryInfoMap:(id)a3 overrideOptOutContentOnly:(BOOL)a4;
- (void)fetchNotificationAssetIfNeededCompletionHandler:(id /* block */)a0;
- (BOOL)canUpdateHintEligibilityForIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_unregisterAllWakingEvents;
- (void)_updateNotificationCache;
- (BOOL)isNotificationDeliveryInfoValid:(id)a0 identifier:(id)a1 overrideOptOutContentOnly:(BOOL)a2 ignoreSuppressContent:(BOOL)a3;
- (void)showNotificationWithCompletionHandler:(id /* block */)a0;
- (void)updateDocumentToNotifyWithPreferredIdentifiers:(id)a0 collectionOrder:(id)a1 collectionMap:(id)a2 collectionDeliveryIdentifierMap:(id)a3 tipMap:(id)a4 tipsDeliveryIdentifierMap:(id)a5 deliveryInfoMap:(id)a6 documentDictionaryMap:(id)a7 metadataDictionary:(id)a8 completionHandler:(id /* block */)a9;
- (id)init;
- (BOOL)isDocumentHintDisplayedOnOtherDevices:(id)a0;
- (void)notificationPosted;
- (id)cacheFilePathForFile:(id)a0;
- (BOOL)isSoftOptedOut;
- (void)registerWakingEventsForDeliveryIdentifierMap:(id)a0 deliveryInfoMap:(id)a1;
- (void)dataProviderManager:(id)a0 didReceiveCallbackWithResult:(id)a1 type:(long long)a2;
- (void)removeAllNotifications;
- (void)_updateWakingEventMapCache;
- (id)documentToNotifyForCollection:(id)a0 collectionDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2 overrideOptOutContentOnly:(BOOL)a3;
- (void)clearNotificationCache;
- (id)assetsConfigurationForDocument:(id)a0;

@end
