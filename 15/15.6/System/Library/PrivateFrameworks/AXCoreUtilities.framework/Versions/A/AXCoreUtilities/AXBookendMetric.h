@interface AXBookendMetric : AXMetric <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

- (void)endMeasurement;
- (void)startMeasurement;

@end
