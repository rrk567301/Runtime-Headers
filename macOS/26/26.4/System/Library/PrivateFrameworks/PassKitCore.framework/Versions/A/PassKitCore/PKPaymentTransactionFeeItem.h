@class NSString, PKCurrencyAmount;

@interface PKPaymentTransactionFeeItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) PKCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSString *localizedDisplayName;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)jsonDictionaryRepresentation;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)_initWithFeeDictionary:(id)a0;
- (id)initWithFeeDictionary:(id)a0;
- (BOOL)isEqualToFeeItem:(id)a0;

@end
