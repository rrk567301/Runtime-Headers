@interface SGCalendarBannerIconCreator : NSObject

+ (id)dateStringAttributes;
+ (void)drawBackgroundTileInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pathToBackground:(id)a1 date:(id)a2;
+ (id)monthStringAttributes;
+ (id)newCalendarBannerIconForDate:(id)a0;

@end
