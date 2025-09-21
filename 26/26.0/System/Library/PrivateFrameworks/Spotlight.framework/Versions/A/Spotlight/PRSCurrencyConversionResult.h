@class NSDate;

@interface PRSCurrencyConversionResult : PRSConversionResult <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *lastUpdated;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)copyBasePropertiesOverToResult:(id)a0;
- (BOOL)isCurrency;

@end
