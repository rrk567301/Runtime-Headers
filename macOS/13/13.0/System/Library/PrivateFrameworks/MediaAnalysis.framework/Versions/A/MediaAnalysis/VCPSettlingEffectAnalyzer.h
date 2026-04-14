@interface VCPSettlingEffectAnalyzer : VCPVideoAnalyzer

@property (readonly) BOOL processAborted;
@property (nonatomic) BOOL cancelled;

- (id)initWithTimestamps:(id)a0 andTrack:(id)a1;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 withStillImageBuffer:(struct __CVBuffer { } *)a1;

@end
