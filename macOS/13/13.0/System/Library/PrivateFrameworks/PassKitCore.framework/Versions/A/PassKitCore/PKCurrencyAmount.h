@class NSDecimalNumber, NSString;

@interface PKCurrencyAmount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currency;
@property (nonatomic) long long exponent;
@property (copy, nonatomic) NSString *preformattedString;

+ (id)minimumCurrencyAmount:(id)a0 otherCurrencyAmount:(id)a1;
+ (id)maximumCurrencyAmount:(id)a0 otherCurrencyAmount:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)formattedStringValue;
- (BOOL)isCurrency;
- (long long)compareToCurrencyCode:(id)a0 amount:(id)a1;
- (id)initWithAmount:(id)a0 currency:(id)a1;
- (id)initWithAmount:(id)a0 currency:(id)a1 exponent:(long long)a2;
- (id)initWithAmount:(id)a0 exponent:(long long)a1 preformattedString:(id)a2;
- (BOOL)isEqualToCurrencyAmount:(id)a0;
- (id)minimalFormattedStringValue;
- (id)minimalFormattedStringValueInLocale:(id)a0;
- (id)absoluteValue;
- (id)negativeValue;
- (id)currencyAmountByAddingCurrencyAmount:(id)a0;
- (id)currencyAmountBySubtractingCurrencyAmount:(id)a0;
- (id)amountByConvertingToSmallestCommonCurrencyUnit;
- (BOOL)currencyAmountLessThanCurrencyAmount:(id)a0;
- (BOOL)currencyAmountGreaterThanCurrencyAmount:(id)a0;
- (BOOL)currencyAmountEqualToCurrencyAmount:(id)a0;

@end
