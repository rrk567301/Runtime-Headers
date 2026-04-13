@class PXGUniform;

@interface PXGUniformAlias : PXGUniform

@property (readonly, nonatomic) PXGUniform *original;
@property (readonly, nonatomic) long long index;

- (id)description;
- (float)floatValue;
- (const void *)bytes;
- (id)name;
- (void).cxx_destruct;
- (long long)bytesLength;
- (struct CGImage { } *)image;
- (id)cachedTexture;
- (void /* unknown type, empty encoding */)float2Value;
- (void /* unknown type, empty encoding */)float3Value;
- (void /* unknown type, empty encoding */)float4Value;
- (id)initWithName:(id)a0 type:(unsigned long long)a1;
- (id /* block */)textureProvider;
- (BOOL)isEquivalentToUniform:(id)a0;
- (void)setCachedTexture:(id)a0;
- (id)initWithIndex:(long long)a0 aliasing:(id)a1;

@end
