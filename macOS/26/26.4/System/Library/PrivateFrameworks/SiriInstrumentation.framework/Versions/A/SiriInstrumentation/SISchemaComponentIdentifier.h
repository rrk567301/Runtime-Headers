@class NSData, SISchemaUUID;

@interface SISchemaComponentIdentifier : SISchemaInstrumentationMessage {
    struct { unsigned char component : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *uuid;
@property (nonatomic) BOOL hasUuid;
@property (nonatomic) int component;
@property (nonatomic) BOOL hasComponent;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteComponent;
- (void)deleteUuid;

@end
