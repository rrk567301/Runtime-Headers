@interface _UTTaggedType : UTType

+ (BOOL)supportsSecureCoding;
+ (void)initialize;

- (BOOL)isDynamic;
- (id)tags;
- (BOOL)isDeclared;
- (id)identifier;
- (id)localizedDescription;
- (Class)classForCoder;
- (id)version;
- (id)referenceURL;
- (id)_typeRecord;
- (BOOL)conformsToType:(id)a0;
- (id)_localizedDescriptionDictionary;
- (id)_childTypes;
- (unsigned long long)_getEnclosureColors:(struct UTHardwareColor { unsigned char x0; unsigned char x1[3]; union { struct { unsigned char x0; unsigned char x1; unsigned char x2; } x0; int x1; } x2; } *)a0 count:(unsigned long long)a1;
- (BOOL)_isCoreType;
- (BOOL)_isExported;
- (BOOL)_isImported;
- (BOOL)_isWildcard;
- (id)_localizedDescriptionWithPreferredLocalizations:(id)a0;
- (id)_parentTypes;
- (id)_preferredTagOfClass:(id)a0;
- (id)_subtypes;
- (BOOL)isPublicType;
- (id)supertypes;

@end
