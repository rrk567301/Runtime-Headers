@class PXGUniform;

@interface PXGUniformAlias : PXGUniform

@property (readonly, nonatomic) PXGUniform *original;
@property (readonly, nonatomic) long long index;

- (float)floatValue;
- (const void *)bytes;
- (struct CGImage { } *)image;
- (id)description;
- (id)name;
- (id)initWithName:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)cachedTexture;
- (long long)bytesLength;
- (void /* unknown type, empty encoding */)float2Value;
- (void /* unknown type, empty encoding */)float3Value;
- (void /* unknown type, empty encoding */)float4Value;
- (id /* block */)textureProvider;
- (id)initWithIndex:(long long)a0 aliasing:(id)a1;
- (BOOL)isEquivalentToUniform:(id)a0;
- (void)setCachedTexture:(id)a0;

@end
