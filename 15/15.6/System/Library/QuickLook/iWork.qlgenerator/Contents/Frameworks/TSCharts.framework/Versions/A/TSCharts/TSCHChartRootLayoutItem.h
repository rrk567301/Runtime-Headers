@class TSCHChartModel, NSDictionary, TSCHChartInfo, TSCHLegendAreaLayoutItem, TSCHChartAbstractAreaLayoutItem;
@protocol TSWPStyleProviding;

@interface TSCHChartRootLayoutItem : TSCHChartLayoutItem {
    TSCHChartInfo *_chartInfo;
    id<TSWPStyleProviding> _styleProvidingSource;
    TSCHChartAbstractAreaLayoutItem *_chartArea;
    TSCHLegendAreaLayoutItem *_legend;
    struct { char forceOmitLegend; char forceOmitTitle; char forceOmitAxisTitle; char forceOmitLabelPlacement; char forceTitleAtTop; char forceLegendAtBottom; char enable3DTightBounds; char enable3DScaledDepthBounds; long long maxDepthRatioType; unsigned long long max3DLimitingSeries; } _layoutSettings;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _legendInnerFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _chartInnerFrame;
    char _inResize;
    struct CGSize { double width; double height; } _startingSize;
    TSCHChartModel *_chartModel;
}

@property (readonly, nonatomic) TSCHChartAbstractAreaLayoutItem *chartAreaLayoutItem;
@property (readonly, nonatomic) TSCHLegendAreaLayoutItem *legendAreaLayoutItem;
@property (copy, nonatomic) NSDictionary *seriesIndexedPieWedgeExplosions;
@property (readonly, copy, nonatomic) NSDictionary *seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
@property (nonatomic) unsigned long long dataSetIndex;

- (void).cxx_destruct;
- (id)root;
- (id)model;
- (void)clearAll;
- (id)chartInfo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcDrawingRect;
- (void)beginResizeWithStartingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })bottomLegendOffsetForChartAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 legendFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)buildSubTree;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcOverhangRect;
- (void)endResizeOperation;
- (id)initWithChartInfo:(id)a0 styleProvidingSource:(id)a1;
- (void)invalidateSeriesIndexedPieWedgeExplosions;
- (void)invalidateTransientModel;
- (char)isInResize;
- (void)layoutInward;
- (void)layoutOutward;
- (struct { char x0; char x1; char x2; char x3; char x4; char x5; char x6; char x7; long long x8; unsigned long long x9; })layoutSettings;
- (void)p_updatePieWedgeExplosionsFromModel;
- (void)positionLegendAtBottom;
- (id)renderersWithRep:(id)a0;
- (void)setChartBodySize:(struct CGSize { double x0; double x1; })a0;
- (void)setChartInnerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 legendInnerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setLayoutSettings:(struct { char x0; char x1; char x2; char x3; char x4; char x5; char x6; char x7; long long x8; unsigned long long x9; })a0;
- (void)setLegendSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })startingSize;
- (id)styleProvidingSource;
- (void)updateLayoutOffset;
- (void)updateLayoutSize;
- (void)updateSizeDuringResizeTo:(struct CGSize { double x0; double x1; })a0;

@end
