@class NSString, MTLStencilDescriptorInternal;

@interface MTLDepthStencilDescriptorInternal : MTLDepthStencilDescriptor {
    struct MTLDepthStencilDescriptorPrivate { MTLStencilDescriptorInternal *frontFaceStencil; MTLStencilDescriptorInternal *backFaceStencil; unsigned long long depthCompareFunction; char depthWriteEnabled; NSString *label; } _private;
}

@property (readonly) const struct MTLDepthStencilDescriptorPrivate { id x0; id x1; unsigned long long x2; char x3; id x4; } *depthStencilPrivate;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)backFaceStencil;
- (unsigned long long)depthCompareFunction;
- (id)formattedDescription:(unsigned long long)a0;
- (id)frontFaceStencil;
- (char)isDepthWriteEnabled;
- (id)label;
- (void)setDepthCompareFunction:(unsigned long long)a0;
- (void)setDepthWriteEnabled:(char)a0;
- (void)setLabel:(id)a0;
- (void)setBackFaceStencil:(id)a0;
- (void)setFrontFaceStencil:(id)a0;

@end
