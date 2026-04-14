@class NSString, PKCurrencyAmount;

@interface PKTransactionCommutePlanUnit : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *label;
@property (readonly, nonatomic) unsigned long long planType;
@property (readonly, copy, nonatomic) PKCurrencyAmount *valueCount;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCountPlanIdentifier:(id)a0 currencyCode:(id)a1 value:(id)a2 label:(id)a3;
- (id)initWithTimedPlanIdentifier:(id)a0 label:(id)a1;

@end
