@class NSDecimalNumber, PKCurrencyAmount;

@interface PKPaymentRewardsRedemptionUnit : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSDecimalNumber *value;
@property (copy, nonatomic) PKCurrencyAmount *monetaryValue;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)redactedDescription;
- (id)initWithType:(unsigned long long)a0 monetaryValue:(id)a1 value:(id)a2;

@end
