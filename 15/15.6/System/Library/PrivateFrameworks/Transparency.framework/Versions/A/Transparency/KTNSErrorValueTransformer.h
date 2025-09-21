@interface KTNSErrorValueTransformer : NSSecureUnarchiveFromDataTransformer

+ (id)name;
+ (char)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (void)registerTransformer;

- (id)allowedTopLevelClasses;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
