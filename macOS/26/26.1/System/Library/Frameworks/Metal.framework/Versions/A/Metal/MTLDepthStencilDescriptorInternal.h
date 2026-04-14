@class NSString, MTLStencilDescriptorInternal;

@interface MTLDepthStencilDescriptorInternal : MTLDepthStencilDescriptor {
    struct MTLDepthStencilDescriptorPrivate { MTLStencilDescriptorInternal *frontFaceStencil; MTLStencilDescriptorInternal *backFaceStencil; unsigned long long depthCompareFunction; BOOL depthWriteEnabled; NSString *label; unsigned long long resourceIndex; } _private;
}

@property (readonly) const struct MTLDepthStencilDescriptorPrivate { id x0; id x1; unsigned long long x2; BOOL x3; id x4; unsigned long long x5; } *depthStencilPrivate;

- (void)setResourceIndex:(unsigned long long)a0;
- (BOOL)isDepthWriteEnabled;
- (void)setBackFaceStencil:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)depthCompareFunction;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)resourceIndex;
- (void)setLabel:(id)a0;
- (void)setDepthWriteEnabled:(BOOL)a0;
- (id)description;
- (void)dealloc;
- (void)setDepthCompareFunction:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)backFaceStencil;
- (BOOL)isEqual:(id)a0;
- (void)setFrontFaceStencil:(id)a0;
- (id)label;
- (id)frontFaceStencil;
- (id)init;

@end
