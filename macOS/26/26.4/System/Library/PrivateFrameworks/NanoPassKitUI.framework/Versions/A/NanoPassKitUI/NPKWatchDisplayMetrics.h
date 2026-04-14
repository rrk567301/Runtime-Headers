@interface NPKWatchDisplayMetrics : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGSize { double width; double height; } screenSize;
@property (readonly, nonatomic) double screenScale;
@property (readonly, nonatomic) double horizontalTextMargin;
@property (readonly, nonatomic) double platterInset;
@property (readonly, nonatomic) unsigned long long layoutVariant;

+ (id)metricsForWatchLayoutVariant:(unsigned long long)a0;
+ (double)platterLeadingTrailingInsetForWatchLayoutVariant:(unsigned long long)a0;
+ (double)screenScaleForWatchLayoutVariant:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })screenSizeForWatchLayoutVariant:(unsigned long long)a0;
+ (double)textMarginInsetsForWatchLayoutVariant:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithScreenSize:(struct CGSize { double x0; double x1; })a0 screenScale:(double)a1 horizontalTextMargin:(double)a2 platterInset:(double)a3 layoutVariant:(unsigned long long)a4;

@end
