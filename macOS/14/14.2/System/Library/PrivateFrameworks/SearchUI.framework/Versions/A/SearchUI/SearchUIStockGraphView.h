@class SearchUIStockChartDisplayMode, NSArray, SearchUIStockChartData, SearchUIGraphRenderer, NSMutableArray;

@interface SearchUIStockGraphView : NSView {
    SearchUIStockChartData *_chartData;
    int _valueIndex;
    int _valueCount;
    struct CGPoint { double x0; double x1; } *_points;
    struct CGPoint { double x0; double x1; } *_values;
    NSMutableArray *_linePointCounts;
    NSArray *_dottedLinePositions;
    NSArray *_dottedLinePositionsForStyleOnly;
    unsigned int _dataSize;
    unsigned int _dataCount;
    struct { double x0; unsigned long long x1; } *_volumeBars;
    unsigned int _volumeSize;
    unsigned int _volumeCount;
    double _volumeBarWidth;
    unsigned long long _maxVolume;
    SearchUIGraphRenderer *_renderer;
    BOOL _isRendered;
}

@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } graphInsets;
@property (retain, nonatomic) SearchUIStockChartDisplayMode *displayMode;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clearPaths;
- (void)clearData;
- (void)_finishCurrentLine;
- (unsigned long long)_normalizedAccumulatedVolumeInDataRange:(struct CGPoint { double x0; double x1; })a0;
- (float)_priceAtTime:(double)a0 dataPosition:(double *)a1;
- (void)_processGraphDataForWidth:(double)a0;
- (double)_timeAtPosition:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_trueGraphPointsRegion;
- (void)loadStockChartData:(id)a0;
- (struct { double x0; double x1; unsigned long long x2; })plottedPointNearestToPoint:(struct CGPoint { double x0; double x1; } *)a0;
- (void)recomputePathsAndRenderIfNeededForSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })rightmostPlottedPoint;
- (void)setDottedLinePositionsWithLabelInfo:(id)a0;
- (void)setEvenlySpacedDottedLinePositionsWithCount:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })volumeBarRectNearestToPoint:(struct CGPoint { double x0; double x1; })a0;

@end
