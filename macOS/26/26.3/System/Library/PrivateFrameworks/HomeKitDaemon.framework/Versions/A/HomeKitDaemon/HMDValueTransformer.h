@interface HMDValueTransformer : NSValueTransformer

+ (Class)valueClass;
+ (id)reverseTransformedValue:(id)a0 error:(id *)a1;
+ (Class)transformedValueClass;
+ (id)transformedValue:(id)a0 error:(id *)a1;
+ (id)valueTransformerForName:(id)a0;
+ (id)sharedTransformer;
+ (id)decodeValue:(id)a0 withTransformerNamed:(id)a1 error:(id *)a2;
+ (id)encodeValue:(id)a0 withTransformerNamed:(id)a1 error:(id *)a2;

- (id)reverseTransformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0 error:(id *)a1;
- (id)transformedValue:(id)a0;
- (id)description;
- (id)init;
- (id)transformedValue:(id)a0 error:(id *)a1;
- (BOOL)isKindOfTransformer:(Class)a0;

@end
