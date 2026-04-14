@class NSString, ADCapService, ADParameterFactory, NSObject;
@protocol OS_dispatch_queue;

@interface ADSearchSession : NSObject {
    NSObject<OS_dispatch_queue> *_idNotificationQueue;
}

@property (retain, nonatomic) ADCapService *capService;
@property (retain, nonatomic) ADParameterFactory *parameterFactory;
@property (retain, nonatomic) NSString *campaignNamespace;
@property (retain, nonatomic) NSObject *notificationObserver;
@property (nonatomic) BOOL notificationReceivedAndWaiting;
@property (retain, nonatomic) NSString *clientRequestID;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) int appsRank;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAppID:(id)a0 appVersion:(id)a1 appsRank:(int)a2;
- (id)initWithAppID:(id)a0 appVersion:(id)a1 appsRank:(int)a2 storeFront:(id)a3;
- (BOOL)startUpdatingIDs;
- (id)campaignNamespaceParameter;
- (id)adParameters;
- (id)userTargetingProperties;
- (id)populateStoreFrontLanguageLocale:(id)a0;
- (void)searchObjectForCriteria:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)requestSponsoredSearchURL:(id /* block */)a0;
- (void)requestUserTargetingIdentifier:(id /* block */)a0;
- (void)requestSponsoredSearchDataRoutingInfoAndRequestIDForLocality:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)sponsoredSearchRequestForLanguageLocale:(id)a0;

@end
