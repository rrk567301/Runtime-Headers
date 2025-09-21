@protocol MTLTexture;

@interface VFXCameraEffectGrain : VFXCameraEffect {
    float _intensity;
    float _scale;
    float _slice;
    BOOL _isColored;
    id<MTLTexture> _texture;
}

@property (nonatomic) float intensity;
@property (nonatomic) float scale;
@property (nonatomic, getter=isColored) BOOL colored;

+ (BOOL)supportsSecureCoding;
+ (id)grain;

- (id)texture;
- (float)slice;
- (void)setSlice:(float)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTexture:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void *)createCFXObject;
- (void)_updateModelFromPresentation;
- (void)_updatePresentationFromModel;
- (struct __CFXCameraEffectGrain { } *)cfxObject;

@end
