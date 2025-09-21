@class NSMeasurement;

@interface MXGPUMetric : MXMetric

@property (readonly) NSMeasurement *cumulativeGPUTime;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithCumulativeGPUTimeMeasurement:(id)a0;

@end
