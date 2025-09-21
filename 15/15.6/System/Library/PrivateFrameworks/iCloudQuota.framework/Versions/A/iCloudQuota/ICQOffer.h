@class NSURL, NSDate, NSDictionary, _ICQDeviceInfo, _ICQAppLaunchLink, ICQActionBasedUniversalLinkSpecification, NSString, _ICQBannerSpecification, _ICQUpgradeFlowSpecification, _ICQButtonSpecification, _ICQDynamicUISpecification, _ICQFollowupSpecification, _ICQXMLSpecification;

@interface ICQOffer : NSObject <NSSecureCoding> {
    NSDictionary *_serverDictionary;
    NSDictionary *_planDetailsOverride;
    long long _actionOverride;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char iTunesAccountExists;
@property (readonly, nonatomic, getter=isBuddyOffer) char buddyOffer;
@property (readonly, nonatomic, getter=isDefaultOffer) char defaultOffer;
@property (readonly, nonatomic, getter=isPremiumOffer) char premiumOffer;
@property (readonly, nonatomic) _ICQBannerSpecification *bannerSpecification;
@property (retain, nonatomic) _ICQBannerSpecification *recommendationSpecification;
@property (readonly, nonatomic) _ICQButtonSpecification *buttonSpecification;
@property (readonly, nonatomic) _ICQFollowupSpecification *followupSpecification;
@property (readonly, nonatomic) _ICQUpgradeFlowSpecification *upgradeFlowSpecification;
@property (readonly, nonatomic) _ICQXMLSpecification *XMLSpecification;
@property (retain, nonatomic) _ICQDeviceInfo *deviceInfo;
@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) NSString *appVersionId;
@property (readonly, nonatomic) _ICQAppLaunchLink *appLaunchLink;
@property (readonly, nonatomic) NSDate *lastUpdated;
@property (nonatomic) unsigned long long bannerPriority;
@property (readonly, nonatomic) NSURL *requestedServerUIURL;
@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) double _callbackInterval;
@property (retain, nonatomic) NSDate *retrievalDate;
@property (nonatomic) long long level;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *appVersionId;
@property (retain, nonatomic) NSString *accountAltDSID;
@property (retain, nonatomic) NSString *notificationID;
@property (retain, nonatomic) NSString *offerId;
@property (retain, nonatomic) _ICQBannerSpecification *bannerSpecification;
@property (retain, nonatomic) _ICQBannerSpecification *recommendationSpecification;
@property (retain, nonatomic) _ICQBannerSpecification *inAppMessageSpecification;
@property (retain, nonatomic) _ICQBannerSpecification *settingsBannerSpecification;
@property (retain, nonatomic) _ICQButtonSpecification *buttonSpecification;
@property (retain, nonatomic) _ICQFollowupSpecification *followupSpecification;
@property (retain, nonatomic) _ICQUpgradeFlowSpecification *upgradeFlowSpecification;
@property (retain, nonatomic) _ICQXMLSpecification *XMLSpecification;
@property (retain, nonatomic) _ICQDeviceInfo *deviceInfo;
@property (retain, nonatomic) _ICQBannerSpecification *universalLinkSpecification;
@property (retain, nonatomic) _ICQBannerSpecification *universalSuccessInfoSpecification;
@property (retain, nonatomic) NSString *context;
@property (nonatomic) char iTunesAccountExists;
@property (retain, nonatomic) _ICQAppLaunchLink *appLaunchLink;
@property (retain, nonatomic) NSURL *requestedServerUIURL;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) char expired;
@property (readonly, nonatomic) long long offerType;
@property (readonly, nonatomic) NSURL *serverUIURL;
@property (readonly, nonatomic) NSURL *remoteUIURL;
@property (readonly, nonatomic) _ICQDynamicUISpecification *dynamicUISpecification;
@property (readonly, nonatomic) ICQActionBasedUniversalLinkSpecification *actionBasedUniversalLinkSpecification;

+ (id)_settingsBannerSpecificationWithServerDictionary:(id)a0 bundleId:(id)a1;
+ (id)offerReasonForServerReason:(id)a0;
+ (id)sampleOfferForLevel:(long long)a0;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)universalLink;
- (id)_processICQURL:(id)a0;
- (void)_updateRequestedServerUIURLWithURL:(id)a0;
- (id)alertSpecificationAtIndex:(unsigned long long)a0;
- (id)alertSpecificationForAlertKey:(id)a0;
- (id)inAppMessageSpecificationForReason:(id)a0 bundleId:(id)a1;
- (id)initWithServerDictionary:(id)a0 accountAltDSID:(id)a1 notificationID:(id)a2 retrievalDate:(id)a3 callbackInterval:(double)a4 appLaunchLink:(id)a5 bundleIdentifier:(id)a6;
- (char)isDetailAppBannerOffer;
- (id)journeyLinkForId:(id)a0;
- (id)messageSpecificationForPlacement:(id)a0;
- (id)messageSpecificationForReason:(id)a0 bundleId:(id)a1 placement:(id)a2;
- (char)placeholderExists;
- (id)settingsBannerSpecificationForReason:(id)a0 bundleId:(id)a1;
- (char)showsPhotoVideoCounts;
- (id)storagePurchaseKeybagForButtonId:(id)a0;
- (id)universalLinkForContext:(id)a0;
- (id)universalSuccessLink;
- (void)updateOfferWithAction:(long long)a0;
- (void)updateOfferWithPlanDetails:(id)a0 actionString:(id)a1;

@end
