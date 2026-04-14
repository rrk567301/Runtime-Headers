@interface MTLVertexBufferLayoutDescriptorInternal : MTLVertexBufferLayoutDescriptor {
    unsigned long long _stride;
    unsigned long long _stepFunction;
    unsigned long long _instanceStepRate;
}

- (id)init;
- (unsigned long long)stepFunction;
- (unsigned long long)stride;
- (void)setStepFunction:(unsigned long long)a0;
- (unsigned long long)stepRate;
- (BOOL)isStrideDynamic;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStride:(unsigned long long)a0;
- (void)setStepRate:(unsigned long long)a0;

@end
