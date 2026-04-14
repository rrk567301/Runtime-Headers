@interface _MLTPerfTraceTimeObject : NSObject

@property unsigned long long sampleStartTime;
@property BOOL inMeasurement;
@property int numSamples;
@property double sumOfSquares;
@property double sum;

- (id)init;
- (double)mean;
- (double)variance;
- (id)startSampling;
- (id)stopSampling;
- (id)getMeasurementDict;

@end
