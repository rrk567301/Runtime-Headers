@class SKRange;

@interface SKSizeConstraint : SKConstraint

@property (copy) SKRange *widthRange;
@property (copy) SKRange *heightRange;

+ (BOOL)supportsSecureCoding;
+ (id)constraintWithWidthRange:(id)a0 heightRange:(id)a1;
+ (id)constraintWithWidthRange:(id)a0;
+ (id)constraintWithHeightRange:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithWidthRange:(id)a0 heightRange:(id)a1;
- (BOOL)isEqualToSizeConstraint:(id)a0;

@end
