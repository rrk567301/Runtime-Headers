@protocol CSSPGEndpointAnalyzerDelegate;

@interface CSSPGEndpointAnalyzer : NSObject

@property (weak, nonatomic) id<CSSPGEndpointAnalyzerDelegate> delegate;

- (void).cxx_destruct;
- (void)start;
- (void)reset;
- (void)stop;
- (id)initWithAnalyzeMode;
- (long long)getFrameDurationMs;
- (void)addAudio:(id)a0 numSamples:(unsigned long long)a1;
- (id)initWithEndpointThreshold:(float)a0;

@end
