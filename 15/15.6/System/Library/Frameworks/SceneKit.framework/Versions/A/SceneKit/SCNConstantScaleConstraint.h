@interface SCNConstantScaleConstraint : SCNConstraint {
    float _scale;
    char _screenSpace;
}

@property (nonatomic) float scale;
@property (nonatomic) char screenSpace;

+ (char)supportsSecureCoding;
+ (id)constantScaleConstraint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
