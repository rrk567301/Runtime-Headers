@class CCMetalTextureStorage;
@protocol MTLTexture;

@interface CCTextureData : CCData {
    id<MTLTexture> _texture;
    CCMetalTextureStorage *_textureStorage;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)acceptVisitor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)dataWithSerializedMetalObjects:(id)a0 deviceGroup:(id)a1;
- (void)deserializeMetalObjects:(id)a0 deviceGroup:(id)a1;

@end
