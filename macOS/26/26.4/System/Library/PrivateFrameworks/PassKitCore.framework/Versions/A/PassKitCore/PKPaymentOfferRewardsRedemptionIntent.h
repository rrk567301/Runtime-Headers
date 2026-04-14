@class NSDecimalNumber, PKPaymentRewardsBalance, NSString, PKCurrencyAmount;

@interface PKPaymentOfferRewardsRedemptionIntent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) PKPaymentRewardsBalance *rewardsBalance;
@property (copy, nonatomic) PKCurrencyAmount *monetaryValue;
@property (copy, nonatomic) NSDecimalNumber *value;
@property (copy, nonatomic) NSString *balanceIdentifier;
@property (copy, nonatomic) NSString *programName;
@property (nonatomic) unsigned long long rewardsType;
@property (readonly, nonatomic) BOOL isEmptyValued;
@property (readonly, nonatomic) BOOL hasFullBalanceSelected;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (id)initWithRewardsBalance:(id)a0 amount:(id)a1 value:(id)a2;

@end
