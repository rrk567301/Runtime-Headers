@class NSMutableDictionary;

@interface MTSampling : NSObject

@property (retain) NSMutableDictionary *sessions;

- (id)init;
- (void).cxx_destruct;
- (void)clearSessionWithEventType:(id)a0;
- (char)isSampledInWithEventType:(id)a0 samplingForced:(id)a1 sessionSamplingPercentage:(id)a2 sessionDuration:(id)a3 samplingPercentage:(id)a4;
- (char)isSampledInWithEventType:(id)a0 sessionSamplingPercentage:(double)a1 sessionDurationMs:(unsigned long long)a2;
- (char)isSampledInWithMetricsData:(id)a0;
- (char)isSampledInWithSamplingPercentage:(double)a0;

@end
