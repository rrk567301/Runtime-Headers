@class HKRollingBaselineConfiguration, NSMutableArray;

@interface _HDRollingBaseline : NSObject {
    HKRollingBaselineConfiguration *_configuration;
    NSMutableArray *_samples;
    NSMutableArray *_supplementarySamples;
    double _samplesSum;
    double _supplementarySamplesSum;
}

@property (readonly, nonatomic) BOOL hasSufficientDataToBaseline;
@property (readonly, nonatomic) long long additionalSampleCountRequiredToBaseline;
@property (readonly, nonatomic) double currentBaseline;
@property (readonly, nonatomic) double mostRecentSampleStartTime;
@property (readonly, nonatomic) double mostRecentSupplementarySampleStartTime;

- (unsigned long long)_sampleCount;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_assertValidNextStartTime:(double)a0;
- (double)_sum;
- (void)addNextSampleValue:(double)a0 startTime:(double)a1;
- (void)addSupplementarySampleValue:(double)a0 startTime:(double)a1;
- (void)pruneForNextSampleStartTime:(double)a0;

@end
