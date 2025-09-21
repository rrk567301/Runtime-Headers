@class TSCH3DChartSceneInfo;

@interface TSCH3DChartScene : NSObject {
    TSCH3DChartSceneInfo *_sceneInfo;
}

+ (void)addObjectsToSceneWithSceneInfo:(id)a0;
+ (char)supportsValueAxisLabelAlignmentCaching;

- (void).cxx_destruct;
- (id)scene;
- (id)chartType;
- (id)chartInfo;
- (void)addAllLabelsToScene;
- (void)addAllObjectsToScene;
- (void)addChartTitlesToScene;
- (void)addLabelsToScene;
- (void)addObjectsToScene;
- (void)addSeriesObjectsToScene;
- (void)adjustSceneSettings;
- (id)initWithSceneInfo:(id)a0;
- (struct { char x0; char x1; char x2; char x3; char x4; char x5; char x6; char x7; long long x8; unsigned long long x9; })layoutSettings;
- (id)seriesType;
- (id)styleProvidingSource;

@end
