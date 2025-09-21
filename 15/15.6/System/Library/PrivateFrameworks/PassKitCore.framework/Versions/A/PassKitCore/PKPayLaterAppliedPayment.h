@class NSString, PKCurrencyAmount;

@interface PKPayLaterAppliedPayment : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *paymentIdentifier;
@property (retain, nonatomic) PKCurrencyAmount *amountApplied;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)isEqualToPayLaterAppliedPayment:(id)a0;

@end
