@interface KTNSErrorValueTransformer : NSSecureUnarchiveFromDataTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
+ (id)name;
+ (void)registerTransformer;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;
- (id)allowedTopLevelClasses;

@end
