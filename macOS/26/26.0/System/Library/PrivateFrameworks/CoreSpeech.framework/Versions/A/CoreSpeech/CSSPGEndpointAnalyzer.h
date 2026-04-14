@protocol CSSPGEndpointAnalyzerDelegate;

@interface CSSPGEndpointAnalyzer : NSObject

@property (weak, nonatomic) id<CSSPGEndpointAnalyzerDelegate> delegate;

- (void)reset;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)addAudio:(id)a0 numSamples:(unsigned long long)a1;
- (long long)getFrameDurationMs;
- (id)initWithAnalyzeMode;
- (id)initWithEndpointThreshold:(float)a0;

@end
