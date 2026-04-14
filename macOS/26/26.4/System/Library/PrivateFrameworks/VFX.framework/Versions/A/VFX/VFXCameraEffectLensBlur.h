@interface VFXCameraEffectLensBlur : VFXCameraEffect {
    float _radius;
    long long _filterQuality;
}

@property (nonatomic) float radius;
@property (nonatomic) long long filterQuality;

+ (BOOL)supportsSecureCoding;
+ (id)lensBlur;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void *)createCFXObject;
- (void)_updateModelFromPresentation;
- (void)_updatePresentationFromModel;
- (struct __CFXCameraEffectLensBlur { } *)cfxObject;

@end
