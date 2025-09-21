@class NSString, PKTransactionAmount;

@interface PKPaymentTransactionAmountModifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *typeString;
@property (nonatomic) long long type;
@property (nonatomic) long long order;
@property (copy, nonatomic) PKTransactionAmount *amount;
@property (copy, nonatomic) NSString *modifierDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)isEqualToPaymentTransactionAmountModifier:(id)a0;

@end
