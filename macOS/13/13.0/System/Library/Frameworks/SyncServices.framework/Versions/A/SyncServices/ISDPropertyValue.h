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

- (void)dealloc;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (void)setName:(id)a0;
- (id)value;
- (void)setValue:(id)a0;
- (BOOL)isDeleted;
- (int)propertyType;
- (void)setUnformattedValue:(id)a0;
- (id)unformattedValue;
- (int)collectionType;
- (BOOL)isDefaultValue;
- (void)setIsDefaultValue:(BOOL)a0;
- (void)replaceRecordId:(id)a0 withRecordId:(id)a1;
- (void)replaceRelationshipTupleId:(id)a0 withRelationshipTupleId:(id)a1;
- (id)initWithQuickDirtyCoder:(id)a0;
- (void)encodeWithQuickDirtyCoder:(id)a0;
- (int)isd_quickDirtyCoderType;
- (unsigned int)lastModifiedGeneration;
- (BOOL)_valuesAreEqual:(id)a0;
- (id)fastName;
- (id)fastValue;
- (void)replaceRecordIds:(id)a0;
- (id)initWithPropertyType:(int)a0 name:(id)a1 value:(id)a2 lastModifiedGeneration:(unsigned int)a3 clientId:(id)a4;
- (id)initDeletedPropertyValueWithPropertyType:(int)a0 name:(id)a1 deletedValue:(id)a2 lastModifiedGeneration:(unsigned int)a3 clientId:(id)a4;
- (id)deletedValue;
- (id)lastModifiedByClientId;
- (void)setValue:(id)a0 inGeneration:(unsigned int)a1 byClientWithId:(id)a2;
- (void)setCollectionType:(int)a0;
- (void)deleteValueInGeneration:(unsigned int)a0 byClientWithId:(id)a1;
- (void)markDeletedInGeneration:(unsigned int)a0;
- (id)findTuplesWithValueEqualToId:(id)a0;
- (id)fastDeletedValue;
- (id)fastUnformattedValue;
- (id)fastPrimativeUnformattedValue;
- (id)fastValueOrDeletedValue;
- (int)lastModifiedByClientNumber;
- (id)fastLastModifiedByClientId;
- (id)createRelationshipValueAsIdentifiers;
- (id)_decodeCollectionData:(id)a0 forType:(int)a1;
- (id)decodeCollectionData:(id)a0 forType:(int)a1;
- (id)encodeCollectionData:(id)a0 forType:(int)a1;
- (BOOL)_decodedCollectionsAreEqual:(id)a0;
- (id)valueDecodedIfNecessary;

@end
