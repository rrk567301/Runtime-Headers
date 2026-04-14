@interface MTLHeapDescriptorInternal : MTLHeapDescriptor {
    struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; } *_private;
}

@property (nonatomic) long long sparsePageSize;
@property (nonatomic) BOOL sparsePageAccessCountersEnabled;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)size;
- (long long)type;
- (void)setType:(long long)a0;
- (void)setSize:(unsigned long long)a0;
- (void)setResourceOptions:(unsigned long long)a0;
- (const struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; } *)descriptorPrivate;
- (unsigned long long)cpuCacheMode;
- (unsigned long long)storageMode;
- (unsigned long long)hazardTrackingMode;
- (unsigned long long)resourceOptions;
- (unsigned long long)protectionOptions;
- (id)formattedDescription:(unsigned long long)a0;
- (void)setProtectionOptions:(unsigned long long)a0;
- (void)setStorageMode:(unsigned long long)a0;
- (void)setCpuCacheMode:(unsigned long long)a0;
- (void)setHazardTrackingMode:(unsigned long long)a0;
- (BOOL)validateWithDevice:(id)a0;
- (void)setPinnedGPUAddress:(unsigned long long)a0;
- (unsigned long long)pinnedGPUAddress;

@end
