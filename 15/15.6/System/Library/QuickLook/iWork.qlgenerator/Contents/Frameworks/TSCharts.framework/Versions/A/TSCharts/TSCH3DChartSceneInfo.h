@class TSCHChartSeriesType, TSCHChartInfo, TSCHChartType, TSCH3DScene;
@protocol TSWPStyleProviding;

@interface TSCH3DChartSceneInfo : NSObject <NSCopying>

@property (readonly, nonatomic) TSCH3DScene *scene;
@property (readonly, nonatomic) TSCHChartInfo *chartInfo;
@property (readonly, nonatomic) TSCHChartType *chartType;
@property (readonly, nonatomic) TSCHChartSeriesType *seriesType;
@property (readonly, nonatomic) struct { char forceOmitLegend; char forceOmitTitle; char forceOmitAxisTitle; char forceOmitLabelPlacement; char forceTitleAtTop; char forceLegendAtBottom; char enable3DTightBounds; char enable3DScaledDepthBounds; long long maxDepthRatioType; unsigned long long max3DLimitingSeries; } layoutSettings;
@property (readonly, weak, nonatomic) id<TSWPStyleProviding> styleProvidingSource;

+ (id)infoWithScene:(id)a0 chartInfo:(id)a1 chartType:(id)a2 seriesType:(id)a3 layoutSettings:(struct { char x0; char x1; char x2; char x3; char x4; char x5; char x6; char x7; long long x8; unsigned long long x9; })a4 styleProvidingSource:(id)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithScene:(id)a0 chartInfo:(id)a1 chartType:(id)a2 seriesType:(id)a3 layoutSettings:(struct { char x0; char x1; char x2; char x3; char x4; char x5; char x6; char x7; long long x8; unsigned long long x9; })a4 styleProvidingSource:(id)a5;

@end
