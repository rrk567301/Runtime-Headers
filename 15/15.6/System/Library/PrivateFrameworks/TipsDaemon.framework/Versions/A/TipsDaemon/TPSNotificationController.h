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
@property (readonly, nonatomic, getter=isNotificationSettingValid) char notificationSettingValid;
@property (weak, nonatomic) id<TPSNotificationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsNotification;
+ (double)standardNotificationInterval;
+ (char)alwaysDisplayCollectionIcon;
+ (id)cacheDirectoryCreateIfEmpty:(char)a0;
+ (id)displayDarwinNotificationKey;
+ (char)isValidNotificationInterval;
+ (long long)remainingCountOfNotificationsUntilOptOut;
+ (void)removeAssetCacheDirectory;
+ (void)removeNotificationCache;
+ (char)respectsOptOut;
+ (long long)softOptOutNotificationCount;
+ (char)supportsExtension;
+ (char)supportsRemoteIcon;
+ (char)supportsWelcomeNotification;

- (id)init;
- (void).cxx_destruct;
- (void)removeAllNotifications;
- (void)removeNotificationWithIdentifier:(id)a0;
- (void)dataProviderManager:(id)a0 didReceiveCallbackWithResult:(id)a1 type:(long long)a2;
- (id)assetsConfigurationForDocument:(id)a0;
- (void)_registerWakingEvents;
- (void)_unregisterAllWakingEvents;
- (void)_updateNotificationCache;
- (void)_updateWakingEventMapCache;
- (id)cacheAssetFileURLForDocument:(id)a0;
- (id)cacheFilePathForFile:(id)a0;
- (char)canUpdateHintEligibilityForIdentifier:(id)a0;
- (void)clearNotificationCache;
- (void)clearNotificationCount;
- (char)collectionEligibleForNotification:(id)a0;
- (id)copyFileURL:(id)a0 cachePath:(id)a1;
- (id)documentToNotifyForCollection:(id)a0 collectionDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2 overrideOptOutContentOnly:(char)a3;
- (id)documentToNotifyForTipsInCollection:(id)a0 tipMap:(id)a1 tipDeliveryInfoMap:(id)a2 deliveryInfoMap:(id)a3 overrideOptOutContentOnly:(char)a4;
- (void)fetchNotificationAssetIfNeededCompletionHandler:(id /* block */)a0;
- (char)isDocumentHintDisplayedOnOtherDevices:(id)a0;
- (char)isNotificationDeliveryInfoValid:(id)a0 identifier:(id)a1 overrideOptOutContentOnly:(char)a2 ignoreSuppressContent:(char)a3;
- (char)isSoftOptedOut;
- (id)notificationDeliveryInfoForIdentifier:(id)a0 documentDeliveryIdentifierMap:(id)a1 deliveryInfoMap:(id)a2;
- (void)notificationPosted;
- (char)preconditionValidForIdentifier:(id)a0 documentDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2 overrideOptOutContentOnly:(char)a3 ignoreSuppressContent:(char)a4;
- (void)registerWakingEventsForDeliveryIdentifierMap:(id)a0 deliveryInfoMap:(id)a1;
- (char)shouldDisplayCollectionIcon;
- (void)showNotificationWithCompletionHandler:(id /* block */)a0;
- (id)tipDocumentToNotifyWithIdentifier:(id)a0 tipMap:(id)a1 tipDeliveryInfoMap:(id)a2 deliveryInfoMap:(id)a3 overrideOptOutContentOnly:(char)a4;
- (void)updateDocumentToNotifyWithPreferredIdentifiers:(id)a0 collectionOrder:(id)a1 collectionMap:(id)a2 collectionDeliveryIdentifierMap:(id)a3 tipMap:(id)a4 tipsDeliveryIdentifierMap:(id)a5 deliveryInfoMap:(id)a6 documentDictionaryMap:(id)a7 metadataDictionary:(id)a8 completionHandler:(id /* block */)a9;
- (char)updateHintEligibleForTip:(id)a0 isValid:(char)a1;
- (id)updateNotificationCacheWithCollectionIdentifier:(id)a0 document:(id)a1 type:(unsigned long long)a2 extensionPayload:(id)a3;
- (void)updateNotificationCount;
- (void)updateNotificationRegistrationEventsWithCollectionDeliveryIdentifierMap:(id)a0 tipsDeliveryIdentifierMap:(id)a1 deliveryInfoMap:(id)a2 completionHandler:(id /* block */)a3;

@end
