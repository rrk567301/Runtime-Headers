@interface PMRStdDevMeasurementFilter : NSObject

@property (readonly, nonatomic) double mean;
@property (readonly, nonatomic) double stdev;
@property (readonly, nonatomic) double tolerance;

+ (id)filterDataSet:(id)a0 tolerance:(double)a1;

- (id)init;
- (char)_valueInRange:(double)a0;
- (id)filterDataSet:(id)a0;
- (id)filterMeasurement:(id)a0;
- (id)filterMeasurementList:(id)a0;
- (id)filterMeasurements:(id)a0;
- (char)filterValue:(double *)a0;
- (id)initWithMean:(double)a0 stdev:(double)a1;
- (id)initWithMean:(double)a0 stdev:(double)a1 tolerance:(double)a2;

@end
