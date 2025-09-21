@class NSDecimalNumber, NSSet, NSString, NSArray, PKCurrencyAmount, NSDate;

@interface PKPaymentBalance : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSSet *identifiers;
@property (copy, nonatomic) NSDecimalNumber *value;
@property (copy, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) PKCurrencyAmount *currencyValue;
@property (readonly, nonatomic) char isCurrency;
@property (nonatomic) long long exponent;
@property (readonly, nonatomic) NSString *formattedValue;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedDescription;
@property (nonatomic) char isPrimary;
@property (copy, nonatomic) NSDate *lastUpdateDate;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *preformattedString;
@property (nonatomic) char isExpired;
@property (copy, nonatomic) NSArray *componentBalances;

+ (id)identifiersFromComponentBalances:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)_setValueWithRounding:(id)a0;
- (id)initWithComponentBalances:(id)a0;
- (id)initWithComponentBalances:(id)a0 identifiers:(id)a1;
- (id)initWithComponentBalances:(id)a0 identifiers:(id)a1 expiredBalances:(id)a2;
- (id)initWithIdentifier:(id)a0 forCurrencyAmount:(id)a1;
- (id)initWithIdentifier:(id)a0 forValue:(id)a1 roundingToExponent:(long long)a2;
- (id)initWithIdentifiers:(id)a0 forCurrencyAmount:(id)a1;
- (id)initWithIdentifiers:(id)a0 forValue:(id)a1 roundingToExponent:(long long)a2;
- (char)isComposed;

@end
