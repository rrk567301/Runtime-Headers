@class VFXNode;

@interface VFXDistanceConstraint : VFXConstraint {
    VFXNode *_target;
    float _minimumDistance;
    float _maximumDistance;
    char _keepTargetDirection;
    void /* unknown type, empty encoding */ _targetDirection;
    float _maximumDirectionAngle;
}

@property (retain, nonatomic) VFXNode *target;
@property (nonatomic) float minimumDistance;
@property (nonatomic) float maximumDistance;

+ (char)supportsSecureCoding;
+ (id)distanceConstraint;
+ (id)distanceConstraintWithTarget:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void /* unknown type, empty encoding */)targetDirection;
- (char)keepTargetDirection;
- (void)setKeepTargetDirection:(char)a0;
- (void)setTargetDirection:(SEL)a0;
- (void)_customDecodingOfVFXDistanceConstraint:(id)a0;
- (void)_customEncodingOfVFXDistanceConstraint:(id)a0;
- (void)retargetWithRemapTable:(struct __CFDictionary { } *)a0;

@end
