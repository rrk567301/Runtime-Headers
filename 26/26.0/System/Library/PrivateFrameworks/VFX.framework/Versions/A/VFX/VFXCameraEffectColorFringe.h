@interface VFXCameraEffectColorFringe : VFXCameraEffect {
    float _strength;
    float _intensity;
}

@property (nonatomic) float strength;
@property (nonatomic) float intensity;

+ (BOOL)supportsSecureCoding;
+ (id)colorFringe;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void *)createCFXObject;
- (void)_updateModelFromPresentation;
- (void)_updatePresentationFromModel;
- (struct __CFXCameraEffectColorFringe { } *)cfxObject;

@end
