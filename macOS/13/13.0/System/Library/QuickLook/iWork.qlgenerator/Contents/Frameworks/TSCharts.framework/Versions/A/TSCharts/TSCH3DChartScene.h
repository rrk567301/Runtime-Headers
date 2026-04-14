@class TSCH3DChartSceneInfo;

@interface TSCH3DChartScene : NSObject {
    TSCH3DChartSceneInfo *_sceneInfo;
}

+ (BOOL)supportsValueAxisLabelAlignmentCaching;
+ (void)addObjectsToSceneWithSceneInfo:(id)a0;

- (void).cxx_destruct;
- (id)scene;
- (id)chartType;
- (id)chartInfo;
- (id)seriesType;
- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })layoutSettings;
- (id)styleProvidingSource;
- (id)initWithSceneInfo:(id)a0;
- (void)adjustSceneSettings;
- (void)addChartTitlesToScene;
- (void)addLabelsToScene;
- (void)addAllLabelsToScene;
- (void)addObjectsToScene;
- (void)addSeriesObjectsToScene;
- (void)addAllObjectsToScene;

@end
