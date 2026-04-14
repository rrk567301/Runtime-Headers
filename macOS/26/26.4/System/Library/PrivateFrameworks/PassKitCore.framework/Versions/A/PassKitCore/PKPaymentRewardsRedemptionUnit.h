@class NSDecimalNumber, PKCurrencyAmount;

@interface PKPaymentRewardsRedemptionUnit : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSDecimalNumber *value;
@property (copy, nonatomic) PKCurrencyAmount *monetaryValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0 monetaryValue:(id)a1 value:(id)a2;

@end
