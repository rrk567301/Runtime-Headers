@interface VFXConstantScaleConstraint : VFXConstraint {
    float _scale;
    BOOL _screenSpace;
}

@property (nonatomic) float scale;
@property (nonatomic) BOOL screenSpace;

+ (BOOL)supportsSecureCoding;
+ (id)constantScaleConstraint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
