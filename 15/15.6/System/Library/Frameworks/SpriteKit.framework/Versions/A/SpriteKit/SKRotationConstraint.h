@class SKRange;

@interface SKRotationConstraint : SKConstraint

@property (copy) SKRange *zRotationRange;

+ (char)supportsSecureCoding;
+ (id)constraintWithZRotationRange:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithZRotationRange:(id)a0;
- (char)isEqualToRotationConstraint:(id)a0;

@end
