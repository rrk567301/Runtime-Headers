@class NSString, NSArray, NSDate, NSNumber;

@interface FCBundleSubscriptionLookUpEntry : NSObject

@property (nonatomic) unsigned long long purchaseValidationState;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *bundleChannelIDs;
@property (copy, nonatomic) NSString *bundleChannelIDsVersion;
@property (copy, nonatomic) NSString *purchaseID;
@property (copy, nonatomic) NSString *servicesBundlePurchaseID;
@property (copy, nonatomic) NSDate *dateOfExpiration;
@property (copy, nonatomic) NSNumber *initialPurchaseTimestamp;
@property (nonatomic) char hasShownRenewalNotice;
@property (nonatomic) char inTrialPeriod;
@property (nonatomic) char isPurchaser;
@property (nonatomic) char isAmplifyUser;
@property (nonatomic) char isPaidBundleViaOfferActivated;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)bundleSubscription;
- (id)initWithEntryID:(id)a0 bundleChannelIDs:(id)a1 bundleChannelIDsVersion:(id)a2 purchaseID:(id)a3 purchaseValidationState:(unsigned long long)a4 dateOfExpiration:(id)a5 hasShownRenewalNotice:(char)a6 inTrialPeriod:(char)a7 isPurchaser:(char)a8 servicesBundlePurchaseID:(id)a9 isAmplifyUser:(char)a10 isPaidBundleViaOfferActivated:(char)a11 initialPurchaseTimestamp:(id)a12;
- (id)initWithEntryID:(id)a0 dictionaryRepresentation:(id)a1;

@end
