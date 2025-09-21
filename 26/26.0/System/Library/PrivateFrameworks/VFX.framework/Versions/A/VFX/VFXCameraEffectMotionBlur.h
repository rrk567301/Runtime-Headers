@interface VFXCameraEffectMotionBlur : VFXCameraEffect {
    float _intensity;
}

@property (nonatomic) float intensity;

+ (BOOL)supportsSecureCoding;
+ (id)motionBlur;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void *)createCFXObject;
- (void)_updateModelFromPresentation;
- (void)_updatePresentationFromModel;
- (struct __CFXCameraEffectMotionBlur { } *)cfxObject;

@end
