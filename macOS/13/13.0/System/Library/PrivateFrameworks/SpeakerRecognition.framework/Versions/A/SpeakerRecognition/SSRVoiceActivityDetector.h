@interface SSRVoiceActivityDetector : NSObject

- (void)resetWithContext:(id)a0;
- (void)endAudio;
- (id)initWithContext:(id)a0 delegate:(id)a1;
- (void)processAudioData:(id)a0 numSamples:(unsigned long long)a1;

@end
