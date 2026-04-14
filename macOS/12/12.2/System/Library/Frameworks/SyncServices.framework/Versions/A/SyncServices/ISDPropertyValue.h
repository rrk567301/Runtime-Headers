@class NSString;

@interface ISDPropertyValue : NSObject {
    NSString *_name;
    int _clientNumber;
    id _value;
    id _deletedValue;
    id _unformattedValue;
    unsigned int _generation;
    int _type;
    int _collectionType;
    BOOL _isDefaultValue;
}

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (void)setName:(id)a0;
- (id)value;
- (void)setValue:(id)a0;
- (BOOL)isDeleted;
- (int)propertyType;
- (id)unformattedValue;
- (void)setUnformattedValue:(id)a0;
- (int)collectionType;
- (BOOL)isDefaultValue;
- (void)setIsDefaultValue:(BOOL)a0;
- (id)fastName;
- (id)fastValue;
- (id)createRelationshipValueAsIdentifiers;
- (void)replaceRecordIds:(id)a0;
- (void)replaceRecordId:(id)a0 withRecordId:(id)a1;
- (id)initWithPropertyType:(int)a0 name:(id)a1 value:(id)a2 lastModifiedGeneration:(unsigned int)a3 clientId:(id)a4;
- (id)fastDeletedValue;
- (unsigned int)lastModifiedGeneration;
- (void)replaceRelationshipTupleId:(id)a0 withRelationshipTupleId:(id)a1;
- (id)initDeletedPropertyValueWithPropertyType:(int)a0 name:(id)a1 deletedValue:(id)a2 lastModifiedGeneration:(unsigned int)a3 clientId:(id)a4;
- (void)setCollectionType:(int)a0;
- (void)setValue:(id)a0 inGeneration:(unsigned int)a1 byClientWithId:(id)a2;
- (id)initWithQuickDirtyCoder:(id)a0;
- (void)encodeWithQuickDirtyCoder:(id)a0;
- (int)isd_quickDirtyCoderType;
- (id)lastModifiedByClientId;
- (BOOL)_valuesAreEqual:(id)a0;
- (id)fastLastModifiedByClientId;
- (void)deleteValueInGeneration:(unsigned int)a0 byClientWithId:(id)a1;
- (id)findTuplesWithValueEqualToId:(id)a0;
- (id)fastUnformattedValue;
- (id)deletedValue;
- (id)fastPrimativeUnformattedValue;
- (id)_decodeCollectionData:(id)a0 forType:(int)a1;
- (id)encodeCollectionData:(id)a0 forType:(int)a1;
- (int)lastModifiedByClientNumber;
- (BOOL)_decodedCollectionsAreEqual:(id)a0;
- (void)markDeletedInGeneration:(unsigned int)a0;
- (id)fastValueOrDeletedValue;
- (id)decodeCollectionData:(id)a0 forType:(int)a1;
- (id)valueDecodedIfNecessary;

@end
