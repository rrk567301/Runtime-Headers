@class NSMeasurement, NSMeasurementFormatter;

@interface MXAverage : NSObject <NSSecureCoding> {
    NSMeasurementFormatter *_averageMeasurementFormatter;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSMeasurement *averageMeasurement;
@property (readonly) long long sampleCount;
@property (readonly) double standardDeviation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithDoubleValue:(double)a0 sampleCount:(long long)a1 standardDeviation:(double)a2 unit:(id)a3;
- (id)initWithMeasurement:(id)a0 sampleCount:(long long)a1 standardDeviation:(double)a2;

@end
