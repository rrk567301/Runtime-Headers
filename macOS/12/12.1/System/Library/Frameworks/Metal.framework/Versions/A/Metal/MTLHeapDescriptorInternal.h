@interface MTLHeapDescriptorInternal : MTLHeapDescriptor {
    struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; } *_private;
}

@property (nonatomic) unsigned long long sparsePageSize;
@property (nonatomic) BOOL sparsePageAccessCountersEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)size;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (long long)type;
- (void)setType:(long long)a0;
- (void)setSize:(unsigned long long)a0;
- (unsigned long long)storageMode;
- (unsigned long long)cpuCacheMode;
- (unsigned long long)hazardTrackingMode;
- (unsigned long long)resourceOptions;
- (id)formattedDescription:(unsigned long long)a0;
- (void)setResourceOptions:(unsigned long long)a0;
- (const struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; } *)descriptorPrivate;
- (void)setStorageMode:(unsigned long long)a0;
- (void)setCpuCacheMode:(unsigned long long)a0;
- (BOOL)validateWithDevice:(id)a0;
- (void)setHazardTrackingMode:(unsigned long long)a0;
- (void)setPinnedGPUAddress:(unsigned long long)a0;
- (unsigned long long)pinnedGPUAddress;

@end
