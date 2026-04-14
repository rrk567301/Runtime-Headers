@class NSString, PKCurrencyAmount;

@interface PKTransactionCommutePlanUnit : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *label;
@property (readonly, nonatomic) unsigned long long planType;
@property (readonly, copy, nonatomic) PKCurrencyAmount *valueCount;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCountPlanIdentifier:(id)a0 currencyCode:(id)a1 value:(id)a2 label:(id)a3;
- (id)initWithTimedPlanIdentifier:(id)a0 label:(id)a1;

@end
