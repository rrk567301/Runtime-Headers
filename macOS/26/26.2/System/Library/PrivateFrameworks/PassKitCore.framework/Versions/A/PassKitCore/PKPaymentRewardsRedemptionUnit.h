@class NSDecimalNumber, PKCurrencyAmount;

@interface PKPaymentRewardsRedemptionUnit : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSDecimalNumber *value;
@property (copy, nonatomic) PKCurrencyAmount *monetaryValue;

- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithType:(unsigned long long)a0 monetaryValue:(id)a1 value:(id)a2;

@end
