@class NSNumberFormatter;

@interface AVScanForwardTextFieldValueValueTransformer : NSValueTransformer {
    NSNumberFormatter *_numberFormatter;
}

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (void).cxx_destruct;
- (id)transformedValue:(id)a0;

@end
