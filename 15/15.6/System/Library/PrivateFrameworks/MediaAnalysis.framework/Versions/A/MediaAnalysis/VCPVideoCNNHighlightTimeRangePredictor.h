@interface VCPVideoCNNHighlightTimeRangePredictor : NSObject {
    char _enableHighlight;
    char _postInference;
    char _enoughFrames;
    int _validFrames;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastProcess;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastDetection;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeStart;
    float _minProcessingInterval;
}

- (id)initWithHightlightEnabled:(char)a0 postInference:(char)a1 minProcessingInterval:(float)a2 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (char)needsAnalysisResultsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)updateForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
