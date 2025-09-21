@interface SMConnectionFamilyNameTransformer : NSValueTransformer

@property char useArticles;
@property char detailed;

+ (char)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)a0;

@end
