@interface HMDValueTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (Class)valueClass;
+ (id)sharedTransformer;
+ (id)transformedValue:(id)a0 error:(id *)a1;
+ (id)reverseTransformedValue:(id)a0 error:(id *)a1;
+ (id)encodeValue:(id)a0 withTransformerNamed:(id)a1 error:(id *)a2;
+ (id)decodeValue:(id)a0 withTransformerNamed:(id)a1 error:(id *)a2;

- (id)description;
- (id)init;
- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0 error:(id *)a1;
- (id)reverseTransformedValue:(id)a0 error:(id *)a1;

@end
