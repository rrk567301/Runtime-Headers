@class NSNumber, ICQOpportunityBubbleSpecification;

@interface ICQPremiumOffer : ICQOffer

@property (nonatomic) char dismissed;
@property (nonatomic) char isBadgeApp;
@property (nonatomic) char shouldStartOnDeviceJourney;
@property (retain, nonatomic) ICQOpportunityBubbleSpecification *opportunityBubble;
@property (retain, nonatomic) NSNumber *bundleQuotaInfo;
@property (retain, nonatomic) NSNumber *commerceQuotaInfo;

- (void).cxx_destruct;
- (id)_ICQOpportunityBubbleSpecificationForServerDict:(id)a0 bundleId:(id)a1;
- (id)_bundleStorageLevelFromServerDict:(id)a0;
- (id)_commerceStorageLevelFromServerDict:(id)a0;
- (char)_hasFollowupEnabledFromServerDict:(id)a0;
- (id)_parseQuotaInfo:(id)a0;
- (id)_serverUIURLFromOfferContents;
- (char)getBadgeAppFromServerDict:(id)a0;
- (id)initWithServerDictionary:(id)a0 accountAltDSID:(id)a1 notificationID:(id)a2 retrievalDate:(id)a3 callbackInterval:(double)a4 appLaunchLink:(id)a5 bundleIdentifier:(id)a6;
- (id)serverUIURL;
- (void)shouldShowOpportunityBubbleWithCompletion:(id /* block */)a0;
- (void)shouldShowOpportunityBubbleWithDisplayRuleResult:(char)a0 completion:(id /* block */)a1;

@end
