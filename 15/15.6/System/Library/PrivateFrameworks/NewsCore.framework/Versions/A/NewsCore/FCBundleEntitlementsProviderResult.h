@class NSString, NSNumber;

@interface FCBundleEntitlementsProviderResult : NSObject

@property (readonly, nonatomic) NSString *bundlePurchaseID;
@property (readonly, nonatomic) NSString *servicesBundlePurchaseID;
@property (readonly, nonatomic) char inTrialPeriod;
@property (readonly, nonatomic) char isPurchaser;
@property (readonly, nonatomic) char isAmplifyUser;
@property (readonly, nonatomic) NSString *vendorAdHocOfferID;
@property (readonly, nonatomic) NSNumber *initialPurchaseTimestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithBundlePurchaseID:(id)a0 inTrialPeriod:(char)a1 isPurchaser:(char)a2 servicesBundlePurchaseID:(id)a3 isAmplifyUser:(char)a4 initialPurchaseTimestamp:(id)a5 vendorAdHocOfferID:(id)a6;

@end
