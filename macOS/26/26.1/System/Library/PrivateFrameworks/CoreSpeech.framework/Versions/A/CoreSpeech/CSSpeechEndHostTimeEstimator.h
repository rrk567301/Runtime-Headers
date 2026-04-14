@interface CSSpeechEndHostTimeEstimator : NSObject

@property (nonatomic) unsigned long long numAudioSampleForwarded;
@property (nonatomic) unsigned long long lastAudioChunkHostTime;
@property (nonatomic) BOOL endPointNotified;
@property (nonatomic) double trailingSilenceDurationAtEndpoint;

- (unsigned long long)estimatedSpeechEndHostTimeWithLastAudioChunkHostTime:(unsigned long long)a0;
- (unsigned long long)estimatedSpeechEndHostTime;
- (void)reset;
- (id)init;
- (void)addNumSamples:(unsigned long long)a0 hostTime:(unsigned long long)a1;
- (void)notifyTrailingSilenceDurationAtEndpoint:(double)a0;

@end
