@class PXGUniform;

@interface PXGUniformAlias : PXGUniform

@property (readonly, nonatomic) PXGUniform *original;
@property (readonly, nonatomic) long long index;

- (float)floatValue;
- (const void *)bytes;
- (id)cachedTexture;
- (id)description;
- (id)initWithName:(id)a0 type:(unsigned long long)a1;
- (id)name;
- (void).cxx_destruct;
- (struct CGImage { } *)image;
- (long long)bytesLength;
- (void /* unknown type, empty encoding */)float2Value;
- (void /* unknown type, empty encoding */)float3Value;
- (void /* unknown type, empty encoding */)float4Value;
- (id /* block */)textureProvider;
- (id)initWithIndex:(long long)a0 aliasing:(id)a1;
- (BOOL)isEquivalentToUniform:(id)a0;
- (void)setCachedTexture:(id)a0;

@end
