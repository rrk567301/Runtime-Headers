@class NSString, ADCapService, ADParameterFactory, ADClientIdentifierProvider, NSObject;
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
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) int appsRank;

- (id)userTargetingProperties;
- (id)populateStoreFrontLanguageLocale:(id)a0;
- (void)dealloc;
- (BOOL)startUpdatingIDs;
- (id)sponsoredSearchRequestForLanguageLocale:(id)a0;
- (void)searchObjectForCriteria:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)requestUserTargetingIdentifier:(id /* block */)a0;
- (id)adParameters;
- (id)initWithAppID:(id)a0 appVersion:(id)a1 appsRank:(int)a2 storeFront:(id)a3;
- (id)campaignNamespaceParameter;
- (id)initWithAppID:(id)a0 appVersion:(id)a1 appsRank:(int)a2;
- (id)rotatingIdentifiersProperties;
- (id)_jsVersion;
- (void)requestSponsoredSearchURL:(id /* block */)a0;
- (void).cxx_destruct;
- (void)requestSponsoredSearchDataRoutingInfoAndRequestIDForLocality:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
