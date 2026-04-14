@class HKCodedQuantity;

@interface HKRatioValue : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKCodedQuantity *numerator;
@property (readonly, copy, nonatomic) HKCodedQuantity *denominator;

+ (id)ratioValueWithNumerator:(id)a0 andDenominator:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithNumerator:(id)a0 denominator:(id)a1;

@end
