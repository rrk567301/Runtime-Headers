@class MTLResourceAddressRangeArray;

@interface MTLHeapDescriptorInternal : MTLHeapDescriptor {
    struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; long long x10; } *_private;
    MTLResourceAddressRangeArray *_addressRanges;
}

@property (nonatomic) long long sparsePageSize;
@property (nonatomic) BOOL sparsePageAccessCountersEnabled;

- (BOOL)validateWithDevice:(id)a0;
- (unsigned long long)memoryPoolId;
- (id)addressRanges;
- (void)setProtectionOptions:(unsigned long long)a0;
- (unsigned long long)protectionOptions;
- (void)setType:(long long)a0;
- (const struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; long long x10; } *)descriptorPrivate;
- (unsigned long long)storageMode;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setSize:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)resourceOptions;
- (long long)type;
- (void)setMaxCompatiblePlacementSparsePageSize:(long long)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (void)setCpuCacheMode:(unsigned long long)a0;
- (void)setMemoryPoolId:(unsigned long long)a0;
- (id)description;
- (unsigned long long)size;
- (void)setStorageMode:(unsigned long long)a0;
- (void)setPinnedGPUAddress:(unsigned long long)a0;
- (unsigned long long)pinnedGPUAddress;
- (long long)maxCompatiblePlacementSparsePageSize;
- (unsigned long long)cpuCacheMode;
- (void)setResourceOptions:(unsigned long long)a0;
- (id)init;
- (void)setAddressRanges:(id)a0;
- (unsigned long long)hazardTrackingMode;
- (void)setHazardTrackingMode:(unsigned long long)a0;
- (void)dealloc;

@end
