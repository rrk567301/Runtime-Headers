@class NSValueTransformer;

@interface VSFailableValueTransformer : NSValueTransformer

@property (retain, nonatomic) NSValueTransformer *objectValueTransformer;

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)a0;
- (void).cxx_destruct;

@end
