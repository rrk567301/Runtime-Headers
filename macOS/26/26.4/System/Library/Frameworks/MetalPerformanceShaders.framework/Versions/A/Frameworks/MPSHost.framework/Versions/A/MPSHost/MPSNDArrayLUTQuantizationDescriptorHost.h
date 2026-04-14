@interface MPSNDArrayLUTQuantizationDescriptorHost : MPSNDArrayQuantizationDescriptorHost {
    unsigned long long _vectorAxis;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDataType:(unsigned int)a0;
- (long long)getNDArrayCount;
- (id)initWithDataType:(unsigned int)a0 vectorAxis:(unsigned long long)a1;

@end
