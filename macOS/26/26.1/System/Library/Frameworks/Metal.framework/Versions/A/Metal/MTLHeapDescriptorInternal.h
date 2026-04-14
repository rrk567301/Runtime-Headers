@class MTLResourceAddressRangeArray;

@interface MTLHeapDescriptorInternal : MTLHeapDescriptor {
    struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; long long x10; } *_private;
    MTLResourceAddressRangeArray *_addressRanges;
}

@property (nonatomic) long long sparsePageSize;
@property (nonatomic) BOOL sparsePageAccessCountersEnabled;

- (void)setHazardTrackingMode:(unsigned long long)a0;
- (void)setProtectionOptions:(unsigned long long)a0;
- (unsigned long long)memoryPoolId;
- (unsigned long long)cpuCacheMode;
- (unsigned long long)storageMode;
- (long long)type;
- (unsigned long long)protectionOptions;
- (unsigned long long)hazardTrackingMode;
- (unsigned long long)resourceOptions;
- (unsigned long long)hash;
- (id)formattedDescription:(unsigned long long)a0;
- (void)setCpuCacheMode:(unsigned long long)a0;
- (void)setResourceOptions:(unsigned long long)a0;
- (unsigned long long)size;
- (const struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; long long x10; } *)descriptorPrivate;
- (void)setType:(long long)a0;
- (unsigned long long)pinnedGPUAddress;
- (void)setAddressRanges:(id)a0;
- (id)addressRanges;
- (id)description;
- (void)dealloc;
- (BOOL)validateWithDevice:(id)a0;
- (void)setMaxCompatiblePlacementSparsePageSize:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setMemoryPoolId:(unsigned long long)a0;
- (long long)maxCompatiblePlacementSparsePageSize;
- (BOOL)isEqual:(id)a0;
- (void)setSize:(unsigned long long)a0;
- (void)setPinnedGPUAddress:(unsigned long long)a0;
- (id)init;
- (void)setStorageMode:(unsigned long long)a0;

@end
