@class NSData, SISchemaUUID;

@interface SISchemaRequestLinkInfo : SISchemaInstrumentationMessage {
    struct { unsigned char component : 1; } _has;
}

@property (nonatomic) int component;
@property (nonatomic) char hasComponent;
@property (retain, nonatomic) SISchemaUUID *uuid;
@property (nonatomic) char hasUuid;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteComponent;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteUuid;
- (id)suppressMessageUnderConditions;

@end
