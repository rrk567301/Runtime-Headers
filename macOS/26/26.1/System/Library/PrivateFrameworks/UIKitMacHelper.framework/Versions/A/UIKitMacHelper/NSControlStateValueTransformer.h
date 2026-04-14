@class NSString;

@interface NSControlStateValueTransformer : NSValueTransformer

@property (retain) NSString *trueValue;
@property (retain) NSString *falseValue;

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (BOOL)_allowCustomTrueFalseValues;

- (id)reverseTransformedValue:(id)a0;
- (void).cxx_destruct;
- (id)transformedValue:(id)a0;

@end
