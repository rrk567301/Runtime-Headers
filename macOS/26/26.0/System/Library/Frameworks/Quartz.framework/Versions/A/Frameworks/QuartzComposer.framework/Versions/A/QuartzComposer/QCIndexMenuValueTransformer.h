@class NSArray;

@interface QCIndexMenuValueTransformer : NSValueTransformer {
    NSArray *_items;
}

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
+ (id)transformerWithItems:(id)a0;

- (id)initWithItems:(id)a0;
- (void)dealloc;
- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
