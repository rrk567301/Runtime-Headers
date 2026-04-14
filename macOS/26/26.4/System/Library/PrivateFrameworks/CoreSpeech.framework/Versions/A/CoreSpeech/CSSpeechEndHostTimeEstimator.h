@interface CSSpeechEndHostTimeEstimator : NSObject

@property (nonatomic) unsigned long long numAudioSampleForwarded;
@property (nonatomic) unsigned long long lastAudioChunkHostTime;
@property (nonatomic) BOOL endPointNotified;
@property (nonatomic) double trailingSilenceDurationAtEndpoint;

- (void)notifyTrailingSilenceDurationAtEndpoint:(double)a0;
- (unsigned long long)estimatedSpeechEndHostTimeWithLastAudioChunkHostTime:(unsigned long long)a0;
- (void)reset;
- (id)init;
- (void)addNumSamples:(unsigned long long)a0 hostTime:(unsigned long long)a1;
- (unsigned long long)estimatedSpeechEndHostTime;

@end
