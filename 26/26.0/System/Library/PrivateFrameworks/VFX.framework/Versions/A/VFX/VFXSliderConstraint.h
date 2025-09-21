@interface VFXSliderConstraint : VFXConstraint {
    unsigned long long _categoryBitMask;
    void /* unknown type, empty encoding */ _offset;
    float _radius;
}

@property (nonatomic) unsigned long long collisionCategoryBitMask;
@property (nonatomic) float radius;
@property (nonatomic) void /* unknown type, empty encoding */ offset;

+ (BOOL)supportsSecureCoding;
+ (id)sliderConstraint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)valueForKey:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;

@end
