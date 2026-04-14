@class MTLResourceAddressRangeArray;

@interface MTLHeapDescriptorInternal : MTLHeapDescriptor {
    struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; long long x10; } *_private;
    MTLResourceAddressRangeArray *_addressRanges;
}

@property (nonatomic) long long sparsePageSize;
@property (nonatomic) BOOL sparsePageAccessCountersEnabled;

- (void)setStorageMode:(unsigned long long)a0;
- (void)setResourceOptions:(unsigned long long)a0;
- (void)setProtectionOptions:(unsigned long long)a0;
- (void)setHazardTrackingMode:(unsigned long long)a0;
- (void)setCpuCacheMode:(unsigned long long)a0;
- (BOOL)validateWithDevice:(id)a0;
- (const struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; long long x10; } *)descriptorPrivate;
- (unsigned long long)memoryPoolId;
- (id)formattedDescription:(unsigned long long)a0;
- (void)setAddressRanges:(id)a0;
- (unsigned long long)cpuCacheMode;
- (unsigned long long)protectionOptions;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)addressRanges;
- (unsigned long long)pinnedGPUAddress;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)resourceOptions;
- (unsigned long long)storageMode;
- (void)setSize:(unsigned long long)a0;
- (unsigned long long)hazardTrackingMode;
- (void)setType:(long long)a0;
- (long long)maxCompatiblePlacementSparsePageSize;
- (unsigned long long)hash;
- (long long)type;
- (id)init;
- (void)setMaxCompatiblePlacementSparsePageSize:(long long)a0;
- (id)description;
- (void)dealloc;
- (unsigned long long)size;
- (void)setMemoryPoolId:(unsigned long long)a0;
- (void)setPinnedGPUAddress:(unsigned long long)a0;

@end
