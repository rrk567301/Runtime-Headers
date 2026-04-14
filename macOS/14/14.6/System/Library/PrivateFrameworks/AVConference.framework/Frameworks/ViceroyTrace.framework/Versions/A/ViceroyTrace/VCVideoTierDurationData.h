@class VCReportingHistogram;

@interface VCVideoTierDurationData : NSObject <VCAggregatorDataCollector> {
    long long _currentReceivedVideoResolution;
    VCReportingHistogram *_receivedVideoTierDuration;
    double _lastReceivedTierSwitchTime;
}

- (void)dealloc;
- (void)finalize;
- (id)init;
- (long long)resolutionForVideoWidth:(unsigned int)a0 height:(unsigned int)a1;
- (void)accumulate:(id)a0;
- (void)updateCurrentReceivedVideoResolution:(long long)a0 time:(double)a1;
- (void)updateReport:(id)a0;
- (void)updateReport:(id)a0 withStreamGroup:(id)a1;
- (void)updateWithPayload:(id)a0;
- (void)updateWithPayload:(id)a0 time:(double)a1;

@end
