@class NSString, PKCurrencyAmount;

@interface PKTransactionAmount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) PKCurrencyAmount *amount;
@property (nonatomic, getter=isPending) BOOL pending;
@property (copy, nonatomic) NSString *unitIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithCurrencyAmount:(id)a0;
- (id)initWithCurrencyAmount:(id)a0 label:(id)a1;
- (id)initWithCurrencyAmount:(id)a0 label:(id)a1 unitIdentifier:(id)a2;
- (id)initWithPendingCurrencyAmount:(id)a0 unitIdentifier:(id)a1;

@end
