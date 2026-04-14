@class MXDiskSpaceUsageMetric, NSDate;

@interface MXSpaceAttributionData : MXSourceData

@property BOOL includesMultipleApplicationVersions;
@property (retain) NSDate *beginDate;
@property (retain) NSDate *endDate;
@property (retain) MXDiskSpaceUsageMetric *diskSpaceUsageMetrics;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initPayloadDataWithMutipleAppVersions:(BOOL)a0 withTimeStampBegin:(id)a1 withTimeStampEnd:(id)a2 withMetrics:(id)a3;

@end
