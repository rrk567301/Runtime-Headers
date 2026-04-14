@interface CNContainerIdentifierDescription : CNContainerPropertyDescription

- (id)key;
- (BOOL)isNonnull;
- (Class)valueClass;
- (id)CNValueForContainer:(id)a0;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
