@class NSMutableArray;

@interface _MLTPerfMemoryTracer : NSObject <_MLTPerfTracerProtocol>

@property (nonatomic) long long computeUnit;
@property (nonatomic) int pid;
@property (nonatomic) unsigned long long sampleStartMemory;
@property (nonatomic) char inMeasurement;
@property (retain, nonatomic) NSMutableArray *values;

- (void).cxx_destruct;
- (id)measurements;
- (id)initWithComputeUnit:(long long)a0;
- (char)startSampling:(id *)a0;
- (char)stopSampling:(id *)a0;

@end
