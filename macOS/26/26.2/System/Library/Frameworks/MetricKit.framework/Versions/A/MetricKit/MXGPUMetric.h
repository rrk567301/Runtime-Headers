@class NSMeasurement;

@interface MXGPUMetric : MXMetric

@property (readonly) NSMeasurement *cumulativeGPUTime;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithCumulativeGPUTimeMeasurement:(id)a0;

@end
