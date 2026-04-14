@interface TSWPTextMeasurer : NSObject

+ (id)textMeasurerBundleForParagraphStyle:(id)a0;
+ (double)heightForString:(id)a0 textMeasurerBundle:(id)a1 width:(double)a2 outFitWidth:(inout double *)a3;
+ (double)widthForString:(id)a0 textMeasurerBundle:(id)a1;
+ (BOOL)canQuicklyMeasureString:(id)a0 textMeasurerBundle:(id)a1;
+ (BOOL)canQuicklyMeasureParagraphStyle:(id)a0;

@end
