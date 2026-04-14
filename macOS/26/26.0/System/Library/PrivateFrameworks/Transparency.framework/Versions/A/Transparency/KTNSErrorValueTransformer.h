@interface KTNSErrorValueTransformer : NSSecureUnarchiveFromDataTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
+ (id)name;
+ (void)registerTransformer;

- (id)transformedValue:(id)a0;
- (id)allowedTopLevelClasses;
- (id)reverseTransformedValue:(id)a0;

@end
