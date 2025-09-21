@class NSArray, NSString, _INPBIntentMetadata, _INPBModifyRelationship;

@interface _INPBSetRelationshipIntent : PBCodable <_INPBSetRelationshipIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *contactIdentifiers;
@property (readonly, nonatomic) unsigned long long contactIdentifiersCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (retain, nonatomic) _INPBModifyRelationship *targetRelationship;
@property (readonly, nonatomic) char hasTargetRelationship;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)contactIdentifiersType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addContactIdentifiers:(id)a0;
- (void)clearContactIdentifiers;
- (id)contactIdentifiersAtIndex:(unsigned long long)a0;

@end
