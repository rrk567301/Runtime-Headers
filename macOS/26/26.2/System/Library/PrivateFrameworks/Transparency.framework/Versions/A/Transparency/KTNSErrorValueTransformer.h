@interface KTNSErrorValueTransformer : NSSecureUnarchiveFromDataTransformer

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (id)name;
+ (void)registerTransformer;

- (id)allowedTopLevelClasses;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
