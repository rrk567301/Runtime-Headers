@class NSMutableArray, VCPSegment;

@interface VCPActionAnalyzer : NSObject {
    NSMutableArray *_internalResults;
    VCPSegment *_activeSegment;
    struct HinkleyDetector { float x0; float x1; int x2; struct HinkleyStats { float x0; float x1; float x2; float x3; } x3; } *_activeHinkleyDetector;
    float _activeThreshold;
    char _firstFrame;
    char _verbose;
    int _postProcessStart;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)segments;
- (char)isActive:(float)a0;
- (id)activeSegment;
- (int)analyzeFrameWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 andActionScore:(float)a1;
- (char)decideSegmentPointBasedOnActionScore:(float)a0;
- (char)decideSegmentPointUsingHinkleyDetector:(float)a0;
- (int)finalizeWithDestructiveTrimStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trimEnd:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (char)isScoreValid:(float)a0;
- (int)mergeConsecutiveShortSegments;
- (int)mergeSameTypeSegments;
- (int)mergeSparseShortSegments;
- (int)postProcessSegmentsWithCaptureTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trimStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (int)prepareTrimmingWithTrimStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 andTrimEnd:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)printSegments:(id)a0;
- (void)updateActiveThreshold;

@end
