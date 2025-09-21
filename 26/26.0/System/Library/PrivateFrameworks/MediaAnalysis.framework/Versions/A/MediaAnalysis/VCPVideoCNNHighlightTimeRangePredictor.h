@interface VCPVideoCNNHighlightTimeRangePredictor : NSObject {
    BOOL _enableHighlight;
    BOOL _postInference;
    BOOL _enoughFrames;
    int _validFrames;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastProcess;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastDetection;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeStart;
    float _minProcessingInterval;
}

- (void)updateForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithHightlightEnabled:(BOOL)a0 postInference:(BOOL)a1 minProcessingInterval:(float)a2 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (BOOL)needsAnalysisResultsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
