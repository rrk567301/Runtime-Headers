@interface MTLBufferLayoutDescriptorInternal : MTLBufferLayoutDescriptor {
    unsigned long long _stride;
    unsigned long long _stepFunction;
    unsigned long long _instanceStepRate;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)stride;
- (void)setStride:(unsigned long long)a0;
- (void)setStepFunction:(unsigned long long)a0;
- (unsigned long long)stepFunction;
- (unsigned long long)stepRate;
- (void)setStepRate:(unsigned long long)a0;

@end
