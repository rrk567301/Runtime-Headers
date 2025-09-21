@class NSString;

@interface NSControlStateValueTransformer : NSValueTransformer

@property (retain) NSString *trueValue;
@property (retain) NSString *falseValue;

+ (char)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (char)_allowCustomTrueFalseValues;

- (void).cxx_destruct;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
