@interface HMDValueTransformer : NSValueTransformer

+ (id)transformedValue:(id)a0 error:(id *)a1;
+ (Class)transformedValueClass;
+ (id)reverseTransformedValue:(id)a0 error:(id *)a1;
+ (Class)valueClass;
+ (id)valueTransformerForName:(id)a0;
+ (id)sharedTransformer;
+ (id)decodeValue:(id)a0 withTransformerNamed:(id)a1 error:(id *)a2;
+ (id)encodeValue:(id)a0 withTransformerNamed:(id)a1 error:(id *)a2;

- (id)transformedValue:(id)a0 error:(id *)a1;
- (id)reverseTransformedValue:(id)a0 error:(id *)a1;
- (id)transformedValue:(id)a0;
- (id)init;
- (id)description;
- (id)reverseTransformedValue:(id)a0;
- (BOOL)isKindOfTransformer:(Class)a0;

@end
