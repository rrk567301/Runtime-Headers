@class MTLResourceAddressRangeArray;

@interface MTLHeapDescriptorInternal : MTLHeapDescriptor {
    struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; long long x10; } *_private;
    MTLResourceAddressRangeArray *_addressRanges;
}

@property (nonatomic) long long sparsePageSize;
@property (nonatomic) BOOL sparsePageAccessCountersEnabled;

- (const struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; long long x10; } *)descriptorPrivate;
- (void)setResourceOptions:(unsigned long long)a0;
- (void)setStorageMode:(unsigned long long)a0;
- (void)setProtectionOptions:(unsigned long long)a0;
- (unsigned long long)resourceOptions;
- (BOOL)validateWithDevice:(id)a0;
- (unsigned long long)cpuCacheMode;
- (unsigned long long)storageMode;
- (unsigned long long)hazardTrackingMode;
- (unsigned long long)protectionOptions;
- (void)setType:(long long)a0;
- (long long)type;
- (id)description;
- (void)setSize:(unsigned long long)a0;
- (void)setAddressRanges:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)init;
- (unsigned long long)size;
- (void)setMemoryPoolId:(unsigned long long)a0;
- (unsigned long long)memoryPoolId;
- (void)setCpuCacheMode:(unsigned long long)a0;
- (void)setPinnedGPUAddress:(unsigned long long)a0;
- (void)dealloc;
- (void)setMaxCompatiblePlacementSparsePageSize:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)maxCompatiblePlacementSparsePageSize;
- (BOOL)isEqual:(id)a0;
- (void)setHazardTrackingMode:(unsigned long long)a0;
- (unsigned long long)pinnedGPUAddress;
- (id)addressRanges;
- (unsigned long long)hash;

@end
