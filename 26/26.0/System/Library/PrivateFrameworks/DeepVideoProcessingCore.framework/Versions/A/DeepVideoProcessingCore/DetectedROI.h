@interface DetectedROI : NSObject {
    struct CGPoint { double x; double y; } _centerPoint;
}

@property (readonly, nonatomic) unsigned long long trackSessionId;
@property (readonly, nonatomic) long long roiId;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } roi;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } LSRoi;
@property (nonatomic) float confidence;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ location; float KPScore; float colorScore; float confidence; void /* unknown type, empty encoding */ pixelValueYUVNormalized; float localMotionScore; float GGProb; void /* unknown type, empty encoding */ pixelFeature; unsigned int pixelFeatureLen; void /* unknown type, empty encoding */ KPLSDiffVector; void /* unknown type, empty encoding */ trajectoryFromPast; void /* unknown type, empty encoding */ trajectoryToFuture; } des;
@property int trackID;
@property BOOL isTracked;
@property BOOL isPredictedFromPast;
@property int predictedFromPastCnt;
@property int trackedCnt;
@property int lowSaliencyCnt;
@property void /* unknown type, empty encoding */ trajectoryFromPast;
@property BOOL isTrajectoryPruningPassed;
@property BOOL isReflectedLS;
@property void /* unknown type, empty encoding */ roiMv;

- (id)initWithTrackingSessionId:(unsigned long long)a0 roiId:(long long)a1 andRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithTrackingSessionId:(unsigned long long)a0 roiId:(long long)a1 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 LSRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 confidence:(float)a4;
- (id)initWithTrackingSessionId:(unsigned long long)a0 roiId:(long long)a1 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 LSRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 descriptor:(struct { float x0; float x1; float x2; float x3; float x4; unsigned int x5; })a4 propertiesForPostProcPipeVisualization:(struct { int x0; BOOL x1; BOOL x2; int x3; int x4; int x5; BOOL x6; BOOL x7; } *)a5;
- (id)initWithTrackingSessionId:(unsigned long long)a0 roiId:(long long)a1 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 trackId:(int)a3;

@end
