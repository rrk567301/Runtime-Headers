@class NSMeasurement;

@interface MXDiskIOMetric : MXMetric

@property (readonly) NSMeasurement *cumulativeLogicalWrites;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithCumulativeLogicalWritesMeasurement:(id)a0;

@end
