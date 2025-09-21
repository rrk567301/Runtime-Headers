@class NSDate;

@interface PRSCurrencyConversionResult : PRSConversionResult <NSCoding, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDate *lastUpdated;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)copyBasePropertiesOverToResult:(id)a0;
- (char)isCurrency;

@end
