@interface MTLPipelineBufferDescriptorInternal : MTLPipelineBufferDescriptor {
    struct MTLPipelineBufferDescriptorPrivate { union { struct { unsigned char mutability : 2; } ; struct { unsigned long long bits; } ; } ; } _private;
}

- (const struct MTLPipelineBufferDescriptorPrivate { union { struct { unsigned char x0 : 2; } x0; struct { unsigned long long x0; } x1; } x0; } *)_descriptorPrivate;
- (id)formattedDescription:(unsigned long long)a0;
- (BOOL)isDefault;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void)dealloc;
- (unsigned long long)mutability;
- (void)setMutability:(unsigned long long)a0;

@end
