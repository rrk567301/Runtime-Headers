@interface DownloadStateImageTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)init;
- (id)transformedValue:(id)a0;

@end
