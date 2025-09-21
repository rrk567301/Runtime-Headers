@interface VNVideoProcessorTimeIntervalCadence : VNVideoProcessorCadence

@property (readonly) double timeInterval;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithTimeInterval:(double)a0;
- (void)populateVCPVideoProcessorRequestConfiguration:(id)a0;

@end
