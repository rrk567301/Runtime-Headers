@class CCMetalTextureStorage;
@protocol MTLTexture;

@interface CCGazeBasedDimmingData : CCData {
    BOOL _enable;
    BOOL _dynamicEnable;
    float _profileVariance;
    float _boostValue;
    void /* unknown type, empty encoding */ _gazeUV[2];
    float _temporalScale[10];
    id<MTLTexture> _temporalFilterTexture;
    CCMetalTextureStorage *_temporalFilterTextureStorage;
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dataWithSerializedMetalObjects:(id)a0 deviceGroup:(id)a1;
- (void)deserializeMetalObjects:(id)a0 deviceGroup:(id)a1;

@end
