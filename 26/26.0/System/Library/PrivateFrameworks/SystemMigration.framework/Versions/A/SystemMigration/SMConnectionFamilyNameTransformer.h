@interface SMConnectionFamilyNameTransformer : NSValueTransformer

@property BOOL useArticles;
@property BOOL detailed;

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;

@end
