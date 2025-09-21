@interface ADLayoutUtils : NSObject

+ (unsigned long long)layoutForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)layoutAsString:(unsigned long long)a0;
+ (char)isLandscape:(unsigned long long)a0;
+ (char)isLandscapeSize:(struct CGSize { double x0; double x1; })a0;
+ (unsigned long long)transposeLayout:(unsigned long long)a0;
+ (char)aspectRatio:(float)a0 matchesAspectRatio:(float)a1;
+ (float)aspectRatioForKnownLayout:(unsigned long long)a0;

@end
