@interface CSSpeechEndHostTimeEstimator : NSObject

@property (nonatomic) unsigned long long numAudioSampleForwarded;
@property (nonatomic) unsigned long long lastAudioChunkHostTime;
@property (nonatomic) BOOL endPointNotified;
@property (nonatomic) double trailingSilenceDurationAtEndpoint;

- (void)reset;
- (void)addNumSamples:(unsigned long long)a0 hostTime:(unsigned long long)a1;
- (unsigned long long)estimatedSpeechEndHostTime;
- (void)notifyTrailingSilenceDurationAtEndpoint:(double)a0;
- (id)init;
- (unsigned long long)estimatedSpeechEndHostTimeWithLastAudioChunkHostTime:(unsigned long long)a0;

@end
