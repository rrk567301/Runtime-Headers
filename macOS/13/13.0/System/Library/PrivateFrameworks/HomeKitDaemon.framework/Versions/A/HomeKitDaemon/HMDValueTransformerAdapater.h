@class NSValueTransformer;

@interface HMDValueTransformerAdapater : HMDValueTransformer {
    NSValueTransformer *_transformer;
}

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
+ (Class)valueClass;

- (void).cxx_destruct;
- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0 error:(id *)a1;
- (id)reverseTransformedValue:(id)a0 error:(id *)a1;
- (BOOL)isKindOfTransformer:(Class)a0;
- (id)initWithTransformer:(id)a0;

@end
