@interface MTLBufferLayoutDescriptorInternal : MTLBufferLayoutDescriptor {
    unsigned long long _stride;
    unsigned long long _stepFunction;
    unsigned long long _instanceStepRate;
}

- (unsigned long long)stepFunction;
- (void)setStepRate:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)stepRate;
- (BOOL)isStrideDynamic;
- (unsigned long long)stride;
- (void)setStepFunction:(unsigned long long)a0;
- (id)init;
- (void)setStride:(unsigned long long)a0;

@end
