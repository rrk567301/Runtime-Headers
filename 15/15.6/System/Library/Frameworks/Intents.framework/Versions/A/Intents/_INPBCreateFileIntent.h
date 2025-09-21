@class _INPBIntentMetadata, NSString, _INPBString;

@interface _INPBCreateFileIntent : PBCodable <_INPBCreateFileIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char destinationType : 1; unsigned char entityType : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBString *destinationName;
@property (readonly, nonatomic) char hasDestinationName;
@property (nonatomic) int destinationType;
@property (nonatomic) char hasDestinationType;
@property (retain, nonatomic) _INPBString *entityName;
@property (readonly, nonatomic) char hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) char hasEntityType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsDestinationType:(id)a0;
- (id)destinationTypeAsString:(int)a0;
- (int)StringAsEntityType:(id)a0;
- (id)entityTypeAsString:(int)a0;

@end
