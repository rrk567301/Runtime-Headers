@class NFLazy, NSString, NSDate, FCKeyValueStore, NSSet, NSMutableDictionary, NSDictionary, FCAsyncSerialQueue, NSObject, FCPurchaseLookUpEntriesManager, FCEntitlementService, FCCloudContext;
@protocol OS_dispatch_queue, FCEntitlementsOverrideProviderType;

@interface FCPurchaseController : NSObject <FCUserInfoObserving, FCAppActivityObserving, FCPurchaseProviderType> {
    NSSet *_purchasesDiscoveredTagIDs;
    NSMutableDictionary *_webAccessEntriesByTagID;
    FCCloudContext *_cloudContext;
    NFLazy *_session;
    FCKeyValueStore *_localStore;
    FCPurchaseLookUpEntriesManager *_purchaseLookupEntriesManager;
    NSDictionary *_readOnlyPurchaseLookUpEntriesByTagID;
    NSDate *_lastEntitlementCheckTime;
    NSObject<OS_dispatch_queue> *_accessQueue;
    FCAsyncSerialQueue *_entitlementQueue;
    FCEntitlementService *_entitlementService;
}

@property (readonly, nonatomic) NSString *lastSignedInItunesAccountName;
@property (readonly, nonatomic) NSSet *purchasesDiscoveredTagIDs;
@property (readonly, nonatomic) NSDictionary *purchaseLookUpEntriesByTagID;
@property (readonly, nonatomic) NSMutableDictionary *webAccessEntriesByTagID;
@property (readonly, nonatomic) NSSet *allPurchasedTagIDs;
@property (readonly, nonatomic) NSSet *allPurchaseIDs;
@property (readonly, nonatomic) NSSet *allTagIDs;
@property (retain, nonatomic) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *purchasedTagIDs;

- (void)submitWebAccessWithTagID:(id)a0 purchaseID:(id)a1 emailAddress:(id)a2 purchaseReceipt:(id)a3 serialCompletion:(id /* block */)a4 completion:(id /* block */)a5;
- (void)clearAllAppStorePurchases;
- (void)dealloc;
- (void)addAppStorePurchaseWithTagID:(id)a0 purchaseID:(id)a1;
- (BOOL)isTagIDPurchased:(id)a0;
- (void)updatePurchaseEntryToExpired:(id)a0;
- (id)expiredPurchaseChannelIDs;
- (void)shouldShowSignedInWithDifferentiTunesAccountAlertWithiTunesAccountName:(id)a0 iTunesAccountDSID:(id)a1 isUserSignedIntoiTunes:(BOOL)a2 isBundleSubscriber:(BOOL)a3 completion:(id /* block */)a4;
- (BOOL)hasRenewalNoticeShownForTagID:(id)a0;
- (BOOL)isPaidSubscriberFromWeb;
- (id)purchaseLookUpEntryForTagID:(id)a0;
- (void)addToWebAccessOptedInListWithTagID:(id)a0;
- (id)initWithCloudContext:(id)a0 entitlementService:(id)a1;
- (id)init;
- (BOOL)isTagPurchased:(id)a0;
- (void)updatePurchaseEntryToExpiredForTagIDs:(id)a0;
- (void)verifyAccessTokenWithTagID:(id)a0 accessToken:(id)a1 consumedArticleCount:(unsigned long long)a2 serialCompletion:(id /* block */)a3 callbackQueue:(id)a4 completion:(id /* block */)a5;
- (void)renewalNoticeShownForPurchasedChannelsListWithTagIDs:(id)a0;
- (BOOL)isPaidSubscriberFromNews;
- (void)activityObservingApplicationDidEnterBackground;
- (void)performEntitlementCheckWithIgnoreCache:(BOOL)a0 callbackQueue:(id)a1 completion:(id /* block */)a2;
- (void)userInfo:(id)a0 didChangeAccessTokenForTagID:(id)a1;
- (void)removeFromPurchasedChannelsListWithTagIDs:(id)a0;
- (BOOL)isPaidSubscriberFromAppStore;
- (void)userInfo:(id)a0 didRemoveAccessTokenForTagID:(id)a1 userInitiated:(BOOL)a2;
- (BOOL)hasPurchaseTypeAppStore;
- (void)removeFromPurchasesDiscoveredList:(id)a0 completion:(id /* block */)a1;
- (void)forceExpireAllSubscriptionsIfNeeded;
- (void)removeWebPurchaseForTagID:(id)a0 userInitiated:(BOOL)a1;
- (BOOL)isPaidSubscriber;
- (id)webAccessOptedInTagIDs;
- (void)shouldShowiTunesSignedOutAlertWithiTunesAccountName:(id)a0 iTunesAccountDSID:(id)a1 isUserSignedIntoiTunes:(BOOL)a2 isBundleSubscriber:(BOOL)a3 completion:(id /* block */)a4;
- (void)silentExpireInAppSubscriptions;
- (void).cxx_destruct;
- (id)subscriptionNotSupportedChannelIDs;

@end
