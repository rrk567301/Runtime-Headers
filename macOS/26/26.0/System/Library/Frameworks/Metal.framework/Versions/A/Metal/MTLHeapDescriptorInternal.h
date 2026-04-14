@class MTLResourceAddressRangeArray;

@interface MTLHeapDescriptorInternal : MTLHeapDescriptor {
    struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; long long x10; } *_private;
    MTLResourceAddressRangeArray *_addressRanges;
}

@property (nonatomic) long long sparsePageSize;
@property (nonatomic) BOOL sparsePageAccessCountersEnabled;

- (void)setSize:(unsigned long long)a0;
- (void)setProtectionOptions:(unsigned long long)a0;
- (unsigned long long)cpuCacheMode;
- (void)dealloc;
- (void)setHazardTrackingMode:(unsigned long long)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCpuCacheMode:(unsigned long long)a0;
- (long long)type;
- (const struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; long long x10; } *)descriptorPrivate;
- (void)setMemoryPoolId:(unsigned long long)a0;
- (long long)maxCompatiblePlacementSparsePageSize;
- (id)init;
- (void)setStorageMode:(unsigned long long)a0;
- (void)setPinnedGPUAddress:(unsigned long long)a0;
- (void)setAddressRanges:(id)a0;
- (void)setType:(long long)a0;
- (unsigned long long)pinnedGPUAddress;
- (void)setResourceOptions:(unsigned long long)a0;
- (unsigned long long)storageMode;
- (id)description;
- (unsigned long long)resourceOptions;
- (id)addressRanges;
- (unsigned long long)protectionOptions;
- (unsigned long long)hazardTrackingMode;
- (void)setMaxCompatiblePlacementSparsePageSize:(long long)a0;
- (unsigned long long)hash;
- (unsigned long long)size;
- (BOOL)isEqual:(id)a0;
- (BOOL)validateWithDevice:(id)a0;
- (unsigned long long)memoryPoolId;

@end
