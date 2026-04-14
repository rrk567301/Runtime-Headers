@class PKPayLaterAccountProductDetails, PKPayLaterAccountProductEligibleSpend;

@interface PKPayLaterAccountProduct : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long productType;
@property (retain, nonatomic) PKPayLaterAccountProductDetails *productDetails;
@property (retain, nonatomic) PKPayLaterAccountProductEligibleSpend *eligibleSpend;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
