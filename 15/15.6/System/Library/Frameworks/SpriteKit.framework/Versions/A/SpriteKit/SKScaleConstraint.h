@class SKRange;

@interface SKScaleConstraint : SKConstraint

@property (copy) SKRange *xRange;
@property (copy) SKRange *yRange;

+ (char)supportsSecureCoding;
+ (id)constraintWithScaleRange:(id)a0;
+ (id)constraintWithXRange:(id)a0;
+ (id)constraintWithXRange:(id)a0 YRange:(id)a1;
+ (id)constraintWithYRange:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXRange:(id)a0 YRange:(id)a1;
- (char)isEqualToScaleConstraint:(id)a0;

@end
