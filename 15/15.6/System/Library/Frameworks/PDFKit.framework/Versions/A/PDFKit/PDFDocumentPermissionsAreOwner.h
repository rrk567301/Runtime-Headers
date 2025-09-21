@interface PDFDocumentPermissionsAreOwner : NSValueTransformer

+ (char)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)a0;

@end
