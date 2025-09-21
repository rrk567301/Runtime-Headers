@interface VNVideoProcessorFrameRateCadence : VNVideoProcessorCadence

@property (readonly) long long frameRate;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithFrameRate:(long long)a0;
- (void)populateVCPVideoProcessorRequestConfiguration:(id)a0;

@end
