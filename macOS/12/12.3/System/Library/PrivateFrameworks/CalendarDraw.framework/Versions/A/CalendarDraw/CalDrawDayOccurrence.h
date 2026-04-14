@class NSIndexSet, NSArray;

@interface CalDrawDayOccurrence : CalDrawOccurrence

@property double hourHeight;
@property (retain) NSIndexSet *eventTimeMetrics;
@property (retain) NSIndexSet *titleMetrics;
@property (retain) NSIndexSet *locationMetrics;
@property struct CGPoint { double x; double y; } eventTimeEndPoint;
@property struct CGPoint { double x; double y; } titleEndPoint;
@property double textEndY;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } eventTimeRect;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titleRect;
@property double titleLeftInset;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } locationRect;
@property BOOL drawBackgroundOnly;
@property (copy) NSArray *icons;
@property BOOL capLeftSide;
@property BOOL capRightSide;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasIcon;
- (struct CGColor { } *)createCurrentTextColor;
- (id)initWithWritingDirection:(long long)a0;
- (void)invalidateMetrics;
- (id)eventTimeMetricsInTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withFont:(struct __CTFont { } *)a1;
- (id)titleMetricsInTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withFont:(struct __CTFont { } *)a1;
- (id)locationMetricsInTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withFont:(struct __CTFont { } *)a1;
- (double)iconWidth;
- (void)drawRect;
- (double)borderSize;

@end
