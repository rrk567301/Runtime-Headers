@interface MTLMotionEstimationPipelineDescriptorInternal : MTLMotionEstimationPipelineDescriptor {
    struct MTLMotionEstimationPipelineDescriptorPrivate { unsigned long long textureWidth; unsigned long long textureHeight; } _private;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct MTLMotionEstimationPipelineDescriptorPrivate { unsigned long long x0; unsigned long long x1; } *)descriptorPrivate;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)textureWidth;
- (unsigned long long)textureHeight;
- (void)setTextureWidth:(unsigned long long)a0;
- (void)setTextureHeight:(unsigned long long)a0;

@end
