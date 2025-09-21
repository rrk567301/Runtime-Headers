@interface CNContainerIOSLegacyIdentifierDescription : CNContainerPropertyDescription

- (id)key;
- (Class)valueClass;
- (char)isWritable;
- (id)CNValueForContainer:(id)a0;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
