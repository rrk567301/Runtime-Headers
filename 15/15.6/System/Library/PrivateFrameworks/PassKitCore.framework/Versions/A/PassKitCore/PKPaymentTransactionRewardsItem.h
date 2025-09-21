@class NSString, NSDecimalNumber, PKCurrencyAmount;

@interface PKPaymentTransactionRewardsItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (retain, nonatomic) NSDecimalNumber *eligibleValue;
@property (nonatomic) unsigned long long eligibleValueUnit;
@property (retain, nonatomic) NSString *promotionName;
@property (retain, nonatomic) NSString *promotionIdentifier;
@property (retain, nonatomic) NSString *programIdentifier;
@property (nonatomic) char hasEnhancedMerchantProgramIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)jsonDictionaryRepresentation;
- (void)_initWithRewardsDictionary:(id)a0;
- (char)isEqualToRewardsItem:(id)a0;

@end
