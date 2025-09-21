@class NSMutableArray;

@interface _MLTPerfEnergyTracer : NSObject <_MLTPerfTracerProtocol>

@property (nonatomic) int pid;
@property (nonatomic) char inMeasurement;
@property (nonatomic) unsigned long long sampleStartCPUCycles;
@property (retain, nonatomic) NSMutableArray *values;

- (id)init;
- (void).cxx_destruct;
- (id)measurements;
- (char)startSampling:(id *)a0;
- (char)stopSampling:(id *)a0;

@end
