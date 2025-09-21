@class NSArray;

@interface _PXSChoiceValueTransformer : NSValueTransformer {
    NSArray *_possibleValues;
}

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithPossibleValues:(id)a0;

@end
