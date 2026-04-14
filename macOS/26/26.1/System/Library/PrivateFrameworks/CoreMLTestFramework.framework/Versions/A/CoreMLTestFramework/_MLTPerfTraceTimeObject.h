@class NSMutableArray;

@interface _MLTPerfTraceTimeObject : NSObject

@property unsigned long long sampleStartTime;
@property BOOL inMeasurement;
@property int numSamples;
@property double sumOfSquares;
@property double sum;
@property (retain) NSMutableArray *allValues;

- (double)max;
- (id)stopSampling;
- (double)min;
- (double)median;
- (void).cxx_destruct;
- (id)init;
- (double)mean;
- (double)variance;
- (id)startSampling;
- (id)getMeasurementDict;
- (void)insertDeltaMilliSec:(double)a0;
- (id)recordCompletedAsyncRequestCount:(int)a0;

@end
