@class NSString, NSDecimalNumber, PKCurrencyAmount;

@interface PKPaymentTransactionRewardsItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (retain, nonatomic) NSDecimalNumber *eligibleValue;
@property (nonatomic) unsigned long long eligibleValueUnit;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)jsonDictionaryRepresentation;
- (void)_initWithRewardsDictionary:(id)a0;
- (BOOL)isEqualToRewardsItem:(id)a0;

@end
