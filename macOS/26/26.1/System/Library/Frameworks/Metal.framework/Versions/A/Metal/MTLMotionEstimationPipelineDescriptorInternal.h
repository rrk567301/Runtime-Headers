@interface MTLMotionEstimationPipelineDescriptorInternal : MTLMotionEstimationPipelineDescriptor {
    struct MTLMotionEstimationPipelineDescriptorPrivate { unsigned long long textureWidth; unsigned long long textureHeight; } _private;
}

- (unsigned long long)hash;
- (id)formattedDescription:(unsigned long long)a0;
- (struct MTLMotionEstimationPipelineDescriptorPrivate { unsigned long long x0; unsigned long long x1; } *)descriptorPrivate;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)textureHeight;
- (unsigned long long)textureWidth;
- (void)setTextureHeight:(unsigned long long)a0;
- (void)setTextureWidth:(unsigned long long)a0;

@end
