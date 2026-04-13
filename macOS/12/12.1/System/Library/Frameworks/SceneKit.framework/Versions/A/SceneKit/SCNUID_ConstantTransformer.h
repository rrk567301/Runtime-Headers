@class NSDictionary;

@interface SCNUID_ConstantTransformer : NSValueTransformer

@property (retain, nonatomic) NSDictionary *constantToString;

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
