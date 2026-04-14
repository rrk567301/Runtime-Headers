@class NSTextField, NSView, StockChartDisplayMode, StockChartData, StockGraphView, NSLayoutConstraint, NSMutableArray, DashedLineView;

@interface PRSStockChartSliceView : NSView <StockGraphViewContainer>

@property (retain) StockGraphView *stockGraphView;
@property (retain) StockChartDisplayMode *displayMode;
@property (retain) NSMutableArray *axisViews;
@property (retain) NSMutableArray *xLabelViews;
@property (weak) NSView *chartTopKeyline;
@property (weak) NSView *chartBottomKeyline;
@property (weak) NSView *xAxisKeyline;
@property (weak) NSView *chartView;
@property (weak) NSTextField *errorMessageLabel;
@property (weak) NSTextField *highPriceLabel;
@property (weak) NSTextField *lowPriceLabel;
@property (weak) NSTextField *previousClosePriceLabel;
@property (weak) NSLayoutConstraint *previousClosePriceLabelVerticalSpaceConstraint;
@property (retain) DashedLineView *previousCloseLine;
@property (retain, nonatomic) StockChartData *chartData;

+ (struct CGGradient { } *)LineBackgroundGradient;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToSuperview;
- (void)layoutAxesAndXLabels;
- (void)layoutPriceLabels;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineGraphFrame;
- (void)setHourLabels;
- (void)stockGraphViewReadyForDisplay:(id)a0;
- (void)prepareXAxisLabelsAndPositions;
- (void)setDayLabelsWithInterval:(unsigned long long)a0 realTimePositions:(BOOL)a1;
- (void)setMonthAndYearLabels;

@end
