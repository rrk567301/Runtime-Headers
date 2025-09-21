@interface MTLBufferLayoutDescriptorInternal : MTLBufferLayoutDescriptor {
    unsigned long long _stride;
    unsigned long long _stepFunction;
    unsigned long long _instanceStepRate;
}

- (void)setStride:(unsigned long long)a0;
- (void)setStepRate:(unsigned long long)a0;
- (unsigned long long)stride;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStepFunction:(unsigned long long)a0;
- (BOOL)isStrideDynamic;
- (id)init;
- (unsigned long long)stepFunction;
- (unsigned long long)stepRate;

@end
