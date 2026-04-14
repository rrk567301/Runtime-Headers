@class NSString;

@interface NSControlStateValueTransformer : NSValueTransformer

@property (retain) NSString *trueValue;
@property (retain) NSString *falseValue;

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
+ (BOOL)_allowCustomTrueFalseValues;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (void).cxx_destruct;

@end
