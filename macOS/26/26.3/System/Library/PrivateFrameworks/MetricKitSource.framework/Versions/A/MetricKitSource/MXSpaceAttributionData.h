@class MXDiskSpaceUsageMetric, NSDate;

@interface MXSpaceAttributionData : MXSourceData

@property BOOL includesMultipleApplicationVersions;
@property (retain) NSDate *beginDate;
@property (retain) NSDate *endDate;
@property (retain) MXDiskSpaceUsageMetric *diskSpaceUsageMetrics;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initPayloadDataWithMutipleAppVersions:(BOOL)a0 withTimeStampBegin:(id)a1 withTimeStampEnd:(id)a2 withMetrics:(id)a3;

@end
