@class PKCurrencyAmount;

@interface PKPhysicalCardPriceOption : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long reason;
@property (retain, nonatomic) PKCurrencyAmount *amount;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)jsonDictionaryRepresentation;

@end
