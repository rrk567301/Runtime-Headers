@interface KGMutableElementIdentifierSet : KGElementIdentifierSet

- (void)unionWithIdentifierSet:(id)a0;
- (void)removeAllIdentifiers;
- (void)intersectWithIdentifierSet:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)subtractIdentifierSet:(id)a0;
- (void)removeIdentifier:(unsigned long long)a0;
- (id)copy;
- (void *)mutableBitmap;
- (void)addIdentifier:(unsigned long long)a0;
- (void)formSymmetricDifferenceWithIdentifierSet:(id)a0;

@end
