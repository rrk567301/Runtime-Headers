@interface _UTTaggedType : UTType

+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (id)localizedDescription;
- (Class)classForCoder;
- (id)identifier;
- (id)version;
- (id)_typeRecord;
- (BOOL)isDynamic;
- (BOOL)isDeclared;
- (id)referenceURL;
- (id)tags;
- (BOOL)conformsToType:(id)a0;
- (unsigned long long)_getEnclosureColors:(struct UTHardwareColor { unsigned char x0; unsigned char x1[3]; union { struct { unsigned char x0; unsigned char x1; unsigned char x2; } x0; int x1; } x2; } *)a0 count:(unsigned long long)a1;
- (BOOL)isPublicType;
- (id)_localizedDescriptionWithPreferredLocalizations:(id)a0;
- (id)_localizedDescriptionDictionary;
- (id)_parentTypes;
- (id)_childTypes;
- (id)_subtypes;
- (BOOL)_isExported;
- (BOOL)_isImported;
- (BOOL)_isWildcard;
- (BOOL)_isCoreType;
- (id)_preferredTagOfClass:(id)a0;
- (id)supertypes;

@end
