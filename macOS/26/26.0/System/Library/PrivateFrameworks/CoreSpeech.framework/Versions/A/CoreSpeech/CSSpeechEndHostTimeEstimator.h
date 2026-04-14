@interface CSSpeechEndHostTimeEstimator : NSObject

@property (nonatomic) unsigned long long numAudioSampleForwarded;
@property (nonatomic) unsigned long long lastAudioChunkHostTime;
@property (nonatomic) BOOL endPointNotified;
@property (nonatomic) double trailingSilenceDurationAtEndpoint;

- (unsigned long long)estimatedSpeechEndHostTimeWithLastAudioChunkHostTime:(unsigned long long)a0;
- (void)reset;
- (unsigned long long)estimatedSpeechEndHostTime;
- (id)init;
- (void)notifyTrailingSilenceDurationAtEndpoint:(double)a0;
- (void)addNumSamples:(unsigned long long)a0 hostTime:(unsigned long long)a1;

@end
