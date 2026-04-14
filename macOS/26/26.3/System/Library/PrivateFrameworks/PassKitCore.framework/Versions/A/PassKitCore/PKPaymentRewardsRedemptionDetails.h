@class PKPaymentRewardsRedemptionUnit, PKPaymentRewardsRedemptionTransactionDetails;

@interface PKPaymentRewardsRedemptionDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) PKPaymentRewardsRedemptionUnit *intended;
@property (copy, nonatomic) PKPaymentRewardsRedemptionUnit *redeemed;
@property (copy, nonatomic) PKPaymentRewardsRedemptionTransactionDetails *originalTransaction;

- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIntended:(id)a0 redeemed:(id)a1 originalTransactionDetails:(id)a2;

@end
