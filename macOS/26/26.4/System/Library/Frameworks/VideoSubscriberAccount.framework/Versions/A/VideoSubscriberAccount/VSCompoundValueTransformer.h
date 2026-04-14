@class NSArray;

@interface VSCompoundValueTransformer : NSValueTransformer

@property (copy, nonatomic) NSArray *valueTransformers;

- (void).cxx_destruct;
- (id)init;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
