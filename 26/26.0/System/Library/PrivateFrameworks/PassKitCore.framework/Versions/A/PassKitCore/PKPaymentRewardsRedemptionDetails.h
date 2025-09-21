@class PKPaymentRewardsRedemptionUnit, PKPaymentRewardsRedemptionTransactionDetails;

@interface PKPaymentRewardsRedemptionDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) PKPaymentRewardsRedemptionUnit *intended;
@property (copy, nonatomic) PKPaymentRewardsRedemptionUnit *redeemed;
@property (copy, nonatomic) PKPaymentRewardsRedemptionTransactionDetails *originalTransaction;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIntended:(id)a0 redeemed:(id)a1 originalTransactionDetails:(id)a2;

@end
