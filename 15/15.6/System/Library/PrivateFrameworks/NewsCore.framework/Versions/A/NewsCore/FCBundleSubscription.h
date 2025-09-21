@class NSString, NSNumber, NSOrderedSet;

@interface FCBundleSubscription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *bundlePurchaseID;
@property (copy, nonatomic) NSString *servicesBundlePurchaseID;
@property (nonatomic) unsigned long long unprotectedSubscriptionState;
@property (nonatomic) char isPurchaser;
@property (nonatomic) char isAmplifyUser;
@property (nonatomic) char isPaidBundleViaOfferActivated;
@property (copy, nonatomic) NSNumber *initialPurchaseTimestamp;
@property (copy, nonatomic) NSOrderedSet *bundleChannelIDs;
@property (copy, nonatomic) NSString *bundleChannelIDsVersion;
@property (readonly, nonatomic) char isSubscribed;
@property (readonly, nonatomic) char isServicesBundleUser;
@property (readonly, nonatomic) unsigned long long subscriptionState;

+ (id)subscriptionWithSubscriptionState:(unsigned long long)a0 bundleChannelIDs:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)containsItem:(id)a0;
- (char)containsHeadline:(id)a0;
- (char)containsTagID:(id)a0;
- (id)initWithBundlePurchaseID:(id)a0 bundleChannelIDs:(id)a1 bundleChannelIDsVersion:(id)a2 inTrialPeriod:(char)a3 isPurchaser:(char)a4 servicesBundlePurchaseID:(id)a5 isAmplifyUser:(char)a6 initialPurchaseTimestamp:(id)a7 isPaidBundleViaOfferActivated:(char)a8;
- (id)initWithBundlePurchaseID:(id)a0 bundleChannelIDs:(id)a1 bundleChannelIDsVersion:(id)a2 subscriptionState:(unsigned long long)a3 isPurchaser:(char)a4 servicesBundlePurchaseID:(id)a5 isAmplifyUser:(char)a6 initialPurchaseTimestamp:(id)a7 isPaidBundleViaOfferActivated:(char)a8;

@end
