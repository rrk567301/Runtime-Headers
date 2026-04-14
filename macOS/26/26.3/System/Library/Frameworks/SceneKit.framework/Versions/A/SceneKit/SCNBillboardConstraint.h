@interface SCNBillboardConstraint : SCNConstraint {
    BOOL _preserveScale;
}

@property (nonatomic) unsigned long long freeAxes;

+ (BOOL)supportsSecureCoding;
+ (id)billboardConstraint;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)preserveScale;
- (void)setPreserveScale:(BOOL)a0;

@end
