@class NSData, SISchemaUUID;

@interface SISchemaComponentIdentifier : SISchemaInstrumentationMessage {
    struct { unsigned char component : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *uuid;
@property (nonatomic) BOOL hasUuid;
@property (nonatomic) int component;
@property (nonatomic) BOOL hasComponent;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteComponent;
- (void)deleteUuid;

@end
