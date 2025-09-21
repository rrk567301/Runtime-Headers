@interface _UTTaggedType : UTType

+ (void)initialize;
+ (char)supportsSecureCoding;

- (Class)classForCoder;
- (id)identifier;
- (id)localizedDescription;
- (id)version;
- (id)_typeRecord;
- (char)isDeclared;
- (char)isDynamic;
- (id)referenceURL;
- (id)tags;
- (char)conformsToType:(id)a0;
- (id)_localizedDescriptionDictionary;
- (id)_childTypes;
- (unsigned long long)_getEnclosureColors:(struct UTHardwareColor { unsigned char x0; unsigned char x1[3]; union { struct { unsigned char x0; unsigned char x1; unsigned char x2; } x0; int x1; } x2; } *)a0 count:(unsigned long long)a1;
- (char)_isCoreType;
- (char)_isExported;
- (char)_isImported;
- (char)_isWildcard;
- (id)_localizedDescriptionWithPreferredLocalizations:(id)a0;
- (id)_parentTypes;
- (id)_preferredTagOfClass:(id)a0;
- (id)_subtypes;
- (char)isPublicType;
- (id)supertypes;

@end
