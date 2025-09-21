@class NSValueTransformer;

@interface HMDValueTransformerAdapter : HMDValueTransformer {
    NSValueTransformer *_transformer;
}

+ (char)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (Class)valueClass;

- (void).cxx_destruct;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;
- (id)initWithTransformer:(id)a0;
- (char)isKindOfTransformer:(Class)a0;
- (id)reverseTransformedValue:(id)a0 error:(id *)a1;
- (id)transformedValue:(id)a0 error:(id *)a1;

@end
