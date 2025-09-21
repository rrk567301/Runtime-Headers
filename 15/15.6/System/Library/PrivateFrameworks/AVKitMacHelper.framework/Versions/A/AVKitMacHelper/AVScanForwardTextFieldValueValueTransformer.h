@class NSNumberFormatter;

@interface AVScanForwardTextFieldValueValueTransformer : NSValueTransformer {
    NSNumberFormatter *_numberFormatter;
}

+ (char)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id)transformedValue:(id)a0;

@end
