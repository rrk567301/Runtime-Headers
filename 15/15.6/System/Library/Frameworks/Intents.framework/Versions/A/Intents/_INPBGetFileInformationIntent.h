@class _INPBIntentMetadata, NSString, _INPBString;

@interface _INPBGetFileInformationIntent : PBCodable <_INPBGetFileInformationIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char entityType : 1; unsigned char propertyName : 1; unsigned char qualifier : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBString *entityName;
@property (readonly, nonatomic) char hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) char hasEntityType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (nonatomic) int propertyName;
@property (nonatomic) char hasPropertyName;
@property (nonatomic) int qualifier;
@property (nonatomic) char hasQualifier;
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
- (int)StringAsPropertyName:(id)a0;
- (id)propertyNameAsString:(int)a0;
- (int)StringAsEntityType:(id)a0;
- (int)StringAsQualifier:(id)a0;
- (id)entityTypeAsString:(int)a0;
- (id)qualifierAsString:(int)a0;

@end
