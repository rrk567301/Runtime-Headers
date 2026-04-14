@class NSMutableDictionary, NSDictionary, NSArray, NSMutableArray;

@interface BWSmartFramingSceneMonitor : NSObject {
    NSMutableDictionary *_faceTracks;
    NSMutableArray *_optimalFOVHistory;
    NSMutableArray *_optimalFOVHistoryPTS;
    float _suggestedFOVSlackDurationInSeconds;
    int _cumulativeSuggestedFOVType;
    NSMutableDictionary *_gazeProbabilitiesByFaceGroupID;
    NSDictionary *_fieldsOfView;
    BOOL _zoomInTransitionEnabled;
    float _faceSignificanceDetectionThreshold;
    float _faceRectExpansionScaleFactor;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastFaceDetectionPTS;
    float _noFaceDetectedZoomOutTimeInSeconds;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastSuggestedFieldOfViewChangePTS;
    BOOL _useDynamicFieldOfViewRects;
    NSArray *_viewsInAscendingFOV;
    NSDictionary *_minimumRequiredSignificantFaceCount;
    NSDictionary *_detectedObjectsInfo;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _detectedObjectsInfoPTS;
}

+ (void)initialize;

- (void)reset;
- (void)dealloc;
- (id)initWithDynamicFieldOfViewRectsEnabled:(BOOL)a0;
- (int)resolveSuggestedFieldOfViewRectWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 fromFieldOfViewRects:(id)a1 suggestedFieldOfViewRectOut:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (int)resolveSuggestedFieldOfViewWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 suggestedFieldOfViewOut:(int *)a1;
- (void)setSmartFramingCamGazeProbabilitiesByFaceGroupID:(id)a0;
- (int)setSmartFramingFieldOfViewRects:(id)a0;

@end
