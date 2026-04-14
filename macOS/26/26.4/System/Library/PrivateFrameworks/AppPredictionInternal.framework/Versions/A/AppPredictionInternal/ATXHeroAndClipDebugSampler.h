@class NSArray;

@interface ATXHeroAndClipDebugSampler : NSObject <ATXHeroAndClipEventSamplerProtocol> {
    NSArray *_indicesToSample;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithSampleIndices:(id)a0;
- (id)sampleEvents:(id)a0 numToSample:(unsigned long long)a1;

@end
