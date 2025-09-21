@interface VSAMSAppsValueTransformer : VSCompoundValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)platformAttributes:(id)a0 forDevice:(id)a1;
- (BOOL)responseDeviceFamilies:(id)a0 compatibleWithDevice:(id)a1;

@end
