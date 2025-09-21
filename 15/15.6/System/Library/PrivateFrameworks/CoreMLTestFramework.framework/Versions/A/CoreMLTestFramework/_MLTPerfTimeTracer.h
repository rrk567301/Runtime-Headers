@class NSMutableArray;

@interface _MLTPerfTimeTracer : NSObject <_MLTPerfTracerProtocol>

@property (nonatomic) unsigned long long sampleStartTime;
@property (nonatomic) char inMeasurement;
@property (retain, nonatomic) NSMutableArray *values;

- (id)init;
- (void).cxx_destruct;
- (id)measurements;
- (char)startSampling:(id *)a0;
- (char)stopSampling:(id *)a0;

@end
