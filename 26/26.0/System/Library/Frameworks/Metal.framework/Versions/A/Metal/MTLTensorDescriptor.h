@class MTLTensorExtents;

@interface MTLTensorDescriptor : NSObject <NSCopying>

@property (nonatomic) BOOL forceResourceIndex;
@property (nonatomic) unsigned long long resourceIndex;
@property (copy, nonatomic) MTLTensorExtents *dimensions;
@property (copy, nonatomic) MTLTensorExtents *strides;
@property (nonatomic) long long dataType;
@property (nonatomic) unsigned long long usage;
@property (nonatomic) unsigned long long resourceOptions;
@property (nonatomic) unsigned long long cpuCacheMode;
@property (nonatomic) unsigned long long storageMode;
@property (nonatomic) unsigned long long hazardTrackingMode;

- (unsigned long long)cpuCacheMode;
- (BOOL)validateWithDevice:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)setHazardTrackingMode:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCpuCacheMode:(unsigned long long)a0;
- (id)init;
- (void)setStorageMode:(unsigned long long)a0;
- (unsigned long long)storageMode;
- (unsigned long long)hazardTrackingMode;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)validateWithBuffer:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;

@end
