@interface AXMSinglePitchTone : AXMTone

- (id)initWithSampleRate:(double)a0 envelope:(id)a1;
- (id)initWithFrequency:(double)a0 sampleRate:(double)a1 envelope:(id)a2;
- (void)renderInBuffer:(void *)a0 atFrame:(unsigned long long)a1;

@end
