@class MTLRasterizationRateSampleArrayInternal;

@interface MTLRasterizationRateLayerDescriptorInternal : MTLRasterizationRateLayerDescriptor {
    float *_data;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _size;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _currentSampleCount;
    MTLRasterizationRateSampleArrayInternal *_horizontal;
    MTLRasterizationRateSampleArrayInternal *_vertical;
}

- (void)dealloc;
- (id)horizontal;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)vertical;
- (id)description;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })sampleCount;
- (void)setSampleCount:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (float *)horizontalSampleStorage;
- (id)initWithSampleCount:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)initWithSampleCount:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 horizontal:(const float *)a1 vertical:(const float *)a2;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })maxSampleCount;
- (float *)verticalSampleStorage;

@end
