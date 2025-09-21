@class NSString, NSMutableArray;

@interface TrackedFace : NSObject {
    NSString *_faceGroupID;
    NSMutableArray *_faceRects;
    NSMutableArray *_faceSizes;
    NSMutableArray *_gazeScores;
    NSMutableArray *_gazeConfidences;
    float _faceSizeScoreFiltered;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _firstSignificantTimeStamp;
    BOOL _isSignificant;
    float _significanceDetectionThreshold;
}

@property (readonly, nonatomic) BOOL isPersistentlySignificant;

- (void)dealloc;
- (void)_appendArray:(id)a0 withObject:(id)a1 restrictingLengthTo:(int)a2;
- (float)_getMotionScoreUsingLargestFaceTrack:(id)a0;
- (int)_updateGazeStatesUsingGazeProbabilitiesData:(id)a0 gazeConfidenceFilteredOut:(float *)a1 gazeScoreFilteredOut:(float *)a2;
- (id)initWithFaceGroupID:(id)a0 signficanceDetectionThreshold:(float)a1;
- (void)updateStatesIfNeededUsingFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 faceSize:(float)a1 gazeProbabilitiesData:(id)a2 largestFaceTrack:(id)a3 largestFaceSize:(float)a4 totalDetectedFaceCount:(long long)a5 currentPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6 isSignificantOut:(BOOL *)a7;

@end
