@class NSData, SISchemaUUID;

@interface SISchemaRequestLinkInfo : SISchemaInstrumentationMessage {
    struct { unsigned char component : 1; } _has;
}

@property (nonatomic) int component;
@property (nonatomic) BOOL hasComponent;
@property (retain, nonatomic) SISchemaUUID *uuid;
@property (nonatomic) BOOL hasUuid;
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
- (void)deleteComponent;
- (void)deleteUuid;

@end
