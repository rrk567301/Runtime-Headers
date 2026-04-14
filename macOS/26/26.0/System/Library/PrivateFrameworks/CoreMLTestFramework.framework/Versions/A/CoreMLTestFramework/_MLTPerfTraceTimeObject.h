@class NSMutableArray;

@interface _MLTPerfTraceTimeObject : NSObject

@property unsigned long long sampleStartTime;
@property BOOL inMeasurement;
@property int numSamples;
@property double sumOfSquares;
@property double sum;
@property (retain) NSMutableArray *allValues;

- (double)max;
- (double)min;
- (double)median;
- (id)init;
- (id)stopSampling;
- (void).cxx_destruct;
- (double)mean;
- (double)variance;
- (id)startSampling;
- (id)getMeasurementDict;
- (void)insertDeltaMilliSec:(double)a0;
- (id)recordCompletedAsyncRequestCount:(int)a0;

@end
