@class LSBundleRecord;

@interface _UTDeclaredTypeRecord : UTTypeRecord {
    LSBundleRecord *_weakDeclaringBundleRecord;
}

@property (readonly) unsigned int _rawFlags;
@property (readonly) LSBundleRecord *_declaringBundleRecord;

+ (BOOL)supportsSecureCoding;
+ (id)_propertyClasses;

- (BOOL)isDynamic;
- (id)_localizedDescription;
- (BOOL)isDeclared;
- (id)_referenceAccessoryPath;
- (id)_referenceAccessoryPathWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[1]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; } *)a3;
- (id)identifier;
- (void)_LSRecord_resolve_identifier;
- (id)identifierWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[1]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; } *)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_LSRecord_resolve__delegatePath;
- (id)_delegatePath;
- (BOOL)isExported;
- (id)_declaringBundleBookmark;
- (void)_LSRecord_resolve__localizedDescription;
- (id)version;
- (void)_LSRecord_resolve__iconURL;
- (id)parentTypeIdentifiers;
- (id)_iconURLWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[1]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; } *)a3;
- (void)_LSRecord_resolve__referenceAccessoryPath;
- (id)pedigree;
- (id)declaration;
- (void)_detachFromContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (id)_localizedDescriptionWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[1]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; } *)a3;
- (BOOL)isActive;
- (id)declaringBundleRecord;
- (id)_iconURL;
- (id)declarationWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[1]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; } *)a3;
- (void)_LSRecord_resolve__declaringBundleRecord;
- (BOOL)__isDirectlyOneTapOpenable;
- (id)_declaringBundleBookmarkWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[1]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; } *)a3;
- (BOOL)isWildcard;
- (void)_LSRecord_resolve__rawFlags;
- (BOOL)isInPublicDomain;
- (BOOL)_isOneTapOpenable;
- (BOOL)isImported;
- (void)_LSRecord_resolve_version;
- (id)_declaringBundleRecordWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[1]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; } *)a3;
- (void)_enumerateRelatedTypeStructuresWithContext:(struct LSContext { id x0; } *)a0 unitID:(unsigned int)a1 maximumDegreeOfSeparation:(long long)a2 block:(id /* block */)a3;
- (BOOL)isCoreType;
- (BOOL)conformsToTypeIdentifier:(id)a0;
- (void)_LSRecord_resolve_referenceURL;
- (id)parentTypeIdentifiersWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[1]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; } *)a3;
- (id)pedigreeWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[1]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; } *)a3;
- (BOOL)_isVocabularyType;
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext { id x0; } *)a0 unitID:(unsigned int)a1 maximumDegreeOfSeparation:(long long)a2 block:(id /* block */)a3;
- (id)tagSpecificationWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[1]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; } *)a3;
- (id)referenceURLWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[1]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; } *)a3;
- (id)childTypeIdentifiers;
- (void)_LSRecord_resolve_tagSpecification;
- (id)_delegatePathWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[1]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; } *)a3;
- (void)_LSRecord_resolve__declaringBundleBookmark;
- (void)_LSRecord_resolve_childTypeIdentifiers;
- (id)_referenceAccessoryURLNoConformances;
- (id)versionWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[1]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; } *)a3;
- (id)referenceURL;
- (void)_LSRecord_resolve_pedigree;
- (id)childTypeIdentifiersWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[1]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; } *)a3;
- (void)_LSRecord_resolve_declaration;
- (id)tagSpecification;
- (unsigned int)_rawFlagsWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[1]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; } *)a3;
- (void).cxx_destruct;
- (void)_LSRecord_resolve_parentTypeIdentifiers;

@end
