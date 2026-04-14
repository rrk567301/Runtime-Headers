@class NSMutableArray, NSString;

@interface ROI : NSObject

@property void /* unknown type, empty encoding */ bbox;
@property float area;
@property struct { void /* unknown type, empty encoding */ location; float KPScore; float colorScore; float confidence; void /* unknown type, empty encoding */ pixelValueYUVNormalized; float localMotionScore; float GGProb; void /* unknown type, empty encoding */ pixelFeature; unsigned int pixelFeatureLen; void /* unknown type, empty encoding */ KPLSDiffVector; void /* unknown type, empty encoding */ trajectoryFromPast; void /* unknown type, empty encoding */ trajectoryToFuture; } descriptor;
@property void /* unknown type, empty encoding */ LSOrGGBbox;
@property int temporalDetectionVote;
@property int LSTrackingVote;
@property (retain) NSMutableArray *matchedLS;
@property BOOL doneKPToBBoxViaGraphTraversal;
@property BOOL trackFail;
@property (retain) ROI *temporalDetectionMatched;
@property (retain) ROI *LSTrackingMatched;
@property int trackID;
@property (retain) NSString *LSTrackID;
@property BOOL isTracked;
@property BOOL isTrajectoryPruningPassed;
@property BOOL LSIsHighRisk;
@property void /* unknown type, empty encoding */ defaultOpticalCenter;
@property BOOL isPredictedFromPast;
@property int predictedFromPastCnt;
@property int trackedCnt;
@property int lowSaliencyCnt;
@property (retain) NSMutableArray *trackIDsAfterMerge;
@property BOOL isReflectedLS;
@property BOOL lsHasBeenUsedForTrackingGhost;
@property void /* unknown type, empty encoding */ lumaFeatureVector;
@property void /* unknown type, empty encoding */ lumaFeatureVectorReflection;
@property void /* unknown type, empty encoding */ lumaFeatureVectorPredictedLocation;
@property void /* unknown type, empty encoding */ differenceOfGaussianAndLumaFeature;
@property void /* unknown type, empty encoding */ differenceOfGaussianAndLumaFeatureReflection;
@property void /* unknown type, empty encoding */ differenceOfGaussianAndLumaFeaturePredictedLocation;
@property float dist2ghost;
@property float dist2opticalCenter;
@property BOOL kpIsFromHW;
@property void /* unknown type, empty encoding */ mvSum;
@property float mvCnt;
@property void /* unknown type, empty encoding */ mv;

- (void).cxx_destruct;
- (long long)compareSelfAsLSWithAnotherLS:(id)a0;
- (void)generateLocationFromBBox;
- (float)getLocationMatchCostWith:(id)a0;
- (float)getPixelFeatureMatchCostWith:(id)a0;
- (void /* unknown type, empty encoding */)getReflectedBboxAroundCenter:(SEL)a0;
- (void /* unknown type, empty encoding */)getReflectedBboxCenterAroundCenter:(SEL)a0;
- (id)initWithBbox:(SEL)a0;
- (id)initWithBbox:(SEL)a0 descriptor:(struct { float x0; float x1; float x2; float x3; float x4; unsigned int x5; })a1;
- (void)reflectAroundCenter:(SEL)a0;

@end
