@class NSValueTransformer;

@interface HMDValueTransformerAdapter : HMDValueTransformer {
    NSValueTransformer *_transformer;
}

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
+ (Class)valueClass;

- (id)transformedValue:(id)a0 error:(id *)a1;
- (id)reverseTransformedValue:(id)a0 error:(id *)a1;
- (id)transformedValue:(id)a0;
- (id)initWithTransformer:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (void).cxx_destruct;
- (BOOL)isKindOfTransformer:(Class)a0;

@end
