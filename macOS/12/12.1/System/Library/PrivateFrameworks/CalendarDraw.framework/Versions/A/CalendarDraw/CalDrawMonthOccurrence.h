@class NSString;

@interface CalDrawMonthOccurrence : CalDrawOccurrence

@property BOOL flatLeft;
@property BOOL flatRight;
@property BOOL drawDot;
@property (retain) NSString *eventEndTime;
@property double firstDayWidth;
@property struct CGSize { double width; double height; } textSize;

+ (void)pushRoundedRectPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 flatLeft:(BOOL)a2 flatRight:(BOOL)a3 radius:(double)a4;
+ (void)pushRoundedRectPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 flatLeft:(BOOL)a2 flatRight:(BOOL)a3;
+ (id)backgroundImageForColor:(id)a0 selected:(BOOL)a1 needsReply:(BOOL)a2 isStatusMaybe:(BOOL)a3 isAllDay:(BOOL)a4 flatLeft:(BOOL)a5 flatRight:(BOOL)a6 view:(id)a7;

- (id)init;
- (void).cxx_destruct;
- (id)initWithWritingDirection:(long long)a0;

@end
