@class NSDate;

@interface PRSCurrencyConversionResult : PRSConversionResult <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDate *lastUpdated;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isCurrency;
- (id)initWithConverter:(id)a0;

@end
