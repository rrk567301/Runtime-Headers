@class NSString, NSDictionary, NSDate, NSNumber;

@interface ASDSubscriptionEntitlement : NSObject <NSSecureCoding> {
    NSDictionary *_dictionary;
    unsigned long long _segment;
    char _hasFamily;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSNumber *appAdamID;
@property (readonly, copy) NSNumber *appVersion;
@property (readonly) char autoRenewEnabled;
@property (readonly, copy) NSString *chargeCountryCode;
@property (readonly, copy) NSString *chargeCurrencyCode;
@property (readonly, copy) NSNumber *chargeStoreFrontID;
@property (readonly, copy) NSString *entitlementOriginType;
@property (readonly, copy) NSNumber *entitlementSourceAdamID;
@property (readonly, copy) NSDate *expiryDate;
@property (readonly, copy) NSString *externalSubscriptionID;
@property (readonly, copy) NSNumber *familyID;
@property (readonly, copy) NSNumber *familyRank;
@property (readonly, copy) NSNumber *featureAccessTypeID;
@property (readonly, copy) NSNumber *freeTrialPeriodID;
@property (readonly) char hasFamily;
@property (readonly, copy) NSNumber *inAppAdamID;
@property (readonly, copy) NSString *inAppVersion;
@property (readonly, copy) NSNumber *initialPurchaseTimestamp;
@property (readonly) char isTrialPeriod;
@property (readonly) char isOfferPeriod;
@property (readonly) char isPurchaser;
@property (readonly, getter=isNewsAppPurchase) char newsAppPurchase;
@property (readonly) char isInGracePeriod;
@property (readonly, copy) NSString *offerID;
@property (readonly, copy) NSNumber *originalPurchaseDownloadID;
@property (readonly, copy) NSString *poolType;
@property (readonly, copy) NSString *productCode;
@property (readonly, copy) NSNumber *promoScenarioID;
@property (readonly, copy) NSNumber *purchasabilityType;
@property (readonly, copy) NSNumber *purchaseDownloadID;
@property (readonly) unsigned long long segment;
@property (readonly, copy) NSNumber *serviceBeginsTimestamp;
@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSNumber *subscriptionBundleID;
@property (readonly, copy) NSNumber *quantity;
@property (readonly, copy) NSString *vendorAdHocOfferID;
@property (readonly, copy) NSString *vendorID;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 forAppAdamID:(id)a1 segment:(unsigned long long)a2 hasFamily:(char)a3;

@end
