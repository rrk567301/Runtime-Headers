@interface VisionCoreLabelsFileParser : NSObject

+ (char)isValidLabel:(id)a0;
+ (char)parseLabels:(id *)a0 fromContentsOfURL:(id)a1 invalidLabelPlaceholderObject:(id)a2 validLabelIndexes:(id *)a3 error:(id *)a4;

@end
