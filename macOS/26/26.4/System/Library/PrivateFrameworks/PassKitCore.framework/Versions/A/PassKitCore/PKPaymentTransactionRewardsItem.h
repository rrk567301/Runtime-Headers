@class NSString, NSDecimalNumber, PKCurrencyAmount;

@interface PKPaymentTransactionRewardsItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (retain, nonatomic) NSDecimalNumber *eligibleValue;
@property (nonatomic) unsigned long long eligibleValueUnit;
@property (retain, nonatomic) NSString *promotionName;
@property (retain, nonatomic) NSString *promotionIdentifier;
@property (retain, nonatomic) NSString *programIdentifier;
@property (nonatomic) BOOL hasEnhancedMerchantProgramIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)jsonDictionaryRepresentation;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)_initWithRewardsDictionary:(id)a0;
- (BOOL)isEqualToRewardsItem:(id)a0;

@end
