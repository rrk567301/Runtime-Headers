@class NSValueTransformer;

@interface HMDValueTransformerAdapter : HMDValueTransformer {
    NSValueTransformer *_transformer;
}

+ (Class)valueClass;
+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)a0 error:(id *)a1;
- (id)reverseTransformedValue:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithTransformer:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;
- (BOOL)isKindOfTransformer:(Class)a0;

@end
