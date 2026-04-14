@interface NSUnitConverterLinear : NSUnitConverter <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double coefficient;
@property (readonly) double constant;

- (id)initWithCoefficient:(double)a0 constant:(double)a1;
- (id)initWithCoefficient:(double)a0;
- (double)baseUnitValueFromValue:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (double)valueFromBaseUnitValue:(double)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
