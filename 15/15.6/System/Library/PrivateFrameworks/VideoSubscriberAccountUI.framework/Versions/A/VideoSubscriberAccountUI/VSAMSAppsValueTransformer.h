@interface VSAMSAppsValueTransformer : VSCompoundValueTransformer

+ (char)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)a0;
- (id)platformAttributes:(id)a0 forDevice:(id)a1;
- (char)responseDeviceFamilies:(id)a0 compatibleWithDevice:(id)a1;

@end
