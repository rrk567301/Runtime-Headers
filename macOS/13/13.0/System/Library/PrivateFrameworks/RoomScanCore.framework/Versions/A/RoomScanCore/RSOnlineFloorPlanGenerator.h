@class RSParentAssociation, RSKeyframeAccumulation, RSRecessedAreaReconstructor, RSDoorWindowOnlineDetector, RSNonUniformHeightEstimation, RSOpeningHeightAlignment, RSWallOpeningOnlineOptimizer, RSProjection2DZ, RSMarkerCoaching, RSWallOpeningOnlineDetector, RSMarkerSignal, RSMirrorDetection, RSFloorPlan, NSMutableArray, RSGeometryCalculation, RSOnlineCurvedWallFusion, RSScanUIFormatter;

@interface RSOnlineFloorPlanGenerator : RSFloorPlanGeneratorBase {
    RSWallOpeningOnlineOptimizer *_onlineWallOpeningConsistency;
    RSDoorWindowOnlineDetector *_onlineDoorWindow;
    RSMirrorDetection *_mirrorDetector;
    RSWallOpeningOnlineDetector *_wallOpeningDetector;
    RSKeyframeAccumulation *_accumulator;
    RSGeometryCalculation *_geometryEstimator;
    RSScanUIFormatter *_scanUiFormatter;
    RSOnlineCurvedWallFusion *_onlineCurvedWallFusion;
    RSProjection2DZ *_projector;
    RSNonUniformHeightEstimation *_heightEstimator;
    RSOpeningHeightAlignment *_openingHeightAlignment;
    RSRecessedAreaReconstructor *_recessedAreaReconstructor;
    RSParentAssociation *_parentAssociation;
    BOOL _isMarkerCoachingEnabled;
    RSMarkerCoaching *_markerCoaching;
    RSMarkerSignal *_markerSignal;
    BOOL _isCurvedWallEnabled;
    BOOL _isNonUniformHeightEnabled;
    BOOL _isOpeningReplaceOpendoorEnabled;
    BOOL _isOpendoorReplaceOpeningEnabled;
    BOOL _isDoorReplaceOpeningEnabled;
    BOOL _isBayWindowRecessedAreaEnable;
    RSFloorPlan *_floorPlanForOffline;
    NSMutableArray *_floorPlanDebug;
    BOOL _enableLiveDump;
}

- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (id)geometryMeta;
- (void)setNonUniformHeightEnable:(BOOL)a0;
- (void)setMarkerCoachingEnable:(BOOL)a0;
- (void)setCurvedWallEnable:(BOOL)a0;
- (void)setOpeningReplaceOpendoorEnable:(BOOL)a0;
- (void)setOpendoorReplaceOpeningEnable:(BOOL)a0;
- (void)setDoorReplaceOpeningEnable:(BOOL)a0;
- (void)setBayWindowRecessedAreaEnable:(BOOL)a0;
- (void)computeMirrorPoints:(id)a0;
- (id)beautifyObjects:(id)a0 withFloorPlan:(id)a1;
- (id)generateFloorPlanWithKeyframes:(id)a0 objects:(id)a1;
- (id)generateFloorPlanWithKeyframes:(id)a0 objects:(id)a1 error:(id *)a2;
- (id)exportAsset;
- (id)markerSignal;
- (void /* unknown type, empty encoding */)floorCeilingCount;
- (void)setDoorWindowBeautificationEnable:(BOOL)a0;
- (void)resetScanUIFormatter;
- (id)aggregatePointCloud;
- (void)setLiveDumpEnable:(BOOL)a0;
- (id)getDebugInfo;
- (const void *)lmapOfWall;

@end
