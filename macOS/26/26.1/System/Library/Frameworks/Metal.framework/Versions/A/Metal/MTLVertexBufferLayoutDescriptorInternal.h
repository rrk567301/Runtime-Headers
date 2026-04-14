@interface MTLVertexBufferLayoutDescriptorInternal : MTLVertexBufferLayoutDescriptor {
    unsigned long long _stride;
    unsigned long long _stepFunction;
    unsigned long long _instanceStepRate;
}

- (void)setStepRate:(unsigned long long)a0;
- (unsigned long long)stepFunction;
- (unsigned long long)stepRate;
- (unsigned long long)stride;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStride:(unsigned long long)a0;
- (BOOL)isStrideDynamic;
- (void)setStepFunction:(unsigned long long)a0;
- (id)init;

@end
