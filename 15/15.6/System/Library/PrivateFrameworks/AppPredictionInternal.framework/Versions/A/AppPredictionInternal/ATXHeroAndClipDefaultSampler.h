@interface ATXHeroAndClipDefaultSampler : NSObject <ATXHeroAndClipEventSamplerProtocol>

- (char)_isEventEligibleForSampling:(id)a0;
- (id)sampleEvents:(id)a0 numToSample:(unsigned long long)a1;

@end
