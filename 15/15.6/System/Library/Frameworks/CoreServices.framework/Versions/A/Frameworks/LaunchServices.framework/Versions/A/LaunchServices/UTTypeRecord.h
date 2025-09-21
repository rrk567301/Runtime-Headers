@class NSData, NSString, NSURL, LSBundleRecord, NSSet, NSOrderedSet, NSDictionary, LSPropertyList, NSNumber, _LSLocalizedStringRecord;

@interface UTTypeRecord : LSRecord

@property (readonly) NSDictionary *iconDictionary;
@property (readonly) NSURL *iconResourceBundleURL;
@property (readonly) _LSLocalizedStringRecord *_localizedDescription;
@property (readonly) NSData *_declaringBundleBookmark;
@property (readonly) NSString *_delegatePath;
@property (readonly) NSURL *_iconURL;
@property (readonly, nonatomic) id compatibilityObject;
@property (readonly) NSString *identifier;
@property (readonly) NSNumber *version;
@property (readonly, getter=isDynamic) char dynamic;
@property (readonly, getter=isDeclared) char declared;
@property (readonly, getter=isWildcard) char wildcard;
@property (readonly, getter=isInPublicDomain) char inPublicDomain;
@property (readonly, getter=isExported) char exported;
@property (readonly, getter=isImported) char imported;
@property (readonly, getter=isActive) char active;
@property (readonly, getter=isCoreType) char coreType;
@property (readonly) LSBundleRecord *declaringBundleRecord;
@property (readonly) LSPropertyList *declaration;
@property (readonly) LSPropertyList *tagSpecification;
@property (readonly) NSURL *referenceURL;
@property (readonly) NSSet *pedigree;
@property (readonly) NSOrderedSet *parentTypeIdentifiers;
@property (readonly) NSSet *childTypeIdentifiers;
@property (readonly) NSString *localizedDescription;
@property (readonly) NSDictionary *localizedDescriptionDictionary;

+ (id)typeRecordForImportedTypeWithIdentifier:(id)a0 conformingToIdentifier:(id)a1;
+ (id)_propertyClasses;
+ (char)_typeIdentifier:(id)a0 conformsToTypeIdentifier:(id)a1;
+ (id)_typeRecordWithContext:(struct LSContext { id x0; } *)a0 forPromiseAtNode:(id)a1 error:(id *)a2;
+ (id)_typeRecordWithContext:(struct LSContext { id x0; } *)a0 forPromiseResourceValues:(id)a1 error:(id *)a2;
+ (id)_typeRecordWithContext:(struct LSContext { id x0; } *)a0 identifier:(id)a1 allowUndeclared:(char)a2;
+ (id)_typeRecordWithIdentifier:(id)a0 allowUndeclared:(char)a1;
+ (id)enumerator;
+ (id)typeRecordForPromiseAtURL:(id)a0 error:(id *)a1;
+ (id)typeRecordWithIdentifier:(id)a0;
+ (id)typeRecordWithPotentiallyUndeclaredIdentifier:(id)a0;
+ (id)typeRecordWithTag:(id)a0 ofClass:(id)a1;
+ (id)typeRecordWithTag:(id)a0 ofClass:(id)a1 conformingToIdentifier:(id)a2;
+ (id)typeRecordWithTag:(id)a0 ofClass:(id)a1 conformingToTypeRecord:(id)a2;
+ (id)typeRecordsWithIdentifiers:(id)a0;
+ (id)typeRecordsWithTag:(id)a0 ofClass:(id)a1;
+ (id)typeRecordsWithTag:(id)a0 ofClass:(id)a1 conformingToIdentifier:(id)a2;
+ (id)typeRecordsWithTag:(id)a0 ofClass:(id)a1 conformingToTypeRecord:(id)a2;

- (id)debugDescription;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)_LSRecord_resolve_iconDictionary;
- (void)_LSRecord_resolve_iconResourceBundleURL;
- (void)_detachFromContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext { id x0; } *)a0 unitID:(unsigned int)a1 maximumDegreeOfSeparation:(long long)a2 block:(id /* block */)a3;
- (void)_enumerateRelatedTypesWithMaximumDegreeOfSeparation:(long long)a0 block:(id /* block */)a1;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 persistentIdentifierData:(const struct LSPersistentIdentifierData { unsigned char x0; unsigned char x1[3]; unsigned int x2; unsigned int x3; unsigned char x4[16]; char x5[0]; } *)a1 length:(unsigned long long)a2;
- (char)conformsToTypeIdentifier:(id)a0;
- (char)conformsToTypeRecord:(id)a0;
- (void)enumerateChildTypesWithBlock:(id /* block */)a0;
- (void)enumerateDescendantsWithBlock:(id /* block */)a0;
- (void)enumerateParentTypesWithBlock:(id /* block */)a0;
- (void)enumeratePedigreeWithBlock:(id /* block */)a0;
- (id)iconDictionaryWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[1]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a3;
- (id)iconResourceBundleURLWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[1]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a3;
- (char)isChildOfTypeIdentifier:(id)a0;
- (id)localizedDescriptionWithPreferredLocalizations:(id)a0;
- (id)preferredTagOfClass:(id)a0;

@end
