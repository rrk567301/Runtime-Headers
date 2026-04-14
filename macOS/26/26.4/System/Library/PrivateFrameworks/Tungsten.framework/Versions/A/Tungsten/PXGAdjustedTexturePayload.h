@class PXGImageTexture;
@protocol PXGDisplayAssetAdjustment;

@interface PXGAdjustedTexturePayload : NSObject <NSCopying>

@property (readonly, nonatomic) PXGImageTexture *texture;
@property (readonly, nonatomic) id<PXGDisplayAssetAdjustment> adjustment;
@property (readonly, nonatomic) BOOL mipmaps;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTexture:(id)a0 adjustment:(id)a1 mipmaps:(BOOL)a2;

@end
