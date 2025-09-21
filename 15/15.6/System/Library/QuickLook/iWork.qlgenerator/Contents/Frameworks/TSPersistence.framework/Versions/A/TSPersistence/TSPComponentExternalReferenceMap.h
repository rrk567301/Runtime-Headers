@interface TSPComponentExternalReferenceMap : NSObject <NSCopying> {
    void *_map;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)saveToMessage:(void *)a0;
- (void)addExternalReferenceToObjectIdentifier:(long long)a0 componentIdentifier:(long long)a1 isWeak:(char)a2 componentIsVersioned:(char)a3;
- (void)appendReferencesFromMessage:(const void *)a0 componentIsVersioned:(char)a1;
- (void)enumerateExternalReferences:(id /* block */)a0;
- (struct ComponentExternalReferenceInfo { long long x0; char x1; char x2; })externalReferenceInfoForObjectIdentifier:(long long)a0;
- (id)initFromMessage:(const void *)a0;
- (id)initWithComponentExternalReferenceMap:(id)a0;
- (id)initWithMapSize:(unsigned long long)a0;

@end
