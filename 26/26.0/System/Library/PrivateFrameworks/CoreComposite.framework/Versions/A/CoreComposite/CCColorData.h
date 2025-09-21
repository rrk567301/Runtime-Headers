@class CCMetalTextureStorage;
@protocol MTLTexture;

@interface CCColorData : CCData {
    float _layerOverrideAlpha;
    id<MTLTexture> _colorLUT;
}

@property (retain, nonatomic) CCMetalTextureStorage *colorLUTStorage;

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dataWithSerializedMetalObjects:(id)a0 deviceGroup:(id)a1;
- (void)deserializeMetalObjects:(id)a0 deviceGroup:(id)a1;

@end
