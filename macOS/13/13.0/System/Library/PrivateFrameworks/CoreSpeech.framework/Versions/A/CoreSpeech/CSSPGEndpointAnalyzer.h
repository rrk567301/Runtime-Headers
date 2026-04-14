@protocol CSSPGEndpointAnalyzerDelegate;

@interface CSSPGEndpointAnalyzer : NSObject

@property (weak, nonatomic) id<CSSPGEndpointAnalyzerDelegate> delegate;

- (void).cxx_destruct;
- (void)start;
- (void)reset;
- (void)stop;
- (id)initWithEndpointThreshold:(float)a0;
- (id)initWithAnalyzeMode;
- (void)addAudio:(id)a0 numSamples:(unsigned long long)a1;
- (long long)getFrameDurationMs;

@end
