@class NSString, NSArray;

@interface FCPaidBundleViaOfferConfig : NSObject

@property (nonatomic) long long iconBadgeQuiescenceInterval;
@property (nonatomic) long long iconBadgeMaxNumberOfPresentations;
@property (nonatomic) long long localNotificationQuiescenceInterval;
@property (nonatomic) long long localNotificationMaxNumberOfPresentations;
@property (copy, nonatomic) NSString *localNotificationTitle;
@property (copy, nonatomic) NSString *localNotificationSubtitle;
@property (copy, nonatomic) NSString *localNotificationBody;
@property (copy, nonatomic) NSString *localNotificationURL;
@property (nonatomic) long long localNotificationDelay;
@property (nonatomic) long long upsellQuiescenceInterval;
@property (nonatomic) long long upsellMaxNumberOfPresentations;
@property (retain, nonatomic) NSArray *vendorAdHocOfferIds;
@property (readonly, nonatomic) long long upsellBestOfferRefreshQuiescenceInterval;
@property (readonly, nonatomic) char paywallsEnabled;
@property (readonly, nonatomic) char subscriptionsDeeplinkEnabled;
@property (readonly, nonatomic) char mastheadBannerEnabled;
@property (readonly, nonatomic) char iconBadgeEnabled;
@property (readonly, nonatomic) char iconBadgeMercuryEnabled;
@property (readonly, nonatomic) char localNotificationEnabled;
@property (readonly, nonatomic) char upsellEnabled;
@property (readonly, nonatomic) char appLaunchUpsellEnabled;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0;

@end
