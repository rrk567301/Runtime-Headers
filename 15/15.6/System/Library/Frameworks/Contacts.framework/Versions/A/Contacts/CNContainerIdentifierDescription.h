@interface CNContainerIdentifierDescription : CNContainerPropertyDescription

- (id)key;
- (Class)valueClass;
- (id)CNValueForContainer:(id)a0;
- (char)isNonnull;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
