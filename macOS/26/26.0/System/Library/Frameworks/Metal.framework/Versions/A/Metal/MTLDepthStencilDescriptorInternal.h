@class NSString, MTLStencilDescriptorInternal;

@interface MTLDepthStencilDescriptorInternal : MTLDepthStencilDescriptor {
    struct MTLDepthStencilDescriptorPrivate { MTLStencilDescriptorInternal *frontFaceStencil; MTLStencilDescriptorInternal *backFaceStencil; unsigned long long depthCompareFunction; BOOL depthWriteEnabled; NSString *label; unsigned long long resourceIndex; } _private;
}

@property (readonly) const struct MTLDepthStencilDescriptorPrivate { id x0; id x1; unsigned long long x2; BOOL x3; id x4; unsigned long long x5; } *depthStencilPrivate;

- (unsigned long long)resourceIndex;
- (void)dealloc;
- (id)backFaceStencil;
- (void)setBackFaceStencil:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)depthCompareFunction;
- (void)setDepthCompareFunction:(unsigned long long)a0;
- (id)init;
- (id)label;
- (id)description;
- (id)frontFaceStencil;
- (void)setDepthWriteEnabled:(BOOL)a0;
- (BOOL)isDepthWriteEnabled;
- (void)setFrontFaceStencil:(id)a0;
- (void)setLabel:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setResourceIndex:(unsigned long long)a0;

@end
