@class NSHashTable, NSDate, NSString, FCCommandQueue, FCNewsletterEndpointConnection, FCUserInfo, FCCKPrivateDatabase, NFPromise;
@protocol FCBundleSubscriptionManagerType, FCNewsAppConfigurationManager, FCAppleAccount;

@interface FCNewsletterManager : NSObject <FCNewsletterManager, FCAppActivityObserving, FCAppleAccountObserver>

@property (nonatomic) long long subscription;
@property (nonatomic) long long includeOptions;
@property (readonly, nonatomic) FCNewsletterEndpointConnection *endpointConnection;
@property (readonly, nonatomic) FCCommandQueue *endpointCommandQueue;
@property (readonly, nonatomic) id<FCAppleAccount> appleAccount;
@property (readonly, nonatomic) id<FCNewsAppConfigurationManager> appConfig;
@property (readonly, nonatomic) FCUserInfo *userInfo;
@property (readonly, nonatomic) id<FCBundleSubscriptionManagerType> bundleSubscriptionManager;
@property (readonly, nonatomic) FCCKPrivateDatabase *database;
@property (readonly, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSDate *cacheExpiration;
@property (retain, nonatomic) NFPromise *updateSubscriptionPromise;
@property (retain, nonatomic) NSString *cachedVector;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) long long activeNewsletter;
@property (readonly, nonatomic) BOOL isSubscribed;
@property (readonly, nonatomic) BOOL canSubscribe;
@property (readonly, nonatomic) BOOL canUnsubscribe;
@property (readonly, nonatomic) BOOL includeUserVector;
@property (readonly, nonatomic) BOOL includeBundleSubscribedVector;
@property (readonly, nonatomic) BOOL includeSportsVector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)subscribe;
- (void)resetCaches;
- (void)unsubscribe;
- (double)cacheTimeout;
- (void)notifyObservers;
- (void)activityObservingApplicationDidBecomeActive;
- (long long)subscriptionStatusForNewsletter:(long long)a0;
- (BOOL)canSubscribeToNewsletter:(long long)a0;
- (BOOL)isSignedIntoEmailAccount;
- (long long)issueOptinStatus;
- (BOOL)isEligibleForIssues;
- (BOOL)isOptedIntoIssues;
- (void)optOutOfIssues;
- (id)updateSubscription;
- (id)forceUpdateSubscription;
- (void)updateCacheWithNewsletterString:(id)a0 includeArray:(id)a1;
- (BOOL)shouldSubmitPersonalizationVector;
- (void)submitPersonalizationVector:(id)a0 subscribedBundleChannelIDs:(id)a1;
- (void)deletePersonalizationVector;
- (void)appleAccountChanged;
- (id)initWithEndpointConnection:(id)a0 endpointCommandQueue:(id)a1 appleAccount:(id)a2 appConfig:(id)a3 userInfo:(id)a4 bundleSubscriptionManager:(id)a5 privateDataContext:(id)a6;
- (BOOL)canOptIntoIssues;
- (void)subscribeTo:(long long)a0 includeOptions:(long long)a1;
- (void)subscribeTo:(long long)a0;
- (void)saveToCloudKitSubscribedChannels:(id)a0;
- (void)notifyObserversWithPreviousSubscription:(long long)a0;

@end
