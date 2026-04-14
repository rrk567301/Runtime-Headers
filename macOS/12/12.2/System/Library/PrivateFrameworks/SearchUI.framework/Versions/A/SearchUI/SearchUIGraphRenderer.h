@class NSArray, SearchUIStockChartDisplayMode;

@interface SearchUIGraphRenderer : NSView

@property (nonatomic) struct CGSize { double width; double height; } graphSize;
@property (nonatomic) struct CGSize { double width; double height; } volumeGraphSize;
@property (nonatomic) struct CGPoint { double x0; double x1; } *points;
@property (retain, nonatomic) NSArray *linePointCounts;
@property (retain, nonatomic) NSArray *dottedLinePositions;
@property (retain, nonatomic) NSArray *dottedLinePositionsForStyleOnly;
@property (nonatomic) struct { double x0; unsigned long long x1; } *volumeBars;
@property (nonatomic) double volumeBarWidth;
@property (nonatomic) unsigned long long maxVolume;
@property (nonatomic) unsigned int volumeCount;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } graphInsets;
@property (nonatomic) BOOL roundLineCaps;
@property (retain, nonatomic) SearchUIStockChartDisplayMode *displayMode;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)renderLineGraphInContext:(struct CGContext { } *)a0;
- (void)renderVolumeGraphInContext:(struct CGContext { } *)a0;
- (struct CGSize { double x0; double x1; })lineGraphSize;
- (void)renderGraphLineInContext:(struct CGContext { } *)a0 withColor:(id)a1 offset:(struct CGPoint { double x0; double x1; })a2;

@end
