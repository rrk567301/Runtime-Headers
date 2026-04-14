@class NSString;

@interface _UTDynamicTypeRecord : UTTypeRecord {
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)_propertyClasses;

- (BOOL)isDynamic;
- (id)childTypeIdentifiers;
- (BOOL)isActive;
- (id)version;
- (BOOL)isImported;
- (id)_delegatePath;
- (id)_localizedDescription;
- (id)tagSpecification;
- (id)pedigreeWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[1]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; } *)a3;
- (BOOL)isExported;
- (id)referenceURL;
- (BOOL)isWildcard;
- (id)parentTypeIdentifiers;
- (id)identifier;
- (BOOL)_isVocabularyType;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isDeclared;
- (id)declaration;
- (id)declaringBundleRecord;
- (BOOL)_isOneTapOpenable;
- (id)pedigree;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isInPublicDomain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)preferredTagOfClass:(id)a0;
- (id)_declaringBundleBookmark;
- (BOOL)conformsToTypeIdentifier:(id)a0;
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext { id x0; } *)a0 unitID:(unsigned int)a1 maximumDegreeOfSeparation:(long long)a2 block:(id /* block */)a3;
- (void)_LSRecord_resolve_pedigree;
- (BOOL)isChildOfTypeIdentifier:(id)a0;
- (id)_iconURLWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[1]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; } *)a3;
- (id)_persistentIdentifierWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 dynamicUTI:(id)a1;
- (BOOL)isCoreType;

@end
