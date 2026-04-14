@class NSColor, NSString;

@interface StockChartDisplayMode : NSObject <NSCopying> {
    NSString *_hash;
}

@property (nonatomic) struct CGSize { double width; double height; } chartSize;
@property (nonatomic) BOOL showsVolume;
@property (nonatomic) long long maxInterval;
@property (nonatomic) BOOL HUDEnabled;
@property (nonatomic) double showsTitle;
@property (nonatomic) unsigned long long yAxisLabelCount;
@property (nonatomic) unsigned long long horizontalGridlineCount;
@property (nonatomic) BOOL showsPriceLabelForPreviousClose;
@property (nonatomic) BOOL usesDetailedAxisLabels;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } lineGraphInsets;
@property (nonatomic) BOOL graphOverlapsYAxisLabels;
@property (nonatomic) double volumeHeight;
@property (nonatomic) double intervalRowHeight;
@property (readonly, nonatomic) double gutterHeight;
@property (readonly, nonatomic) double lineGraphBottomPadding;
@property (nonatomic) double lineWidth;
@property (retain, nonatomic) NSColor *lineColor;
@property (retain, nonatomic) NSColor *backgroundLinesColor;
@property (retain, nonatomic) NSColor *xAxisKeylineColor;
@property (retain, nonatomic) NSColor *axisLabelsColor;
@property (nonatomic) struct CGGradient { } *backgroundGradient;

+ (id)defaultDisplayMode;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
