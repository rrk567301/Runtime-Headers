@interface SCNBillboardConstraint : SCNConstraint {
    char _preserveScale;
}

@property (nonatomic) unsigned long long freeAxes;

+ (char)supportsSecureCoding;
+ (id)billboardConstraint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)preserveScale;
- (void)setPreserveScale:(char)a0;

@end
