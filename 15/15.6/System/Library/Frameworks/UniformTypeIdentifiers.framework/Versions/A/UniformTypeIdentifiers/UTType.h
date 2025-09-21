@class NSString, NSURL, NSSet, NSOrderedSet, NSDictionary, UTTypeRecord, NSNumber;

@interface UTType : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) UTType *_typeOfCurrentDevice;
@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSSet *supertypes;
@property (readonly) NSDictionary *tags;
@property (readonly) long long _constantIndex;
@property (readonly) long long _constantIndex;
@property (readonly, getter=_isRealized) char _realized;
@property (readonly) UTTypeRecord *_typeRecord;
@property (readonly) NSDictionary *_localizedDescriptionDictionary;
@property (readonly) NSString *_kindString;
@property (readonly) NSDictionary *_kindStringDictionary;
@property (readonly) NSOrderedSet *_parentTypes;
@property (readonly) NSSet *_childTypes;
@property (readonly) NSSet *_subtypes;
@property (readonly, getter=_isExported) char _exported;
@property (readonly, getter=_isImported) char _imported;
@property (readonly, getter=_isWildcard) char _wildcard;
@property (readonly, getter=_isCoreType) char _coreType;
@property (readonly) NSString *identifier;
@property (readonly) NSString *preferredFilenameExtension;
@property (readonly) NSString *preferredMIMEType;
@property (readonly) NSString *localizedDescription;
@property (readonly) NSNumber *version;
@property (readonly) NSURL *referenceURL;
@property (readonly, getter=isDynamic) char dynamic;
@property (readonly, getter=isDeclared) char declared;
@property (readonly, getter=isPublicType) char publicType;

+ (id)new;
+ (id)typeWithFilenameExtension:(id)a0;
+ (id)_constantTypeForURLPropertyProviderWithIdentifier:(id)a0;
+ (id)_typeForURLPropertyProviderWithTypeRecord:(id)a0;
+ (id)_typeWithDeviceModelCode:(id)a0;
+ (id)_typeWithDeviceModelCode:(id)a0 enclosureColor:(struct UTHardwareColor { unsigned char x0; unsigned char x1[3]; union { struct { unsigned char x0; unsigned char x1; unsigned char x2; } x0; int x1; } x2; })a1;
+ (id)typeWithIdentifier:(id)a0;
+ (id)typeWithMIMEType:(id)a0;
+ (id)_typeWithHFSTypeCode:(unsigned int)a0 conformingToType:(id)a1;
+ (id)typeWithFilenameExtension:(id)a0 conformingToType:(id)a1;
+ (id)typesWithTag:(id)a0 tagClass:(id)a1 conformingToType:(id)a2;
+ (id)exportedTypeWithIdentifier:(id)a0 conformingToType:(id)a1;
+ (void)_enumerateAllDeclaredTypesUsingBlock:(id /* block */)a0;
+ (id)_exportedTypeWithIdentifier:(id)a0 bundle:(id)a1 conformingToType:(id)a2;
+ (id)_importedTypeWithIdentifier:(id)a0 bundle:(id)a1 conformingToType:(id)a2;
+ (id)_typeOfItemAtFileURL:(id)a0 error:(id *)a1;
+ (id)_typeOfPromiseAtFileURL:(id)a0 error:(id *)a1;
+ (id)_typeWithBluetoothProductID:(unsigned int)a0 vendorID:(unsigned short)a1;
+ (id)_typeWithDeviceModelCodeWithoutResolvingCurrentDevice:(id)a0;
+ (id)_typeWithHFSTypeCode:(unsigned int)a0;
+ (id)_typeWithIdentifier:(id)a0 allowUndeclared:(char)a1;
+ (id)_typeWithIdentifier:(id)a0 constantIndex:(long long)a1 error:(id *)a2;
+ (id)_typeWithTypeRecord:(id)a0 detachTypeRecord:(char)a1 findConstant:(char)a2;
+ (id)_typesWithIdentifiers:(id)a0;
+ (void)_unrealizeAllCoreTypes;
+ (id)exportedTypeWithIdentifier:(id)a0;
+ (id)importedTypeWithIdentifier:(id)a0;
+ (id)importedTypeWithIdentifier:(id)a0 conformingToType:(id)a1;
+ (id)typeWithMIMEType:(id)a0 conformingToType:(id)a1;
+ (id)typeWithTag:(id)a0 tagClass:(id)a1 conformingToType:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_shouldURLPropertyProviderEncodeTypeRecord;
- (char)conformsToType:(id)a0;
- (char)_getEnclosureColor:(struct UTHardwareColor { unsigned char x0; unsigned char x1[3]; union { struct { unsigned char x0; unsigned char x1; unsigned char x2; } x0; int x1; } x2; } *)a0;
- (unsigned long long)_getEnclosureColors:(struct UTHardwareColor { unsigned char x0; unsigned char x1[3]; union { struct { unsigned char x0; unsigned char x1; unsigned char x2; } x0; int x1; } x2; } *)a0 count:(unsigned long long)a1;
- (unsigned long long)_getHFSTypeCodes:(unsigned int *)a0 count:(unsigned long long)a1;
- (char)_getPreferredEnclosureColor:(struct UTHardwareColor { unsigned char x0; unsigned char x1[3]; union { struct { unsigned char x0; unsigned char x1; unsigned char x2; } x0; int x1; } x2; } *)a0;
- (char)_getPreferredHFSTypeCode:(unsigned int *)a0;
- (id)_initWithTypeRecord:(id)a0;
- (id)_kindStringWithPreferredLocalizations:(id)a0;
- (id)_localizedDescriptionWithPreferredLocalizations:(id)a0;
- (id)_preferredTagOfClass:(id)a0;
- (void)_unrealize;
- (char)isSubtypeOfType:(id)a0;
- (char)isSupertypeOfType:(id)a0;

@end
