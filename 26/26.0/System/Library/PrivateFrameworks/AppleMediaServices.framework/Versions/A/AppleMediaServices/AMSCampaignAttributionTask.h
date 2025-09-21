@class NSString, NSArray, AMSCampaignAttributor, NSURL, AMSBagKeySet, AMSURLSession, ACAccount, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSCampaignAttributionTask : AMSTask <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) AMSURLSession *URLSession;
@property (retain, nonatomic) AMSCampaignAttributor *campaignAttributor;
@property (retain) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property (copy) NSArray *additionalQueryItems;
@property (readonly) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

@end
