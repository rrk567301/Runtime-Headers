@class NSMeasurement;

@interface MXDiskSpaceUsageMetric : MXMetric

@property (readonly) NSMeasurement *totalBinaryFileSize;
@property (readonly) long long totalBinaryFileCount;
@property (readonly) NSMeasurement *totalDataFileSize;
@property (readonly) long long totalDataFileCount;
@property (readonly) NSMeasurement *totalCacheFolderSize;
@property (readonly) NSMeasurement *totalCloneSize;
@property (readonly) NSMeasurement *totalDiskSpaceUsedSize;
@property (readonly) NSMeasurement *totalDiskSpaceCapacity;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithTotalBinaryFileSize:(id)a0 totalBinaryFileCount:(unsigned long long)a1 totalDataFileSize:(id)a2 totalDataFileCount:(unsigned long long)a3 totalCacheFolderSize:(id)a4 totalCloneSize:(id)a5 totalDiskSpaceUsedSize:(id)a6 totalDiskSpaceCapacity:(id)a7;

@end
