@interface MTLMotionEstimationPipelineDescriptorInternal : MTLMotionEstimationPipelineDescriptor {
    struct MTLMotionEstimationPipelineDescriptorPrivate { unsigned long long textureWidth; unsigned long long textureHeight; } _private;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)textureWidth;
- (unsigned long long)textureHeight;
- (struct MTLMotionEstimationPipelineDescriptorPrivate { unsigned long long x0; unsigned long long x1; } *)descriptorPrivate;
- (void)setTextureWidth:(unsigned long long)a0;
- (void)setTextureHeight:(unsigned long long)a0;

@end
