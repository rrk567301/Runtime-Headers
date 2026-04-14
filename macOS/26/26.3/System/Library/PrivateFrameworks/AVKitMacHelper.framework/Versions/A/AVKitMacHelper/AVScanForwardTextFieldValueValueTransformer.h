@class NSNumberFormatter;

@interface AVScanForwardTextFieldValueValueTransformer : NSValueTransformer {
    NSNumberFormatter *_numberFormatter;
}

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (void).cxx_destruct;

@end
