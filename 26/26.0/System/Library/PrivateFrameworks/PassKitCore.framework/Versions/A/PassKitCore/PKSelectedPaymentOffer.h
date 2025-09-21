@class NSString, NSDictionary, PKSelectedPaymentOfferPaymentPassDetails, NSDate;

@interface PKSelectedPaymentOffer : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *selectedOfferIdentifier;
@property (retain, nonatomic) PKSelectedPaymentOfferPaymentPassDetails *passDetails;
@property (copy, nonatomic) NSString *criteriaIdentifier;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (copy, nonatomic) NSDictionary *serviceProviderData;
@property (nonatomic) unsigned long long storageType;
@property (copy, nonatomic) NSDate *userSelectionDate;
@property (copy, nonatomic) NSDate *createdDate;

- (id)_init;
- (BOOL)isExpired;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSticky;
- (id)installmentSelectedPaymentOffer;
- (id)initWithType:(unsigned long long)a0 selectedOfferIdentifier:(id)a1 passDetails:(id)a2 criteriaIdentifier:(id)a3 sessionIdentifier:(id)a4 serviceProviderData:(id)a5 storageType:(unsigned long long)a6;
- (id)passUniqueID;
- (id)rewardsSelectedPaymentOffer;
- (void)updateUserSelectionDate:(id)a0;

@end
