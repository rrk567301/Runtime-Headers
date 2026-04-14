@interface KGMutableElementIdentifierSet : KGElementIdentifierSet

- (id)copy;
- (void)intersectWithIdentifierSet:(id)a0;
- (void *)mutableBitmap;
- (void)removeAllIdentifiers;
- (void)addIdentifier:(unsigned long long)a0;
- (void)removeIdentifier:(unsigned long long)a0;
- (void)unionWithIdentifierSet:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)subtractIdentifierSet:(id)a0;
- (void)formSymmetricDifferenceWithIdentifierSet:(id)a0;

@end
