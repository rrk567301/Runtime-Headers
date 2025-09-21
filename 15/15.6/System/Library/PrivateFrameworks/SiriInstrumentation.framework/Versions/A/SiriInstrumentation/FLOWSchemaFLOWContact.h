@class NSData, SISchemaUUID;

@interface FLOWSchemaFLOWContact : SISchemaInstrumentationMessage {
    struct { unsigned char isRelationship : 1; unsigned char isUnnamedPhoneNumber : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (nonatomic) char isRelationship;
@property (nonatomic) char hasIsRelationship;
@property (nonatomic) char isUnnamedPhoneNumber;
@property (nonatomic) char hasIsUnnamedPhoneNumber;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteIsRelationship;
- (void)deleteIsUnnamedPhoneNumber;
- (void)deleteLinkId;
- (id)suppressMessageUnderConditions;

@end
