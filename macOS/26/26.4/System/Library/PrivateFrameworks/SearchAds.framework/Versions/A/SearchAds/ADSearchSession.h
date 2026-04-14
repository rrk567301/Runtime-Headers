@class NSString, ADCapService, ADParameterFactory, ADClientIdentifierProvider, _TtC9SearchAds14ADTrialManager, NSObject;
@protocol OS_dispatch_queue, APLegacyFeatureFlagsProviding, NSObject;

@interface ADSearchSession : NSObject {
    NSObject<OS_dispatch_queue> *_idNotificationQueue;
}

@property (retain, nonatomic) ADCapService *capService;
@property (retain, nonatomic) ADParameterFactory *parameterFactory;
@property (retain, nonatomic) NSString *campaignNamespace;
@property (retain, nonatomic) id<NSObject> notificationObserver;
@property (nonatomic) BOOL notificationReceivedAndWaiting;
@property (retain, nonatomic) NSString *clientRequestID;
@property (retain, nonatomic) ADClientIdentifierProvider *idProvider;
@property (retain, nonatomic) id<APLegacyFeatureFlagsProviding> featureFlagsProvider;
@property (readonly, nonatomic) _TtC9SearchAds14ADTrialManager *trialManager;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) int appsRank;

- (id)rotatingIdentifiersProperties;
- (BOOL)startUpdatingIDs;
- (id)initWithAppID:(id)a0 appVersion:(id)a1 appsRank:(int)a2;
- (id)adParameters;
- (id)_jsVersion;
- (void).cxx_destruct;
- (id)campaignNamespaceParameter;
- (id)initWithAppID:(id)a0 appVersion:(id)a1 appsRank:(int)a2 storeFront:(id)a3;
- (id)userTargetingProperties;
- (id)sponsoredSearchRequestForLanguageLocale:(id)a0;
- (void)requestUserTargetingIdentifier:(id /* block */)a0;
- (id)populateStoreFrontLanguageLocale:(id)a0;
- (void)requestSponsoredSearchURL:(id /* block */)a0;
- (void)dealloc;
- (void)searchObjectForCriteria:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_createSearchObjectForCriteria:(id)a0;

@end
