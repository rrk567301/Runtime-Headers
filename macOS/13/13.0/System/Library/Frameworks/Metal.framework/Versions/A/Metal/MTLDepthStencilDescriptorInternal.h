@class NSString, MTLStencilDescriptorInternal;

@interface MTLDepthStencilDescriptorInternal : MTLDepthStencilDescriptor {
    struct MTLDepthStencilDescriptorPrivate { MTLStencilDescriptorInternal *frontFaceStencil; MTLStencilDescriptorInternal *backFaceStencil; unsigned long long depthCompareFunction; BOOL depthWriteEnabled; NSString *label; } _private;
}

@property (readonly) const struct MTLDepthStencilDescriptorPrivate { id x0; id x1; unsigned long long x2; BOOL x3; id x4; } *depthStencilPrivate;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDepthCompareFunction:(unsigned long long)a0;
- (void)setDepthWriteEnabled:(BOOL)a0;
- (id)backFaceStencil;
- (BOOL)isDepthWriteEnabled;
- (id)frontFaceStencil;
- (unsigned long long)depthCompareFunction;
- (id)label;
- (void)setLabel:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (void)setFrontFaceStencil:(id)a0;
- (void)setBackFaceStencil:(id)a0;

@end
