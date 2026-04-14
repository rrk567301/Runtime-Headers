@interface VNVideoProcessorTimeIntervalCadence : VNVideoProcessorCadence

@property (readonly) double timeInterval;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)populateVCPVideoProcessorRequestConfiguration:(id)a0;
- (id)initWithTimeInterval:(double)a0;

@end
