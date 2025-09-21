@class SKRange;

@interface SKSizeConstraint : SKConstraint

@property (copy) SKRange *widthRange;
@property (copy) SKRange *heightRange;

+ (char)supportsSecureCoding;
+ (id)constraintWithHeightRange:(id)a0;
+ (id)constraintWithWidthRange:(id)a0;
+ (id)constraintWithWidthRange:(id)a0 heightRange:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWidthRange:(id)a0 heightRange:(id)a1;
- (char)isEqualToSizeConstraint:(id)a0;

@end
