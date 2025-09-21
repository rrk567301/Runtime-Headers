@class NSString, PKCurrencyAmount;

@interface PKTransactionAmount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) PKCurrencyAmount *amount;
@property (nonatomic, getter=isPending) char pending;
@property (copy, nonatomic) NSString *unitIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCurrencyAmount:(id)a0;
- (id)initWithCurrencyAmount:(id)a0 label:(id)a1;
- (id)initWithCurrencyAmount:(id)a0 label:(id)a1 unitIdentifier:(id)a2;
- (id)initWithPendingCurrencyAmount:(id)a0 unitIdentifier:(id)a1;

@end
