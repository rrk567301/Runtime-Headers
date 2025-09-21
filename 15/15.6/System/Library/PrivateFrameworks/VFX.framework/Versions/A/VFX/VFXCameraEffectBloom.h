@interface VFXCameraEffectBloom : VFXCameraEffect {
    float _intensity;
    float _threshold;
    float _thresholdSmoothness;
    char _useHighQuality;
    void /* unknown type, empty encoding */ _colorFilter;
    float _contrast;
    float _saturation;
    long long _iterationCount;
}

@property (nonatomic) float intensity;
@property (nonatomic) float threshold;
@property (nonatomic) float thresholdSmoothness;
@property (nonatomic) char useHighQuality;
@property (nonatomic) void /* unknown type, empty encoding */ colorFilter;
@property (nonatomic) float contrast;
@property (nonatomic) float saturation;
@property (nonatomic) long long iterationCount;

+ (char)supportsSecureCoding;
+ (id)bloom;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (void)_syncObjCModel;
- (void *)createCFXObject;
- (struct __CFXCameraEffectBloom { } *)cfxObject;
- (char)rawFloat3ForKey:(id)a0 value:(void *)a1;

@end
