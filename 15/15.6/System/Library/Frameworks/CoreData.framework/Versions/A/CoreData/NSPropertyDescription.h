@class NSString, NSArray, NSDictionary, NSData, NSEntityDescription, NSMutableDictionary;

@interface NSPropertyDescription : NSObject <NSSecureCoding, NSCoding, NSCopying> {
    NSString *_versionHashModifier;
    NSData *_versionHash;
    NSEntityDescription *_entity;
    NSString *_name;
    NSArray *_validationPredicates;
    NSArray *_validationWarnings;
    _Atomic struct _NSExtraPropertyIVars *_extraIvars;
    NSMutableDictionary *_userInfo;
    struct __propertyDescriptionFlags { unsigned char _isReadOnly : 1; unsigned char _isTransient : 1; unsigned char _isOptional : 1; unsigned char _isIndexed : 1; unsigned char _skipValidation : 1; unsigned char _isIndexedBySpotlight : 1; unsigned char _isStoredInExternalRecord : 1; unsigned char _extraIvarsAreInDataBlob : 1; unsigned char _isOrdered : 1; unsigned char _hasMaxValueInExtraIvars : 1; unsigned char _hasMinValueInExtraIvars : 1; unsigned char _storeBinaryDataExternally : 1; unsigned char _preserveValueOnDelete : 1; unsigned char _isTriggerBacked : 1; unsigned char _isFileBackedFuture : 1; unsigned char _allowsCloudEncryption : 1; } _propertyDescriptionFlags;
    short _entitysReferenceIDForProperty;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSEntityDescription *entity;
@property (copy, nonatomic) NSString *name;
@property (getter=isOptional) char optional;
@property (getter=isTransient) char transient;
@property (readonly) NSArray *validationPredicates;
@property (readonly) NSArray *validationWarnings;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (getter=isIndexed) char indexed;
@property (readonly, copy) NSData *versionHash;
@property (copy) NSString *versionHashModifier;
@property (getter=isIndexedBySpotlight) char indexedBySpotlight;
@property (getter=isStoredInExternalRecord) char storedInExternalRecord;
@property (copy) NSString *renamingIdentifier;

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)_initWithName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isReadOnly;
- (void)setReadOnly:(char)a0;
- (char)_isOrdered;
- (char)_isSchemaEqual:(id)a0;
- (char)_skipValidation;
- (char)isStoredInTruth;
- (char)_isRelationship;
- (char)_isSpotlightIndexedAndTransient;
- (char)_allowsCloudEncryption;
- (void)_appendPropertyFieldsToData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 entitiesSlots:(id)a5;
- (char)_comparePredicatesAndWarnings:(id)a0;
- (void)_createCachesAndOptimizeState;
- (int)_encodedPropertyFlagsForFlags:(int)a0;
- (long long)_entitysReferenceID;
- (char)_epsilonEquals:(id)a0 rhs:(id)a1 withFlags:(int)a2;
- (struct _NSExtraPropertyIVars { id x0; long long x1; long long x2; id x3; id x4; _Atomic char x5; } *)_extraIVars;
- (char)_hasMaxValueInExtraIvars;
- (char)_hasMinValueInExtraIvars;
- (void)_initializeExtraIVars;
- (char)_isAttribute;
- (char)_isEditable;
- (char)_isEqual:(id)a0 skipIndexCheck:(char)a1;
- (char)_isEqualWithoutIndex:(id)a0;
- (char)_isFileBackedFuture;
- (char)_isToManyRelationship;
- (char)_isTriggerBacked;
- (id)_namespace;
- (char)_nonPredicateValidateValue:(id *)a0 forKey:(id)a1 inObject:(id)a2 error:(id *)a3;
- (char)_preserveValueOnDelete;
- (unsigned long long)_propertyType;
- (id)_qualifiedName;
- (id)_rawValidationPredicates;
- (id)_rawValidationWarnings;
- (void)_replaceValidationPredicates:(id)a0 andWarnings:(id)a1;
- (void)_restoreValidation;
- (void)_setEntity:(id)a0;
- (void)_setEntityAndMaintainIndices:(id)a0;
- (void)_setEntitysReferenceID:(long long)a0;
- (void)_setOrdered:(char)a0;
- (char)_storeBinaryDataExternally;
- (void)_stripForMigration;
- (void)_throwIfNotEditable;
- (id)_underlyingProperty;
- (void)_versionHash:(char *)a0 inStyle:(unsigned long long)a1;
- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 entitiesSlots:(id)a5 fetchRequests:(id)a6;
- (id)elementID;
- (char)isSpotlightIndexed;
- (char)isStoredInTruthFile;
- (void)setElementID:(id)a0;
- (void)setSpotlightIndexed:(char)a0;
- (void)setStoredInTruth:(char)a0;
- (void)setStoredInTruthFile:(char)a0;
- (void)setSuperCompositeAttribute:(id)a0;
- (void)setValidationPredicates:(id)a0 withValidationWarnings:(id)a1;
- (id)superCompositeAttribute;

@end
