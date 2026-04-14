@class NSString;

@interface _UTDynamicTypeRecord : UTTypeRecord {
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)_propertyClasses;

- (BOOL)isWildcard;
- (BOOL)_isVocabularyType;
- (id)parentTypeIdentifiers;
- (id)declaringBundleRecord;
- (id)referenceURL;
- (id)preferredTagOfClass:(id)a0;
- (id)identifier;
- (id)pedigreeWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[1]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; } *)a3;
- (BOOL)conformsToTypeIdentifier:(id)a0;
- (BOOL)isDynamic;
- (BOOL)isInPublicDomain;
- (void)_LSRecord_resolve_pedigree;
- (id)declaration;
- (BOOL)isExported;
- (id)tagSpecification;
- (id)childTypeIdentifiers;
- (void).cxx_destruct;
- (BOOL)isCoreType;
- (id)_declaringBundleBookmark;
- (id)_localizedDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 dynamicUTI:(id)a1;
- (id)_delegatePath;
- (id)_iconURLWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[1]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; } *)a3;
- (id)_persistentIdentifierWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (BOOL)isChildOfTypeIdentifier:(id)a0;
- (BOOL)isDeclared;
- (BOOL)_isOneTapOpenable;
- (BOOL)isActive;
- (void)encodeWithCoder:(id)a0;
- (id)pedigree;
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext { id x0; } *)a0 unitID:(unsigned int)a1 maximumDegreeOfSeparation:(long long)a2 block:(id /* block */)a3;
- (id)version;
- (BOOL)isImported;

@end
