@class NSString, NSData;

@interface NSAttributeDescription : NSPropertyDescription {
    unsigned short _type;
    _Atomic Class _attributeValueClass;
    NSString *_valueTransformerName;
    NSString *_attributeValueClassName;
    id _defaultValue;
}

@property (readonly, nonatomic) char usesMergeableStorage;
@property char preserveValueOnDeletionInPersistentHistory;
@property char isFileBackedFuture;
@property (readonly, nonatomic) char usesMergeableStorage;
@property unsigned long long attributeType;
@property (copy) NSString *attributeValueClassName;
@property (retain) id defaultValue;
@property (readonly, copy) NSData *versionHash;
@property (copy) NSString *valueTransformerName;
@property char allowsExternalBinaryDataStorage;
@property char preservesValueInHistoryOnDeletion;
@property char allowsCloudEncryption;

+ (void)initialize;
+ (char)supportsSecureCoding;
+ (id)stringForAttributeType:(unsigned long long)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)_encodedAttributeFlagsForFlags:(int)a0;
- (char)_isSchemaEqual:(id)a0;
- (char)_attributeTypeIsSchemaEqual:(unsigned long long)a0;
- (Class)_attributeValueClass;
- (char)_comparePredicatesAndWarnings:(id)a0;
- (void)_createCachesAndOptimizeState;
- (char)_epsilonEquals:(id)a0 rhs:(id)a1 withFlags:(int)a2;
- (id)_initWithName:(id)a0 type:(unsigned long long)a1;
- (id)_initWithName:(id)a0 type:(unsigned long long)a1 withClassName:(id)a2;
- (id)_initWithType:(unsigned long long)a0;
- (char)_isAttribute;
- (char)_isEqual:(id)a0 skipIndexCheck:(char)a1;
- (char)_isEqualWithoutIndex:(id)a0;
- (char)_nonPredicateValidateValue:(id *)a0 forKey:(id)a1 inObject:(id)a2 error:(id *)a3;
- (unsigned long long)_propertyType;
- (id)_rawValidationPredicates;
- (id)_rawValidationWarnings;
- (void)_versionHash:(char *)a0 inStyle:(unsigned long long)a1;
- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 entitiesSlots:(id)a5 fetchRequests:(id)a6;
- (char)isIndexed;
- (char)storesBinaryDataExternally;
- (id)validationPredicates;
- (id)validationWarnings;

@end
