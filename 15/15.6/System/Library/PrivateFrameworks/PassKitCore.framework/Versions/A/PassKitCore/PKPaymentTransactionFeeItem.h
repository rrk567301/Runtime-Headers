@class NSString, PKCurrencyAmount;

@interface PKPaymentTransactionFeeItem : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) PKCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSString *localizedDisplayName;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonDictionaryRepresentation;
- (void)_initWithFeeDictionary:(id)a0;
- (id)initWithFeeDictionary:(id)a0;
- (char)isEqualToFeeItem:(id)a0;

@end
