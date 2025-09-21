@interface MTLTextureReferenceType : MTLType

@property (readonly) unsigned long long textureDataType;
@property (readonly) unsigned long long textureType;
@property (readonly) unsigned long long access;
@property (readonly) char isDepthTexture;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

@end
