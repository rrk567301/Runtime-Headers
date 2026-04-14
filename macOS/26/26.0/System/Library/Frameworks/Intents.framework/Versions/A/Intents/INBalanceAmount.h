@class NSDecimalNumber, NSString;

@interface INBalanceAmount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSDecimalNumber *amount;
@property (readonly) long long balanceType;
@property (readonly, copy) NSString *currencyCode;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAmount:(id)a0 balanceType:(long long)a1;
- (id)initWithAmount:(id)a0 balanceType:(long long)a1 currencyCode:(id)a2;
- (id)initWithAmount:(id)a0 currencyCode:(id)a1;

@end
