@class NSDecimalNumber, NSString, PKFeatureApplicationOfferDetailsInfo, NSDate;

@interface PKFeatureApplicationOfferDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *offerTermsIdentifier;
@property (copy, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSDecimalNumber *creditLimit;
@property (copy, nonatomic) NSDecimalNumber *annualFee;
@property (copy, nonatomic) NSDecimalNumber *aprForPurchase;
@property (copy, nonatomic) NSDecimalNumber *balance;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) PKFeatureApplicationOfferDetailsInfo *detailsInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
