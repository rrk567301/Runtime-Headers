@class NSDictionary;

@interface SCNUID_ConstantTransformer : NSValueTransformer

@property (retain, nonatomic) NSDictionary *constantToString;

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (void).cxx_destruct;
- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
