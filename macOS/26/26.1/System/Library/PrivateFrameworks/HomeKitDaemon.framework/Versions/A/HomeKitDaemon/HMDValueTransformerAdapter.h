@class NSValueTransformer;

@interface HMDValueTransformerAdapter : HMDValueTransformer {
    NSValueTransformer *_transformer;
}

+ (Class)valueClass;
+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)reverseTransformedValue:(id)a0 error:(id *)a1;
- (id)transformedValue:(id)a0 error:(id *)a1;
- (id)reverseTransformedValue:(id)a0;
- (id)initWithTransformer:(id)a0;
- (void).cxx_destruct;
- (id)transformedValue:(id)a0;
- (BOOL)isKindOfTransformer:(Class)a0;

@end
