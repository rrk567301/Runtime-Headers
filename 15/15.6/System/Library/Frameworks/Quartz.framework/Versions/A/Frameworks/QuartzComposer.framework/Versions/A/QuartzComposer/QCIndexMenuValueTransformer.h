@class NSArray;

@interface QCIndexMenuValueTransformer : NSValueTransformer {
    NSArray *_items;
}

+ (char)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (id)transformerWithItems:(id)a0;

- (void)dealloc;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;
- (id)initWithItems:(id)a0;

@end
