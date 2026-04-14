@class NSURLSession, NSString, _ICQAccountManager, FLFollowUpController, ICQNetworkThrottleController, _TtC11iCloudQuota15ICQTaskLimiters, NSNumber;

@interface ICQDaemonOfferManager : NSObject {
    FLFollowUpController *_followUpController;
    ICQNetworkThrottleController *_throttleController;
}

@property (class, readonly, nonatomic) NSString *ckBackupDeviceID;

@property (readonly, nonatomic) _ICQAccountManager *accountManager;
@property (readonly, nonatomic) NSURLSession *sharedURLSession;
@property (retain, nonatomic) _TtC11iCloudQuota15ICQTaskLimiters *taskLimiters;
@property (nonatomic) BOOL shouldDirectToStorageManagement;
@property (nonatomic, getter=isBuddyOfferEnabled) BOOL buddyOfferEnabled;
@property (nonatomic, getter=isSimulatedDeviceStorageAlmostFull) BOOL simulatedDeviceStorageAlmostFull;
@property (retain, nonatomic) NSNumber *simulatedPhotosLibrarySize;
@property (nonatomic, getter=isLegacyDeviceStorageLevelNotificationEnabled) BOOL legacyDeviceStorageLevelNotificationEnabled;

+ (id)sharedDaemonOfferManager;
+ (id)getCkBackupDeviceIDWithCompletionHandler:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)renewCredentialsWithCompletion:(id /* block */)a0;
- (id)initWithAccountManager:(id)a0;
- (void)displayDelayedOfferWithContext:(id)a0 completion:(id /* block */)a1;
- (void)updateOfferForAccount:(id)a0 offerId:(id)a1 buttonId:(id)a2 info:(id)a3 completion:(id /* block */)a4;
- (void)daemonOfferDictionaryForAccount:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id /* block */)_getHandlerForBundleId:(id)a0 options:(id)a1;
- (Class)daemonOfferClassFromBundleId:(id)a0 options:(id)a1;
- (void)daemonBuddyOfferDictionaryForAccount:(id)a0 completion:(id /* block */)a1;
- (void)processPushNotificationDictionary:(id)a0 completion:(id /* block */)a1;
- (void)teardownOffersForAccount:(id)a0 completion:(id /* block */)a1;
- (id)soonestOfferOrStubExpirationDate;
- (void)addCommonHeadersToRequest:(id)a0;
- (id)_storageManagementFollowupActions;
- (id)_storageManagementFollowupNotification;
- (id)_storageManagementFollowupItem;
- (void)_postStorageManagementFollowup;
- (void)_clearStorageManagementFollowup;
- (void)startDirectingToStorageManagement;
- (void)stopDirectingToStorageManagement;
- (void)reconsiderOffersWithCompletion:(id /* block */)a0;
- (void)reconsiderOffersWithReason:(id)a0 reuseLocalOffers:(BOOL)a1 completion:(id /* block */)a2;
- (void)_reconsiderLocalOffersWithReason:(id)a0 account:(id)a1 completion:(id /* block */)a2;
- (BOOL)_isCachedDaemonOfferValid:(id)a0 forAccount:(id)a1;
- (void)_processOfferStub:(id)a0 account:(id)a1 isPremiumOffer:(BOOL)a2;
- (void)clearAllFollowupsWithCompletion:(id /* block */)a0;
- (void)clearLegacyFollowups;
- (void)clearFollowupsIsPremiumOffer:(BOOL)a0 completion:(id /* block */)a1;
- (unsigned long long)daemonOfferSource;
- (BOOL)_useFetchOffersDataDirectly;
- (void)_daemonOfferStubsDictionaryForAccount:(id)a0 requestType:(long long)a1 quotaReason:(id)a2 completion:(id /* block */)a3;
- (void)_coalescedDaemonOfferStubsDictionaryForAccount:(id)a0 requestType:(long long)a1 quotaReason:(id)a2 completion:(id /* block */)a3;
- (void)_daemonLocalOfferStubsDictionaryForAccount:(id)a0 requestType:(long long)a1 completion:(id /* block */)a2;
- (BOOL)_isCacheValidForRequestType:(long long)a0 offerStubs:(id)a1;
- (void)_processPushNotificationCheckHardwareIDWithDictionary:(id)a0 completion:(id /* block */)a1;
- (void)_processPushNotificationDictionary:(id)a0 completion:(id /* block */)a1;
- (void)_clearCachedStubsIfOfferIDIsNew:(id)a0;
- (void)_fetchDictionaryForAccount:(id)a0 quotaKey:(id)a1 quotaReason:(id)a2 stub:(id)a3 notificationID:(id)a4 contextDictionary:(id)a5 mlDaemonExtraFields:(id)a6 completion:(id /* block */)a7;
- (void)addPremiumOffersHeaderIfNeededForRequest:(id)a0;
- (void)_mockFetchDictionaryForAccount:(id)a0 quotaKey:(id)a1 stub:(id)a2 notificationID:(id)a3 contextDictionary:(id)a4 completion:(id /* block */)a5;
- (void)_updateQuotaForAccount:(id)a0 withServerDictionary:(id)a1;
- (void)_fetchDaemonOfferForAccount:(id)a0 stub:(id)a1 notificationID:(id)a2 completion:(id /* block */)a3;
- (void)_coalescedFetchDaemonOfferForAccount:(id)a0 stub:(id)a1 notificationID:(id)a2 completion:(id /* block */)a3;
- (Class)_classForOfferStub:(id)a0;
- (void)_fetchDaemonOfferStubsForAccount:(id)a0 isForBuddy:(BOOL)a1 quotaReason:(id)a2 completion:(id /* block */)a3;
- (void)_showDaemonAlertForOffer:(id)a0 notificationDictionary:(id)a1 store:(id)a2 account:(id)a3 completion:(id /* block */)a4;
- (void)_postDaemonOfferChangedDueToPushDarwinNotificationRequestType:(long long)a0;
- (void)_persistAndNotifyMissingPlaceholdersForRequestType:(long long)a0 account:(id)a1;
- (void)_updateOffer:(id)a0 buttonId:(id)a1 info:(id)a2 account:(id)a3 accountStore:(id)a4 completion:(id /* block */)a5;
- (void)_teardownCachedOfferAndNotify:(BOOL)a0;
- (void)_teardownCachedDefaultOfferAndNotify:(BOOL)a0;
- (void)_teardownCachedBuddyOffer;
- (void)_teardownCachedPremiumOfferAndNotify:(BOOL)a0;
- (void)_teardownCachedOffersAndNotify:(BOOL)a0;
- (Class)_daemonOfferClassForRequestType:(long long)a0;
- (id)_placeholderOfferForAccount:(id)a0 requestType:(long long)a1 error:(id)a2;
- (void)_reconsiderOffersForAccount:(id)a0 isForBuddy:(BOOL)a1 quotaReason:(id)a2 choiceHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)_reconsiderOffersForAccount:(id)a0 isForBuddy:(BOOL)a1 quotaReason:(id)a2 options:(id)a3 choiceHandler:(id /* block */)a4 completion:(id /* block */)a5;
- (void)_coalescedReconsiderOffersForAccount:(id)a0 isForBuddy:(BOOL)a1 quotaReason:(id)a2 options:(id)a3 choiceHandler:(id /* block */)a4 completion:(id /* block */)a5;
- (id)_getStubsForRequestType:(long long)a0 fromDaemonStubs:(id)a1;
- (id)_getFetchOfferStubsFromStubs:(id)a0;
- (void)_handlerMultipleStubs:(id)a0 forAccount:(id)a1 requestType:(long long)a2 completion:(id /* block */)a3;
- (void)_logErrorsForFetchOfferResultWithOffer:(id)a0 error:(id)a1 isForBuddy:(BOOL)a2;
- (void)_postFollowupForDaemonOffer:(id)a0 replaceExisting:(BOOL)a1 completion:(id /* block */)a2;
- (void)_postUserNotification:(id)a0 completion:(id /* block */)a1;
- (void)postOfferType:(id)a0;
- (void)postBuddyOfferType:(id)a0;
- (void)_postOfferType:(id)a0 isForBuddy:(BOOL)a1;
- (void)forcePostFollowup;
- (void)teardownCachedOffer;
- (void)teardownCachedBuddyOffer;
- (void)tearDownCachedPremiumOffer;
- (void)teardownCachedOffers;

@end
