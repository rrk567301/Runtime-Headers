@class NSData, SISchemaUUID;

@interface FLOWSchemaFLOWEntityContext : SISchemaInstrumentationMessage {
    struct { unsigned char numberOfEntitiesShown : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) unsigned int numberOfEntitiesShown;
@property (nonatomic) BOOL hasNumberOfEntitiesShown;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteLinkId;
- (void)deleteNumberOfEntitiesShown;

@end
