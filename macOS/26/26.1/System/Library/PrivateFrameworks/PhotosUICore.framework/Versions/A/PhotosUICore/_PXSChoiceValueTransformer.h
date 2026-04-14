@class NSArray;

@interface _PXSChoiceValueTransformer : NSValueTransformer {
    NSArray *_possibleValues;
}

- (id)reverseTransformedValue:(id)a0;
- (void).cxx_destruct;
- (id)transformedValue:(id)a0;
- (id)initWithPossibleValues:(id)a0;

@end
