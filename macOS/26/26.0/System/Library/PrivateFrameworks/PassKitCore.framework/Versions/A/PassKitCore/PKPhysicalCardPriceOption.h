@class PKCurrencyAmount;

@interface PKPhysicalCardPriceOption : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long reason;
@property (retain, nonatomic) PKCurrencyAmount *amount;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)jsonDictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
