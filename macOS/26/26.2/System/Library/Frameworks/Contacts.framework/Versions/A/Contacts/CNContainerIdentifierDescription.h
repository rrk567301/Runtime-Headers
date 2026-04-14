@interface CNContainerIdentifierDescription : CNContainerPropertyDescription

- (id)key;
- (Class)valueClass;
- (BOOL)isNonnull;
- (id)CNValueForContainer:(id)a0;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
