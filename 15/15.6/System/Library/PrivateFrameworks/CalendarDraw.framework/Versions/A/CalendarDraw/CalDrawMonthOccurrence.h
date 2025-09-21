@class NSString;

@interface CalDrawMonthOccurrence : CalDrawOccurrence

@property char flatLeft;
@property char flatRight;
@property char drawDot;
@property (retain) NSString *eventEndTime;
@property double firstDayWidth;
@property struct CGSize { double width; double height; } textSize;

+ (id)backgroundImageForColor:(id)a0 selected:(char)a1 needsReply:(char)a2 declinedORCancelled:(char)a3 isStatusMaybe:(char)a4 isAllDay:(char)a5 flatLeft:(char)a6 flatRight:(char)a7 view:(id)a8;
+ (void)pushRoundedRectPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 flatLeft:(char)a2 flatRight:(char)a3;
+ (void)pushRoundedRectPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 flatLeft:(char)a2 flatRight:(char)a3 radius:(double)a4;

- (id)init;
- (void).cxx_destruct;
- (id)initWithWritingDirection:(long long)a0;

@end
