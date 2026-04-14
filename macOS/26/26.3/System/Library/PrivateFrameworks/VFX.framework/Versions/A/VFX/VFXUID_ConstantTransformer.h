@class NSDictionary;

@interface VFXUID_ConstantTransformer : NSValueTransformer

@property (retain, nonatomic) NSDictionary *constantToString;

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;
- (void).cxx_destruct;

@end
