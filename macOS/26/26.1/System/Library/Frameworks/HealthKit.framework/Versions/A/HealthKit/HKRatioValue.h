@class HKCodedQuantity;

@interface HKRatioValue : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKCodedQuantity *numerator;
@property (readonly, copy, nonatomic) HKCodedQuantity *denominator;

+ (id)ratioValueWithNumerator:(id)a0 andDenominator:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_initWithNumerator:(id)a0 denominator:(id)a1;

@end
